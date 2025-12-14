/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208049
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_0), (((/* implicit */short) var_11))))) ? (((/* implicit */long long int) arr_0 [i_0])) : (arr_2 [i_1]))))));
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 13; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */short) ((unsigned long long int) arr_6 [i_0] [i_0]));
                            var_15 = ((/* implicit */short) arr_5 [i_0] [i_1] [i_3]);
                            var_16 ^= ((/* implicit */long long int) ((unsigned long long int) ((unsigned short) ((var_11) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_8 [i_0] [(short)12] [i_2] [4LL]))))));
                            var_17 = min((((((/* implicit */int) arr_8 [i_1 - 2] [i_1 + 1] [i_1] [i_1])) - (arr_7 [i_1 - 1] [i_3 + 1] [i_1]))), (((/* implicit */int) var_7)));
                            var_18 = ((/* implicit */_Bool) ((signed char) var_2));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = var_10;
}
