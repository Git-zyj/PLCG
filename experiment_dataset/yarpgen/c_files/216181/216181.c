/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 = 1869780321;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, ((1869780321 ? -1579 : -1869780321))));
                    var_20 = (max(var_20, 1578));
                    arr_9 [i_0] [i_0] [i_0] = ((1869780321 == 0) ? ((var_15 ? ((5 ? (arr_4 [i_0] [i_0]) : var_7)) : var_1)) : ((((!(arr_2 [i_0] [i_2 + 1]))) ? var_6 : var_6)));
                }
            }
        }
        var_21 = (((max((arr_8 [i_0] [i_0] [i_0] [i_0]), var_8))) ? (!34) : (arr_5 [i_0]));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] = ((var_10 ^ (((var_17 == (arr_1 [i_3]))))));
        arr_13 [i_3] = ((!(arr_2 [i_3] [i_3])));
        var_22 = (min(var_22, var_2));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 16;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        var_23 = ((arr_4 [i_7] [i_5]) / var_15);
                        var_24 = (max(var_24, 222));
                    }
                    for (int i_8 = 2; i_8 < 15;i_8 += 1)
                    {
                        var_25 = ((arr_18 [i_6 - 1] [i_5 - 1] [i_5 - 2]) - 231);

                        for (int i_9 = 2; i_9 < 13;i_9 += 1)
                        {
                            var_26 = (~(arr_26 [i_6 - 2] [i_5 + 3] [i_5 - 1]));
                            var_27 = ((((15647 ? 15654 : -1869780327)) / (arr_17 [i_9 - 2] [i_6 + 1])));
                            arr_31 [i_6 + 1] [i_6] [i_6 + 1] [i_6] [i_6 - 1] = var_11;
                        }
                        var_28 = arr_24 [i_5 - 2] [i_5 + 1] [i_5 + 3] [i_5] [i_5 + 3];
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 15;i_11 += 1)
                        {
                            {
                                var_29 = (min(var_29, (~1574)));
                                var_30 -= (arr_32 [i_5 - 2] [i_6 - 1] [i_11 + 1] [i_5] [i_5 - 2] [i_4]);
                            }
                        }
                    }
                    arr_36 [i_6] [i_6] [i_6] = ((var_2 >> (142 - 138)));
                }
            }
        }
        var_31 = (-((var_15 ? (arr_23 [12]) : 20)));
        var_32 = (arr_28 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]);
        var_33 = (arr_0 [i_4]);
        var_34 = (((arr_23 [i_4]) >> (((arr_3 [i_4]) - 218))));
    }
    var_35 = ((((var_9 ? 19129 : ((min(var_3, var_3))))) <= var_13));
    var_36 = var_13;
    #pragma endscop
}
