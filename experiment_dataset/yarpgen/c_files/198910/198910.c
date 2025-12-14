/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_19 = (((((-4311175825312263122 || ((min(1, 103)))))) >= var_17));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
                    {
                        var_20 = ((!((((max((arr_0 [i_0]), (arr_2 [i_0] [i_1])))) || (!14)))));

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            var_21 -= (((((504 ? (arr_13 [i_0] [i_0] [i_0]) : (arr_13 [i_0] [i_0] [i_0])))) ? -1837656556 : (((-1837656558 == (arr_4 [1] [1] [i_2]))))));
                            arr_15 [i_0] [i_1] [i_2] [9] [i_2] [i_4] = ((arr_9 [i_0] [i_1] [i_2] [i_2]) ? -5785 : (arr_1 [i_0]));
                            var_22 = (max(-1837656572, -1837656590));
                            arr_16 [8] = 1837656555;
                        }
                        for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                        {
                            arr_19 [i_0] [i_1] [i_2] [i_0] [i_5] = (((arr_5 [i_0] [i_1] [i_2]) + ((max(846291054330113329, 76)))));
                            arr_20 [i_0] [i_1] [i_2] = (arr_7 [1] [i_3] [9]);
                            arr_21 [i_0] [1] [i_2] [i_3] [i_5] = min(((max(-68, (((arr_8 [i_0] [i_1] [i_1] [i_0]) % (arr_2 [5] [i_0])))))), (min((arr_5 [i_0] [i_1] [i_2]), ((var_3 ? var_9 : var_15)))));
                        }
                        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                        {
                            var_23 = ((~(arr_2 [i_1] [i_6])));
                            arr_25 [i_0] [8] [i_2] [1] [i_6] = (arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                            var_24 = -1837656531;
                        }
                        arr_26 [i_0] [i_1] [i_2] [6] = min(1133187840, ((max(4846, 28853))));
                        var_25 = (((arr_10 [i_0] [i_0] [i_0] [4]) / (min(10346294407253068110, var_3))));
                        var_26 = (max(((-1837656574 + (((arr_10 [i_2] [i_2] [i_2] [i_2]) - 44)))), -28506));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                    {
                        var_27 = (arr_2 [i_1] [i_2]);
                        arr_29 [1] [i_0] [i_2] [i_7] = (((arr_24 [i_0]) << (arr_27 [i_0] [i_1] [i_1] [i_2] [i_1] [i_7])));
                        var_28 *= 1837656555;
                    }
                    arr_30 [i_0] [i_0] [i_1] [i_0] = ((-((((max((arr_4 [i_0] [i_1] [i_2]), (arr_0 [i_0]))) == (((max(-30, (arr_18 [i_2] [6] [i_1] [i_0] [i_0]))))))))));
                }
            }
        }
    }
    var_29 = var_6;
    var_30 = var_18;
    #pragma endscop
}
