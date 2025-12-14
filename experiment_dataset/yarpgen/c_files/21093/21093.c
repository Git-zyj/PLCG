/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    arr_6 [i_0] = min((arr_3 [i_2 - 3]), (((((-9223372036854775799 ? var_11 : (arr_4 [i_2])))) ? 9223372036854775786 : (~var_11))));
                    var_16 = 2305702271725338624;
                    arr_7 [i_0] [11] = ((-(var_8 && var_10)));
                    var_17 &= -1152921504606846976;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_18 = (min(var_18, (arr_9 [i_0] [i_0] [i_0])));
                        var_19 = (-9223372036854775789 ? -9223372036854775797 : 2251799809490944);
                        arr_10 [3] [i_1] [i_1] [i_2] [15] = (((14 != (-9223372036854775807 - 1))) ? (arr_4 [i_1]) : (var_10 >= -9223372036854775806));
                    }
                }
            }
        }
    }

    for (int i_4 = 1; i_4 < 8;i_4 += 1)
    {
        var_20 = (min(var_20, ((((((var_4 ? var_1 : var_12)) ? (9223372036854775807 & var_0) : 9223372036854775797))))));
        var_21 -= arr_1 [i_4 + 3];
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        var_22 = max(((~(((var_3 + 9223372036854775807) << (((arr_9 [0] [4] [i_5]) - 3441641303113763057)))))), 9223372036854775797);
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 8;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    {
                        var_23 = (min(var_23, 9223372036854775807));
                        var_24 *= ((((~(arr_18 [i_6 + 1] [i_7] [i_8]))) == (max((arr_12 [i_6 + 1] [4]), (arr_18 [i_6 - 1] [i_7] [i_8])))));
                        var_25 = ((!(((-(arr_12 [i_6 - 1] [i_6 + 2]))))));
                        arr_22 [i_6] [5] [9] [1] = ((((arr_21 [3] [i_6 + 1] [i_6] [i_6 - 1]) ? (arr_21 [i_6 + 1] [i_6 + 2] [i_6 + 2] [i_6 + 1]) : (arr_9 [i_6 + 1] [i_6 + 2] [0]))) / (var_1 & var_13));
                        var_26 = -var_14;
                    }
                }
            }
        }
    }
    var_27 = var_5;
    #pragma endscop
}
