/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_10 = var_8;
                        var_11 = (!var_0);
                        arr_11 [i_0] [i_0] [i_0] [i_1] = ((-((((min(var_3, 28635))) ? 16691275164079277303 : (((((arr_1 [i_2 + 1]) > (arr_7 [i_0] [i_1 - 1] [i_1 - 1] [i_1])))))))));
                        var_12 = (max(var_12, (!1084075910)));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_16 [i_0] [i_1] [i_2] [i_4] = (~34123);
                        var_13 = (max(var_13, (((((arr_7 [i_0] [i_1] [i_2] [i_0]) ? var_9 : 65535))))));

                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            var_14 = (((arr_2 [i_0] [i_0]) && ((min((arr_10 [i_0] [i_0] [i_2 + 3] [i_2 - 1] [i_1]), ((var_9 - (arr_2 [i_0] [i_0]))))))));
                            var_15 = (5998302184053715643 - 19833);
                        }
                    }
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        var_16 = (max(var_16, (((~(!255))))));

                        /* vectorizable */
                        for (int i_7 = 3; i_7 < 18;i_7 += 1)
                        {
                            var_17 = (i_1 % 2 == 0) ? ((((arr_6 [i_1 + 1] [i_1] [i_1 - 3]) >> (((arr_6 [i_1 + 1] [i_1] [i_1 - 1]) - 1525317181910662494))))) : ((((arr_6 [i_1 + 1] [i_1] [i_1 - 3]) >> (((((arr_6 [i_1 + 1] [i_1] [i_1 - 1]) - 1525317181910662494)) - 6892292052429638777)))));
                            var_18 &= -31413;
                            var_19 = var_8;
                        }

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
                        {
                            var_20 ^= var_5;
                            arr_27 [i_0] [i_1] [i_2 - 1] [i_6] [i_8] = var_9;
                            var_21 = (max(var_21, var_2));
                        }
                        for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
                        {
                            arr_30 [i_1] [i_1 + 1] [i_1] [i_9] = (arr_8 [15] [i_2 + 3] [15] [i_1 - 3] [i_9] [i_1]);
                            var_22 = (min(var_22, (arr_17 [13] [13] [i_2 - 1] [i_2 - 2] [i_2 + 1])));
                            arr_31 [i_0] [i_1] [i_2 + 1] [i_1] [i_1] = (~var_1);
                            var_23 = (((((+((var_1 ? (arr_10 [16] [i_1 - 3] [i_2 - 1] [i_6] [i_1]) : (arr_22 [i_6])))))) ? 116772813736678244 : -65533));
                        }
                    }
                    var_24 = (max((((!((((arr_8 [i_1] [i_1] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1]) ? 13777611844945672045 : var_4)))))), (var_6 && var_0)));
                }
            }
        }
    }
    var_25 = ((var_9 ? (~var_2) : var_0));
    var_26 = (~var_6);
    var_27 = var_9;
    #pragma endscop
}
