/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~(((((var_7 ? var_11 : var_1))) ? (70368744177152 ^ var_1) : var_6))));
    var_14 = (min(((-(3 / -14400))), ((((~var_12) && (var_11 / var_9))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [18] [i_1] = ((!(((var_5 ? (arr_3 [i_1] [i_0]) : var_9)))));
                arr_5 [i_0] [i_0] [i_1] = max((17265 % var_6), (max((((!(arr_2 [i_0] [9] [i_1])))), (min((arr_0 [i_0]), var_7)))));
                arr_6 [i_1] [i_1] = ((+(((((arr_1 [i_1]) ^ var_5)) << (((arr_3 [i_0] [i_1]) - 156))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {

                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    var_15 = (((((14412 || (arr_13 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1])))) / (((arr_15 [i_4 - 1] [i_4 - 1] [i_4 - 1]) ? (arr_15 [i_4 - 1] [i_4 - 1] [i_4 - 1]) : (arr_15 [i_4 - 1] [i_4 - 1] [i_4 - 1])))));
                    var_16 = (max(var_16, (arr_15 [i_4 - 1] [i_4] [i_4 - 1])));
                }
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    arr_20 [i_2] [i_3] [i_5] [i_2] = (~var_9);
                    arr_21 [i_5] [i_5] [i_5] [0] = (max(((((arr_16 [i_3] [i_5]) || 4080))), (max((arr_8 [13] [2]), (!var_5)))));
                    arr_22 [i_5] [i_5] [i_5] = ((~(max(var_6, (arr_1 [i_5])))));
                    var_17 = (max(-3, 26932));
                }
                for (int i_6 = 3; i_6 < 21;i_6 += 1)
                {
                    arr_25 [i_6] [i_6] = -6427654383579631016;
                    arr_26 [i_2] [i_6] [i_2] = ((((min(var_0, (arr_7 [i_3]))) << (var_9 - 892699937))));
                    arr_27 [i_6 + 2] [i_6] [i_6] [i_2] = ((~((((max(1, 119))) % -17266))));
                    arr_28 [i_2] [17] [i_6] = (((!var_8) < (-7029 ^ -14400)));
                }
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            {
                                arr_37 [i_7] = 36583;
                                arr_38 [22] [i_3] [i_7] [i_8] [i_9] = var_10;
                            }
                        }
                    }
                    arr_39 [i_7] [i_3] [i_3] = ((!((((var_12 | 1) ^ (arr_3 [i_2] [i_3]))))));
                    var_18 = (((arr_3 [1] [i_3]) ? ((-2147483647 ? var_9 : ((var_4 ? 1 : var_6)))) : (arr_15 [3] [1] [i_2])));
                    arr_40 [i_7] [i_3] [i_7] = (min((var_0 * var_3), var_1));
                }
                arr_41 [i_2] [i_3] = (((((~(((-1614522245 + 2147483647) << (((-17254 + 17260) - 4))))))) ? ((var_12 & (max(var_3, (-2147483647 - 1))))) : (-2147483647 | var_2)));
                var_19 = (((arr_31 [i_2] [0] [i_3]) ? (6427654383579631015 || var_0) : (~7307)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 25;i_10 += 1)
    {
        for (int i_11 = 3; i_11 < 24;i_11 += 1)
        {
            {
                var_20 = (~var_3);
                arr_47 [i_11 - 2] [i_11] = var_8;
                arr_48 [i_11 - 2] [i_10] = (((arr_43 [i_11 - 1]) & (arr_2 [i_11] [i_11] [i_10])));
            }
        }
    }
    #pragma endscop
}
