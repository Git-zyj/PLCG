/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 99;
    var_11 = (((min(var_7, (!var_4))) % (((0 ? 1 : 3)))));
    var_12 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_13 = 843205138;
                            arr_10 [i_0] [i_0] [i_3 - 2] [i_3 - 2] = var_3;
                            var_14 = ((-32754 < ((-1786601556 / (arr_5 [i_3 + 2] [i_1 - 2] [i_1] [i_1 - 3])))));
                        }
                    }
                }
                var_15 = (((((48 | (arr_7 [i_0] [i_0] [i_0] [i_1 - 1] [i_0] [i_0])))) ? ((((min(var_6, 92))) ? ((min(-13782, var_1))) : -1786601544)) : 34139));

                for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
                {
                    arr_13 [i_0] [i_1] [i_4] = 137438953408;
                    arr_14 [i_0] [i_0] [i_0] = (((((~((-843205127 ? 4661080504534355982 : 10644))))) ? var_5 : (((((arr_3 [i_1 + 1] [i_1] [i_1 - 3]) > (arr_1 [i_1 + 1] [i_1 - 2])))))));
                }
                for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_23 [i_0] [i_5] [i_5] [i_1 - 1] [i_5] [i_0] = (((arr_7 [i_7] [i_5] [i_5] [i_1 - 2] [i_1 - 1] [i_0]) ? (arr_19 [i_0] [i_5] [i_5] [i_6]) : 7002));
                            arr_24 [i_5] = arr_22 [i_5] [i_6] [i_5] [i_6] [i_5];
                            arr_25 [i_5] [i_6] [i_1 + 1] [i_1 + 1] [i_5] [i_5] = (arr_17 [i_5] [i_1 - 1]);
                            var_16 = (arr_9 [i_0] [i_1 + 1] [i_0]);
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            arr_30 [i_1 - 2] [i_1 - 2] [i_5] [i_1 - 1] [i_1 - 1] [i_5] = (!(arr_19 [i_0] [i_5] [i_6] [i_5]));
                            arr_31 [i_0] [i_0] [i_5] [i_6] [i_8] [i_5] = (((arr_1 [i_1 - 1] [i_1 - 3]) | var_7));
                        }
                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            arr_35 [i_0] [i_0] [i_5] [i_6] [i_9] = ((~(arr_16 [i_0] [i_0] [i_1] [i_1 - 3])));
                            arr_36 [i_5] [i_5] [i_5] = 127;
                            arr_37 [i_9] [i_5] [i_5] [i_0] [i_0] [i_5] [i_0] = -381230810;
                            arr_38 [i_5] = ((2906918492 ? (arr_1 [i_1 - 1] [i_1 - 2]) : 2906918492));
                            var_17 = (var_7 ^ 32890);
                        }
                        var_18 = 16;
                    }
                    arr_39 [i_5] [i_5] [i_5] = ((((4661080504534355982 && (arr_21 [i_1] [i_1 - 2] [i_1 - 2] [i_1 + 1] [i_1 - 1]))) ? (arr_28 [i_5] [i_5] [i_5] [i_5] [i_1 + 1]) : var_7));
                    var_19 = (((((max((arr_16 [i_0] [i_5] [i_1 - 2] [i_0]), 249)))) | -2888927927672743758));
                }
                arr_40 [i_0] [i_0] [i_1 + 1] = ((~((~(arr_3 [i_1 + 1] [i_1 + 1] [i_1 + 1])))));
            }
        }
    }
    #pragma endscop
}
