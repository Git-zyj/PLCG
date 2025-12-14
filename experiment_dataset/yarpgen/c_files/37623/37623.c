/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_19 = (min(((max((arr_0 [i_0]), (arr_0 [i_0])))), ((max(1, ((((arr_0 [i_0]) || 1))))))));

        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            var_20 |= ((~(((arr_2 [i_1 - 1] [i_0 - 1]) ? var_18 : 0))));
            var_21 = ((((max(250, 1))) ? (min((arr_3 [i_1] [i_1 - 3]), (arr_3 [i_0] [i_1 - 3]))) : var_14));
            var_22 ^= ((~(max((arr_1 [i_0] [i_1 - 3]), (arr_2 [i_0] [i_1 + 2])))));
            var_23 = var_12;
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_24 = 0;
            var_25 = ((max(((max(0, -7))), (arr_1 [i_0] [i_0 - 1]))));
        }
    }
    var_26 |= ((((!var_4) ? (max(var_12, var_1)) : -19)) == var_12);
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {
                        var_27 += ((~(((var_5 / (arr_14 [i_6] [i_5] [i_3] [i_3]))))));
                        var_28 = ((+(max((-9223372036854775807 - 1), (arr_14 [i_6] [i_4] [i_5] [i_6])))));
                        var_29 = (((max((arr_7 [i_3 + 1]), var_5))) ? (((((31 ? 18446744073709551600 : 0))) ? ((var_1 | (arr_15 [i_3] [i_5] [i_6] [i_4]))) : (arr_16 [i_3] [i_3 + 2] [i_4] [i_4] [i_4 - 1]))) : (((var_7 ? (arr_15 [1] [i_4] [i_5] [i_4]) : 1732858591))));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        var_30 = arr_17 [i_3 - 1] [i_4] [i_5] [i_5] [i_5];
                        var_31 = var_10;

                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            var_32 = (arr_14 [15] [13] [i_7] [i_8]);
                            var_33 = (-9223372036854775807 - 1);
                            var_34 = (arr_16 [i_8] [i_8] [i_8] [i_8] [i_8]);
                        }
                    }

                    for (int i_9 = 3; i_9 < 19;i_9 += 1)
                    {
                        var_35 = (((min((arr_11 [i_3 + 2]), (arr_15 [i_3 + 2] [i_4 - 1] [i_9 + 1] [i_4]))) != var_9));
                        var_36 = (arr_7 [i_9]);
                    }
                    var_37 = (((~var_4) ? (((arr_25 [i_3 - 1] [i_3 + 2] [i_3 + 3] [i_4 - 1]) * (arr_14 [i_3 - 1] [i_3 + 1] [i_3] [i_3 + 3]))) : 15));
                }
            }
        }
    }
    #pragma endscop
}
