/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {

                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        arr_8 [3] [i_1 + 1] [i_1] [1] [6] = ((1 & (((arr_1 [1]) ? 1 : var_12))));
                        arr_9 [i_1] [i_2] [i_1 + 1] [i_1] = (~(arr_3 [1] [i_1]));
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
                    {
                        var_13 = (((((var_11 ? (arr_7 [i_2]) : (arr_5 [i_4] [i_0] [i_0] [i_0])))) ? (((((arr_4 [i_1] [i_1] [1]) > (arr_3 [i_0] [i_1]))))) : (var_11 - 7182240377851745685)));
                        var_14 = (((((var_0 ? 1 : 46026))) ? (((104 ? var_9 : (arr_6 [i_0] [19] [i_2] [i_4])))) : ((0 ? var_0 : var_11))));
                    }
                    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_15 = (((((21810 ? 14607424730668609386 : var_12))) ? (((var_0 ? var_0 : var_12))) : ((var_6 ? var_9 : var_4))));
                            arr_17 [i_0] [i_1] [i_1] [i_5] [i_0] = 1;
                            var_16 += var_3;
                        }

                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            var_17 += ((-var_5 ? -19510 : (arr_5 [i_0] [i_1] [1] [20])));
                            var_18 = var_3;
                            arr_20 [i_0] [1] [1] [i_0] [i_1] [1] = ((-(arr_1 [i_7])));
                            arr_21 [i_0] [i_1] [i_0] = var_6;
                        }
                    }
                    arr_22 [i_1] [i_1] [i_2] [i_1] &= var_12;
                    arr_23 [17] [i_1] [i_1] [i_0] = var_2;
                    var_19 = (min(var_19, (((1 ? 8719502985231018501 : (~125))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            {
                                var_20 = ((-(arr_15 [i_1] [i_1] [11] [i_8] [i_1 + 1] [i_0] [i_0])));
                                arr_29 [i_0] [i_1] [i_1] [i_8] [i_9] = ((!(arr_10 [i_1 - 3] [i_1] [i_1] [i_1 - 2])));
                                var_21 = var_7;
                                arr_30 [2] [i_8] [i_1] [i_1] [i_9] [i_8] = var_10;
                                arr_31 [i_1] [i_1] [i_9] = -28;
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    var_22 = var_10;
                    arr_34 [i_1] [i_1] [i_1] = ((-((1141814597 ? -8 : 90))));
                    var_23 = (((((1 ? var_9 : var_5))) ? ((((arr_26 [i_10] [i_10] [i_1] [i_1] [i_0] [i_0]) ? 70 : 616680896))) : ((var_1 ? var_8 : (arr_33 [i_10] [i_1] [1])))));
                }

                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    var_24 = (((((arr_2 [i_1 - 2] [i_1 - 3] [i_1 - 2]) ? (arr_2 [i_1 - 2] [i_1 + 3] [i_1 + 4]) : (arr_2 [i_1 + 3] [i_1 - 3] [i_1 - 1]))) - ((var_11 ? (arr_2 [i_1 + 2] [i_1 + 2] [i_1 + 2]) : (arr_2 [i_1 + 2] [i_1 + 1] [i_1 - 2])))));
                    arr_37 [i_1] [i_0] [i_1] = (((((~((3678286400 >> (var_7 + 31)))))) ? (~1) : (((((max(3839319343040942207, (arr_3 [i_1] [i_1]))) != 1))))));
                    arr_38 [16] [i_1] [i_1] [i_0] = ((!((max(14607424730668609386, 1)))));
                    var_25 = ((19510 ? (((var_0 != ((-21824 ? var_6 : (arr_5 [i_0] [i_1] [i_11] [i_11])))))) : ((((min(var_12, var_10))) * (arr_3 [i_1] [i_1])))));
                }
            }
        }
    }
    var_26 = (((var_7 + 2147483647) << (var_12 - 1)));
    var_27 = (7182240377851745682 ^ 21810);
    var_28 = (max((((min(var_12, 1)) ? var_11 : var_4)), var_3));
    #pragma endscop
}
