/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205268
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_20 &= ((/* implicit */unsigned int) min((((((var_7) * (var_10))) ^ (((/* implicit */unsigned long long int) var_8)))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (7398285990778038882ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_13)))) : (min((((/* implicit */unsigned long long int) var_14)), (var_10)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] [i_1] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))));
                                var_21 = ((/* implicit */unsigned int) ((_Bool) var_3));
                                var_22 -= ((/* implicit */signed char) (-((-(((/* implicit */int) ((_Bool) 34902897112121344ULL)))))));
                            }
                        } 
                    } 
                } 
                arr_12 [i_0] [i_1] [i_1] = var_9;
                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((unsigned int) arr_6 [i_1 - 3] [i_1 - 3] [i_0] [i_0])), (((/* implicit */unsigned int) (_Bool)1))))) ? ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_1] [20U] [i_1 - 3] [16LL]))) : (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))));
                var_24 = ((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0] [i_1] [i_1 - 2]);
            }
        } 
    } 
}
