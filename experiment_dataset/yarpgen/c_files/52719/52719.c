/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_20 = ((((((var_2 != (arr_9 [i_0] [i_0 + 1] [i_0 + 1] [i_0])) && (((var_5 ? 9184495411265021260 : var_3))))))));
                    var_21 |= (max((((((var_15 ? var_12 : var_2))) ? var_15 : (max(var_6, var_18)))), ((9184495411265021257 ? 9262248662444530353 : 8))));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_22 -= (min((max((max(9262248662444530353, 9262248662444530351)), var_10)), var_4));

                        for (int i_4 = 3; i_4 < 10;i_4 += 1) /* same iter space */
                        {
                            var_23 = ((+(max((arr_10 [i_4 - 2] [i_0] [i_0 - 3] [i_0] [i_0 - 3]), (arr_10 [i_4 - 2] [i_0] [i_1] [i_0] [i_0 - 2])))));
                            var_24 = (9262248662444530353 ? 97 : 1775638323);
                            var_25 = ((6 == (((max(-26, 26))))));
                            var_26 = ((((~var_11) & var_2)));
                        }
                        for (int i_5 = 3; i_5 < 10;i_5 += 1) /* same iter space */
                        {
                            var_27 = var_6;
                            var_28 = (min(var_28, (((((max(-815861978, 1))) ? (arr_6 [i_3] [i_3] [i_1 + 2]) : var_2)))));
                            var_29 = ((((((var_3 ? var_6 : var_9))) ? var_0 : (max(var_13, var_6)))));
                        }
                        for (int i_6 = 3; i_6 < 10;i_6 += 1) /* same iter space */
                        {
                            var_30 = ((var_3 ? 3242886868 : ((162 ? 48131 : 3242886868))));
                            var_31 = (max((min((var_7 & var_10), var_15)), ((max((arr_12 [10] [i_1] [i_1] [10] [i_1]), (max(var_9, var_4)))))));
                            var_32 = (max((((!(arr_11 [i_0] [i_0 + 1] [0] [9] [i_0])))), (((arr_11 [i_0] [i_0 - 3] [i_1] [i_0] [i_0]) ? var_3 : var_11))));
                            var_33 = (max(21915, -118));
                        }
                        for (int i_7 = 3; i_7 < 10;i_7 += 1) /* same iter space */
                        {
                            var_34 = (((arr_19 [i_1] [i_1] [i_1] [i_1 - 1] [i_1] [6]) ? 3242886868 : (min(54, (arr_9 [i_0 - 1] [i_0] [i_1 - 2] [i_7 - 1])))));
                            var_35 = (max((arr_19 [i_0 - 2] [i_0 - 1] [i_0 + 1] [1] [8] [i_0]), (min((arr_19 [i_0] [i_0] [i_0] [i_2] [6] [i_0]), 14796))));
                            var_36 = (((arr_12 [i_7 - 3] [i_7 + 1] [i_1 + 3] [i_0 - 1] [i_0 + 1]) % (((((max(9262248662444530346, 9262248662444530324))) && (((var_9 ? var_18 : var_12))))))));
                            var_37 = (min((-26 + 1966197658), (((arr_4 [i_0 - 3] [i_0 - 3]) ? -2317689729516260344 : var_5))));
                        }
                        var_38 = ((10 && ((((max(3511379604, (arr_10 [5] [5] [i_2] [i_0] [i_0 - 3])))) && (((-34 ? 9184495411265021271 : 18446744073709551594)))))));
                    }
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        var_39 &= var_12;
                        var_40 = (arr_20 [i_0 + 1] [i_1 + 1] [i_2] [3] [i_8] [i_1] [i_0]);
                        var_41 = (min((max(-91, 11075959094186089707)), ((17935432088300397105 ? (((max(156, 162)))) : 18446744073709551615))));
                    }
                }
            }
        }
    }
    var_42 = (max(-141476394, -20715));
    #pragma endscop
}
