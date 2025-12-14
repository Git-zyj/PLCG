/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_1] = (arr_7 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_16 [i_4] [i_1] [i_1] [1] = (arr_7 [i_2]);
                                var_19 = (min(var_19, var_1));
                                arr_17 [i_1] = arr_7 [i_0];
                                arr_18 [i_0] [i_1] [9] [i_3 + 2] [9] = (((((~(arr_4 [i_1])))) || (arr_14 [i_3])));
                            }
                        }
                    }
                }
            }
        }
        var_20 -= (((((min(var_17, (arr_3 [i_0] [i_0] [0]))) ? 540431955284459520 : (33239 % 96)))));
        arr_19 [i_0] [i_0] = (((arr_8 [8]) <= (arr_8 [14])));
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            var_21 = ((~(min((arr_12 [i_5] [i_6] [i_6] [9]), var_10))));
            arr_25 [i_5] [i_5] [i_6] = (((max(28, -540431955284459505))));
            arr_26 [i_6] = (((!(arr_12 [i_5] [i_5] [i_6] [i_6]))));
        }
        arr_27 [i_5] = ((var_6 || (((((((arr_0 [i_5]) ? var_17 : var_18))) ? ((((!(arr_23 [i_5]))))) : (arr_12 [i_5] [i_5] [i_5] [i_5]))))));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        arr_31 [i_7] = (!(arr_30 [i_7]));
        var_22 = (arr_29 [i_7]);
    }
    var_23 = var_7;
    #pragma endscop
}
