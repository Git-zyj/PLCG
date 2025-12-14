/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = 12413666696903137069;
        arr_2 [i_0] = ((var_0 <= (((~12413666696903137075) * (52917 / -564336195)))));
        arr_3 [i_0] = (((-2086543994 ? 11996 : (arr_0 [i_0] [i_0]))));
        arr_4 [i_0] [i_0] = 57374;
    }
    var_18 = (max(var_18, var_13));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 4; i_4 < 15;i_4 += 1)
                    {
                        {
                            var_19 = ((12609 && ((!((!(arr_13 [18] [i_3] [i_3] [i_3] [i_3])))))));

                            for (int i_5 = 1; i_5 < 15;i_5 += 1)
                            {
                                arr_18 [i_1] [i_2] [i_5] [i_1] [i_1] = -2678677746926761285;
                                var_20 = (((arr_11 [i_1] [i_2] [i_2]) ? var_8 : ((var_2 & ((((arr_8 [i_4]) & var_13)))))));
                                var_21 += 1;
                            }
                            for (int i_6 = 0; i_6 < 19;i_6 += 1)
                            {
                                arr_21 [i_6] [i_4] [i_2] [i_2] [i_1] = var_2;
                                arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] [16] [i_1] = (var_0 * (var_6 * var_0));
                                var_22 = ((((((((1 ? (arr_12 [i_3] [i_2] [i_6]) : var_4))) ? var_3 : 906475152))) * -var_8));
                                arr_23 [i_1] [i_1] [i_2] [i_3] [i_3] [i_4] [i_4] = ((((arr_13 [i_1] [i_4 + 4] [i_1] [i_1] [i_4]) ? (arr_13 [i_1] [i_4 + 4] [i_4 + 4] [i_4] [i_4 + 1]) : (arr_13 [i_1] [i_4 + 4] [1] [i_2] [i_6]))));
                                arr_24 [i_6] [i_4 + 1] [i_2] [i_2] [i_1] = (((((arr_5 [i_2]) ? (arr_5 [i_1]) : (arr_5 [i_1]))) + (((~((var_10 ? -76 : var_9)))))));
                            }
                        }
                    }
                }
                var_23 = (min(var_23, ((((arr_9 [i_2] [i_2] [i_1]) ^ (arr_19 [i_2] [i_2] [i_1] [i_1] [i_1]))))));
                var_24 = ((min((arr_5 [i_1]), (arr_5 [i_2]))));
            }
        }
    }
    #pragma endscop
}
