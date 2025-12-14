/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_14 = (((max(var_2, (((!(arr_1 [i_0])))))) < (((min(var_1, 6))))));
        var_15 *= arr_2 [6] [i_0];
        arr_3 [9] = 16165266105404504307;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_16 = (((arr_4 [6] [6]) ? var_8 : ((-(arr_4 [i_1] [i_1])))));
        var_17 |= (arr_5 [i_1]);
        arr_6 [i_1] = -759709294;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    arr_17 [i_3] = var_13;

                    for (int i_5 = 1; i_5 < 22;i_5 += 1) /* same iter space */
                    {
                        arr_22 [i_2] [i_3] [i_3 + 2] [i_5] [i_3 + 2] = (((arr_12 [i_3]) ? 242 : (1 < -759709294)));

                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_18 = (var_11 ? (arr_12 [i_3]) : (arr_23 [1] [i_5] [i_4] [i_3 + 2] [i_2]));
                            arr_25 [i_3] [i_3] [i_4] [i_5 + 2] [i_6] = -759709300;
                        }
                    }
                    for (int i_7 = 1; i_7 < 22;i_7 += 1) /* same iter space */
                    {

                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            var_19 += (arr_16 [21] [i_2] [i_7 - 1] [i_7 - 1]);
                            arr_31 [i_3] = ((var_5 ? var_0 : (arr_20 [i_7 - 1] [i_3])));
                        }
                        arr_32 [i_3] [i_3] [i_3] [i_2] = ((+(((arr_4 [i_3] [i_4]) ? 0 : var_3))));
                        arr_33 [i_2] [i_3] [14] [i_7] [i_7] = ((~(((((arr_5 [i_3]) + 2147483647)) >> (var_8 - 1537115762001184393)))));
                    }
                    for (int i_9 = 1; i_9 < 22;i_9 += 1) /* same iter space */
                    {
                        arr_37 [i_3] [i_3] = 444035436534168121;
                        var_20 = (((arr_23 [i_2] [i_3 + 2] [i_4] [7] [i_2]) < (arr_16 [i_3 - 1] [i_9] [i_9 + 2] [i_9])));
                    }
                    for (int i_10 = 1; i_10 < 22;i_10 += 1) /* same iter space */
                    {
                        var_21 += 759709294;
                        var_22 = (~var_9);
                        arr_41 [i_2] [5] [i_2] [i_3] [i_3] = (!var_0);
                    }
                    var_23 = var_3;
                }
            }
        }
        arr_42 [i_2] [i_2] = (arr_34 [i_2] [i_2]);
        var_24 += 18089;
    }
    var_25 = ((var_13 == ((65535 ? 517352730 : 14957684167620595723))));
    var_26 = (~var_4);
    var_27 = (((((min(var_12, var_12)))) ? var_13 : 65530));
    var_28 = var_3;
    #pragma endscop
}
