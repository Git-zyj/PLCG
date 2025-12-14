/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = ((63568 * ((((((!(arr_2 [13] [i_0])))) < 0)))));

                for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
                {
                    var_21 = ((var_0 ? (min((arr_4 [i_0] [i_0] [16] [i_0]), 6442621104503918195)) : (min((((var_6 ? (arr_0 [i_0 + 1]) : (arr_2 [i_1] [i_0])))), var_6))));
                    var_22 = ((arr_0 [i_0 + 2]) ? 2147483647 : (((arr_0 [i_0 - 1]) + (arr_0 [i_0 + 2]))));
                }
                for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
                {
                    arr_9 [i_0] [i_0] [6] [15] = ((((((~var_13) ? var_0 : (arr_3 [i_0 + 2] [i_0 - 1])))) ? (max((arr_4 [18] [18] [i_0 + 1] [1]), (14 ^ 2147483647))) : (max(((~(arr_4 [i_0 + 1] [i_0 + 1] [22] [i_3]))), 0))));

                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        arr_13 [i_4] [i_3] [15] [12] [8] [i_4] = (min((min(((9181808492980326834 ? -20 : 4294967282)), var_15)), (arr_2 [i_0] [i_1])));
                        var_23 = ((!(var_7 / var_7)));
                        var_24 = 0;
                        var_25 = ((((arr_4 [i_0] [5] [19] [i_0 - 1]) ^ (arr_4 [14] [i_4] [1] [i_0 + 3]))) / 955786188);
                    }
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_26 = (arr_5 [i_3] [i_3]);
                        var_27 = (min(var_27, (((var_19 ? (((!((min((arr_10 [7] [i_1] [i_3]), -231065422863398185)))))) : (((((arr_5 [i_3] [i_3]) || 9264935580729224781)) ? (min(229, (-2147483647 - 1))) : (231673462 / 2147483647))))))));
                        var_28 -= (max((((var_19 ? (!2147483647) : 0))), var_0));
                    }
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        var_29 = ((var_4 & (min(0, (arr_17 [i_0 - 1] [i_0 - 1] [i_0 + 3] [i_0 + 2] [i_3])))));
                        var_30 = (min(var_30, ((min((-2147483645 + 2147483644), ((4775054804928566264 ? (arr_14 [8] [i_1] [21] [21] [i_3] [i_6]) : (arr_14 [i_0] [i_0 + 1] [7] [1] [i_3] [i_6]))))))));
                    }
                    for (int i_7 = 2; i_7 < 22;i_7 += 1)
                    {
                        var_31 = (((arr_4 [10] [10] [i_3] [i_3]) ? (arr_20 [20] [i_1] [i_1] [i_7] [i_1]) : (((9264935580729224783 != (arr_12 [i_0 + 3] [i_0 + 2] [i_7 - 1] [i_7]))))));
                        arr_21 [3] [i_1] [i_7] = ((((((var_7 < (arr_0 [i_1]))) || var_5)) || (arr_17 [i_0] [14] [15] [i_0 + 1] [i_1])));
                    }
                    var_32 = (arr_4 [i_0 + 1] [i_1] [i_3] [i_3]);
                }
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    var_33 = (max(var_33, ((min(9264935580729224777, (~9181808492980326822))))));
                    var_34 = (max(var_34, (arr_22 [3] [i_8])));
                }
            }
        }
    }
    var_35 = ((((((max(-2147483647, -2147483645))) ? 0 : 7)) != ((((!(((9264935580729224783 ? var_9 : var_10)))))))));
    var_36 ^= var_8;
    #pragma endscop
}
