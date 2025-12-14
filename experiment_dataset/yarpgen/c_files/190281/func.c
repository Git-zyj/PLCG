/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190281
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_1 + 3] [i_2] [i_2 - 4])) * (((/* implicit */int) (short)1183))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_1 + 1] [i_1] [i_2 - 2]))))) : ((-(1139100585732804152LL))))))));
                                var_14 = ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned long long int) var_4)), (var_6)))));
                                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(11688172409115503537ULL)))) ? ((+(arr_12 [i_0] [i_1] [14LL] [i_2] [i_2] [i_3] [i_4]))) : (((/* implicit */unsigned long long int) var_12))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = (~((-(arr_13 [i_2 - 4] [i_1] [i_1 + 2] [i_1 + 2]))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned int) ((long long int) var_9));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) var_4);
}
