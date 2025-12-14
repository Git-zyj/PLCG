/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(18, -35));
    var_15 = (max(var_15, ((((-4521378699794559439 ? 4521378699794559436 : 1059577228))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    arr_6 [i_0 - 1] [i_0 - 1] = (~-87);
                    var_16 = (min(var_16, (arr_4 [i_1 + 1] [i_1 - 2] [i_1])));
                }

                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_17 = (max(var_17, (((1 ? (2184835087 <= var_13) : -9223372036854775803)))));
                        arr_13 [i_0] [i_1] [i_3] [i_4] |= ((var_3 ? 2110132193 : (arr_10 [i_1 + 1] [i_0 - 2] [i_0 - 1])));
                    }
                    arr_14 [i_0] [i_0] [i_3] [i_0] = (max(((-9223372036854775799 ? -7467874943020681059 : -9223372036854775807)), (3074424940 - 1)));
                    arr_15 [i_0] [i_1] = ((47917 ? (max(((31744 ? (arr_9 [i_1] [i_1 + 1] [i_1]) : 2110132216)), (max((arr_11 [i_0] [i_1] [i_1] [i_1]), var_8)))) : (arr_11 [i_1] [i_1 - 1] [i_1 - 1] [i_1])));
                    var_18 = (arr_4 [i_0] [i_1] [i_1]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_20 [i_6] = (max(4196235326638637723, -101));
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_6] = (min((max((arr_1 [i_0] [i_3]), (arr_1 [i_0 - 2] [i_0 - 2]))), (((arr_1 [i_0 + 1] [i_0]) ? var_1 : var_3))));
                            }
                        }
                    }
                }
                arr_22 [i_0] [i_0] = ((55279 >> (1907213128 - 1907213109)));
                var_19 = (((!-1431649490159815586) ? (((((arr_0 [i_0] [i_1]) && (((~(arr_19 [i_0] [i_0] [i_0])))))))) : (min(7966817715489359696, 1907213134))));
            }
        }
    }
    #pragma endscop
}
