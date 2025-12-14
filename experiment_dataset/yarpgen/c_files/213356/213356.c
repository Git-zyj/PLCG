/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((max(((0 ? 1107672801 : 3187294495)), (((var_2 ? 1 : var_0)))))) ? -1152917106560335872 : (~-1)));
    var_11 = (((((-var_4 ? (max(-123, 3187294482)) : ((max(var_2, 3)))))) ? (min((min(var_5, 1057540818969947261)), ((var_5 ? var_8 : 0)))) : ((var_4 ? (((min(var_5, 1)))) : ((-2414 ? var_5 : var_6))))));
    var_12 = ((~(min(((min(var_7, var_5))), (min(var_2, var_3))))));

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [15] = 1;
        var_13 = (((((((((arr_0 [i_0]) ? 1 : 18446744073709551615))) ? (max(10163872576180681373, 1)) : (min(45, (arr_1 [i_0] [i_0])))))) ? 62 : ((-2414 ? -38 : 1))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_14 = ((~((~(min(1107672801, 1594945731))))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_15 = (((!-4095) ? (min(-38, (arr_4 [i_2 - 1]))) : ((((arr_0 [i_0 - 2]) ? (max((arr_7 [6] [i_1] [i_2] [1]), 536870880)) : 1)))));
                        var_16 = (arr_9 [13] [i_0]);
                    }
                    var_17 = (max(var_17, ((!((min((max((-2147483647 - 1), 0)), (((!(-9223372036854775807 - 1)))))))))));
                }
            }
        }
        var_18 -= (max((min(-28, (min((arr_1 [2] [i_0]), 4611686018427387903)))), (arr_5 [i_0] [6])));
    }
    var_19 = var_6;
    #pragma endscop
}
