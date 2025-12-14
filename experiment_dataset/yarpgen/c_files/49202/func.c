/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49202
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
    var_15 = ((/* implicit */long long int) (-(((((_Bool) var_4)) ? (((/* implicit */unsigned long long int) max((352421607284501923LL), (((/* implicit */long long int) (_Bool)1))))) : ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_0)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_16 += ((/* implicit */unsigned long long int) max(((_Bool)1), (((((/* implicit */int) ((_Bool) arr_9 [i_0] [i_0] [i_1] [i_2] [i_3]))) != (((/* implicit */int) var_5))))));
                            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) arr_8 [i_3])) : (((/* implicit */int) ((_Bool) var_5)))))) ? (((/* implicit */int) ((unsigned short) (-(((/* implicit */int) arr_3 [i_2] [i_3])))))) : ((-(((/* implicit */int) var_5))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned long long int) var_4);
            }
        } 
    } 
    var_19 = (!(((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) var_13)), (var_0)))))));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_13))) ? (((long long int) (unsigned char)127)) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_8))))));
    var_21 = ((/* implicit */signed char) (unsigned char)111);
}
