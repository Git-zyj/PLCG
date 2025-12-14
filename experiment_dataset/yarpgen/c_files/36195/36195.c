/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_13;
    var_17 = (max(var_17, -var_4));
    var_18 -= (min(var_15, ((-(~var_9)))));
    var_19 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_20 += (((((-var_7 ? (!-27790) : (arr_3 [i_0] [i_0] [i_0])))) ? var_14 : 2147483647));
                var_21 = (arr_5 [i_1] [i_1]);
                arr_6 [i_0 - 1] [i_1] [i_1] = ((((((~12551) ? var_11 : var_11))) ? ((((((var_10 ? -12551 : 657387419))) ? var_15 : -12552))) : (((!(arr_1 [i_0 - 2] [i_0 - 2]))))));
                arr_7 [i_1] [i_1] = (((((arr_2 [i_0] [i_0 - 1]) ? (arr_2 [i_1] [i_0 - 1]) : (arr_2 [8] [i_0 - 1]))) ^ ((-12551 ? (arr_2 [i_0 - 1] [i_0 - 1]) : (arr_2 [i_1] [i_0 + 1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {

                            for (int i_4 = 2; i_4 < 18;i_4 += 1) /* same iter space */
                            {
                                var_22 = var_12;
                                var_23 -= ((((min(var_3, (~var_8)))) ? (((arr_17 [16] [i_1] [i_2] [4] [i_2]) ? (arr_17 [0] [12] [i_2] [i_3] [i_0]) : (arr_17 [i_0 + 1] [i_0] [i_0 - 2] [i_0 - 2] [i_2]))) : var_15));
                            }
                            for (int i_5 = 2; i_5 < 18;i_5 += 1) /* same iter space */
                            {
                                var_24 = (((((~-12560) ? (arr_14 [i_0] [1] [i_2] [i_0] [i_5] [1]) : 24467)) * var_15));
                                var_25 = ((((-(arr_4 [i_0]))) | var_10));
                                var_26 = arr_14 [i_0 + 1] [i_0 + 1] [i_2] [i_0 + 1] [i_5] [i_3];
                                var_27 = (max(var_27, ((((((~(arr_20 [i_0] [i_1] [i_2] [14] [i_5] [i_2])))) ? (~var_14) : (!var_10))))));
                            }
                            for (int i_6 = 2; i_6 < 18;i_6 += 1) /* same iter space */
                            {
                                var_28 = ((1734305667986703824 ? -12545 : var_3));
                                arr_23 [i_0] [i_0] [i_2] [i_1] [i_6] = var_4;
                                var_29 *= (((((arr_12 [i_0 - 2] [i_2] [i_6 - 2] [i_3]) || var_11)) ? (arr_10 [i_2] [i_1] [i_0]) : (arr_11 [i_6 - 1] [i_1] [i_0 - 1])));
                                arr_24 [i_6] [i_1] [i_1] [i_1] [i_0 + 1] = (arr_17 [i_0] [i_1] [i_2] [i_3] [i_1]);
                            }
                            var_30 = ((((((-12551 ? 3454401856018399589 : 24467)) < var_7)) ? 92 : -41073));
                            var_31 = arr_20 [i_0 - 1] [i_1] [i_2] [17] [i_3] [i_1];
                            arr_25 [i_0] [i_1] [14] [i_3] [i_1] [i_3] = (min(-var_2, (((!(((var_15 ? var_3 : var_12))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
