/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_20 = ((((min((arr_3 [i_2 - 1] [9] [i_2]), (arr_3 [i_2 + 2] [i_2] [i_2])))) ? (((~(arr_6 [i_1 - 1] [i_1] [i_2])))) : (min((((var_15 ^ (arr_1 [7])))), (min(var_0, var_8))))));
                    var_21 = (min((((arr_1 [i_1]) ? (((arr_0 [i_1]) ? var_4 : (arr_2 [i_0]))) : (arr_4 [i_2]))), ((((268435455 & var_6) != (arr_4 [i_0]))))));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_9 [i_1] [i_1] = var_13;
                        var_22 = ((min(((var_7 ? 18446744073709551615 : var_12)), (arr_2 [i_2 - 1]))));
                        var_23 = (min(var_23, (((((min(617144776, (arr_8 [i_0 - 4] [i_0 - 4] [i_1 - 1] [i_1 - 1])))) ? ((((!(((0 << (((arr_2 [7]) - 177))))))))) : 2194649104)))));
                        var_24 = ((((((((21995 ? (arr_1 [i_0]) : (arr_6 [i_0] [i_0] [i_0])))) ? (arr_0 [7]) : (((~(arr_7 [i_1] [i_1] [i_1] [i_3]))))))) ? (min((((arr_4 [i_0 + 2]) ? var_8 : var_18)), (arr_7 [i_1] [i_0 - 4] [i_0] [i_1]))) : (arr_2 [i_3])));
                    }
                    for (int i_4 = 1; i_4 < 9;i_4 += 1)
                    {
                        var_25 ^= ((var_6 ? var_8 : ((min((arr_4 [i_0 + 2]), (arr_6 [1] [1] [i_4]))))));
                        var_26 = ((((max((var_4 % var_13), (arr_11 [i_2])))) < (max((arr_8 [i_0] [0] [i_0] [i_0]), var_19))));
                    }
                    arr_13 [i_2] [i_0] [i_0] [i_0] &= (min((arr_10 [i_0] [i_1] [i_0] [i_0] [i_2] [i_0 - 3]), (min((arr_2 [i_1]), (~1)))));
                    arr_14 [i_1] = (arr_2 [i_0]);
                }
            }
        }
    }
    var_27 = (((((var_7 ? (var_16 & var_3) : ((var_7 ? var_14 : var_16))))) ? (-var_0 < var_11) : (((min(var_0, 1)) << (var_10 + 9023348563877936315)))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            {
                var_28 = (((((arr_17 [i_6]) << (((arr_18 [i_5]) + 17982)))) << (((~var_19) - 2821063108))));
                arr_20 [4] &= (((max((min(var_3, var_16)), (arr_15 [i_5]))) + 0));
                var_29 = (min(var_29, 0));
            }
        }
    }
    #pragma endscop
}
