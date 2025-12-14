/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_18 = min((min((arr_9 [i_4 - 1] [i_1] [i_2]), (0 > 0))), var_11);
                                var_19 += ((-(arr_7 [i_0] [i_1 - 1] [i_0] [i_3] [i_3])));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_20 *= (((((((arr_5 [i_1] [i_0]) ? var_6 : var_17)))) ? (min(((min(var_5, var_16))), var_7)) : (!1)));
                        var_21 = (!-var_15);
                    }
                    var_22 = var_14;

                    for (int i_6 = 3; i_6 < 22;i_6 += 1) /* same iter space */
                    {
                        var_23 = 1;
                        var_24 = ((var_5 != ((((max(55075, 1))) ? ((min((arr_16 [i_0] [i_1 - 1] [i_1 - 1] [18]), var_9))) : var_8))));
                        arr_18 [i_0] [i_1] [i_2] [i_6] [i_1] = (min(((((!(arr_13 [i_0] [10] [i_2] [i_1]))) ? 1 : (arr_12 [i_1] [i_1] [22] [13] [i_1 - 1] [i_1] [i_1]))), 0));
                        var_25 -= ((-(((!((((arr_13 [i_0] [22] [i_2] [i_0]) ? (arr_4 [i_0] [i_0]) : 1739088516))))))));
                    }
                    for (int i_7 = 3; i_7 < 22;i_7 += 1) /* same iter space */
                    {
                        var_26 = var_1;
                        var_27 = ((max(var_16, var_17)));
                    }
                    var_28 = ((((((!1) ? (((var_16 ? (arr_13 [i_0] [i_0] [i_0] [i_1]) : (arr_13 [i_0] [i_1] [i_2] [i_1])))) : var_7))) ? ((min((max((arr_1 [i_2]), (arr_7 [i_0] [4] [i_0] [i_0] [i_2]))), ((min(1, 1)))))) : ((((arr_9 [i_0] [i_1] [i_0]) && 0)))));
                }
            }
        }
    }
    var_29 = var_9;
    var_30 &= var_2;
    var_31 = var_13;
    #pragma endscop
}
