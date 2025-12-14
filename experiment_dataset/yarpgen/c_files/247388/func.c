/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247388
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
    for (short i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_18 *= arr_13 [16] [i_1] [(_Bool)1] [i_3] [i_4];
                                var_19 *= ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_1] [i_1 + 2] [16] [i_3 - 1] [i_4])) ? (min((((/* implicit */int) (short)24751)), (-26))) : (min((((/* implicit */int) (_Bool)1)), (26)))))), (min((arr_11 [i_0 + 1] [0ULL] [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1]), (((/* implicit */long long int) var_4))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((long long int) ((((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_0] [i_2] [i_2])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)-35)))) << (((arr_8 [i_1 + 1] [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_1 - 1] [0ULL]) + (467100783)))))))));
                    var_21 = ((((/* implicit */int) arr_6 [(short)4] [i_0] [i_1] [i_2])) ^ (((((/* implicit */int) (signed char)-35)) ^ ((~(((/* implicit */int) var_6)))))));
                }
            } 
        } 
    } 
    var_22 |= ((/* implicit */_Bool) var_13);
    var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)35))));
}
