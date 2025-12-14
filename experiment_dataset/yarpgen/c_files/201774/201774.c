/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((-var_1 ? -8 : ((var_2 ? var_5 : var_3))))) ? 9223372036854775807 : var_3));
    var_15 = (((-((32 ? var_13 : var_7)))));
    var_16 &= ((((((((-26 ? var_10 : var_1))) ? ((1 ? var_10 : 1)) : var_8))) ? ((var_5 ? var_12 : (var_11 > 4315316131364806693))) : (((((var_7 ? var_11 : var_10)) <= (var_3 * var_1))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 &= (((((-var_6 ? ((var_6 ? var_3 : var_10)) : var_10))) ? ((((((var_12 ? var_8 : var_7)) < (((32 ? var_5 : -43))))))) : (max((arr_5 [i_0] [i_1] [i_0] [i_2]), (arr_3 [i_2] [i_1] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_18 = (max((arr_2 [i_0]), (max(((min((arr_8 [i_0]), -49))), var_7))));
                                var_19 *= (!63);
                                var_20 = ((!(((-(arr_7 [i_4] [i_4 - 1] [i_2 - 1] [i_2 - 1]))))));
                                var_21 &= min((var_7 < var_12), ((-26 ? (arr_1 [i_3]) : var_7)));
                                var_22 *= ((!(~7)));
                            }
                        }
                    }
                    var_23 &= (max(0, (min((arr_1 [i_0]), (arr_1 [i_0])))));
                }
            }
        }
    }
    #pragma endscop
}
