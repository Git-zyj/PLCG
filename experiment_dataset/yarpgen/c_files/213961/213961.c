/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((-var_4 ? var_7 : (!0))) | var_3);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_12 &= (max((arr_4 [i_1] [i_1]), (max(16383, (arr_4 [i_2 + 2] [i_2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_13 = (max(var_13, ((((17345789900607323539 ? 9223372036854775803 : (arr_10 [12] [i_1] [i_2 + 1] [i_2] [i_2] [i_4])))))));
                                var_14 = (max(var_14, (((~((((((var_10 + 9223372036854775807) << (var_2 - 1284252346)))) ? ((var_4 ? var_5 : var_3)) : (arr_9 [i_1] [i_1 - 1] [i_1] [i_3] [4] [i_3]))))))));
                            }
                        }
                    }

                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        arr_15 [i_5] [i_0] [i_1] [i_0] [i_0] = ((!((var_2 < (-2147483647 - 1)))));
                        var_15 = var_6;
                        var_16 = (min(var_16, (((!(((-9223372036854775803 ? (max(7, (-9223372036854775807 - 1))) : ((var_0 ? 5 : (-9223372036854775807 - 1)))))))))));
                    }
                    var_17 = ((((((var_2 - var_8) ? (max((arr_0 [i_0]), var_5)) : (~9223372036854775803)))) ? -var_4 : ((((arr_13 [18] [i_2 + 2] [i_2 - 2] [i_2 + 1] [i_2]) ? var_2 : -1917846762)))));
                    arr_16 [i_0] [i_0] [19] [i_0] = var_3;
                }
            }
        }
    }
    var_18 -= var_6;
    var_19 = (max(var_19, ((max(1917846761, var_2)))));
    #pragma endscop
}
