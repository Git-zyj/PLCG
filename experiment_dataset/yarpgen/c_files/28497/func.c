/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28497
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
    var_17 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) ((int) var_13));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_3])) ? (17068587168743878229ULL) : (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_2] [i_3])))) == (((/* implicit */unsigned long long int) arr_7 [i_1] [i_3] [i_2] [i_2]))));
                            var_19 = (+(((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (((int) arr_4 [i_3] [i_2] [i_1] [i_0])) : (((((/* implicit */_Bool) arr_6 [i_3] [i_2] [i_1] [i_0])) ? (var_6) : (1))))));
                        }
                    } 
                } 
                var_20 = ((unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])) ? (min((arr_4 [i_1] [i_1] [11] [11]), (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) (-(arr_8 [i_1] [i_1] [i_0] [i_0]))))));
            }
        } 
    } 
}
