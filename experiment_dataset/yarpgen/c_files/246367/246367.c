/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= (var_15 ? var_5 : var_9);

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_19 += (((max(1177238969248315914, (arr_2 [i_0 - 1] [i_2]))) < ((((arr_9 [i_3] [15] [i_2] [i_1] [15] [i_0]) & (arr_2 [i_0 - 1] [i_0 - 1]))))));
                        arr_11 [i_0] [i_0] [i_0 - 1] = ((45053105 < (arr_4 [i_0] [i_0] [i_0])));
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_0] = ((-(arr_8 [i_2] [i_0] [i_2] [i_0])));
                        arr_16 [i_0] [i_1] [i_0] [i_0] = ((~(min((var_14 + var_17), (var_4 % var_6)))));

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_20 *= ((((4249914191 ? 12 : (arr_10 [i_2] [i_1 - 1] [i_2] [i_4]))) ^ (arr_14 [i_5])));
                            var_21 *= ((-641677431 + (arr_4 [i_4] [i_2] [i_2])));
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = var_2;
                        }
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            var_22 += (max((((((4249914190 ? var_13 : 73))) ? ((((arr_23 [i_0] [i_0] [i_0] [i_0] [i_0]) & (arr_22 [i_6] [i_6 + 4] [7] [7] [i_2] [7] [i_0])))) : (((arr_2 [i_4] [i_6]) ? var_9 : (arr_6 [i_2] [i_1] [i_2]))))), var_12));
                            arr_24 [i_0] [i_1] [i_0] = var_11;
                            arr_25 [1] [i_0] [i_0] = (arr_8 [i_4] [i_0] [i_2] [i_4]);
                        }
                    }
                    var_23 = ((!(arr_20 [i_0 - 1] [i_0 - 1] [i_1 - 1] [i_1 + 2] [i_2])));
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            {
                                var_24 *= (min(((min(var_7, (arr_29 [i_1] [i_7] [i_1] [i_7] [i_7] [i_7] [i_7 + 3])))), (min((~var_14), 60297))));
                                var_25 = ((((arr_29 [i_0] [i_1 - 1] [i_2] [i_2] [i_2] [i_1 - 1] [i_8]) < ((3967014717 ? var_13 : (arr_18 [i_0] [i_0] [i_0] [i_0] [i_8]))))));
                            }
                        }
                    }
                }
            }
        }
        arr_31 [i_0] [i_0] = (max((23606 < 3374031628), ((~((min(var_4, (arr_7 [i_0] [i_0] [i_0]))))))));
        var_26 = (((min((max(var_9, 26839)), (((40548 ? (arr_7 [i_0] [i_0] [i_0]) : (arr_3 [i_0])))))) >= (((~(arr_10 [i_0 - 1] [i_0] [i_0] [i_0]))))));
    }
    for (int i_9 = 0; i_9 < 19;i_9 += 1)
    {
        var_27 = arr_17 [i_9];
        arr_35 [i_9] = (min((var_7 / 45053105), (min(var_16, (arr_3 [i_9])))));
        var_28 |= (((0 >= 7205574447111480455) / (-var_10 >= var_0)));
    }
    for (int i_10 = 0; i_10 < 25;i_10 += 1)
    {
        var_29 = (min((max(var_14, (((arr_38 [i_10]) * (arr_38 [i_10]))))), (min((max(0, (arr_37 [15] [i_10]))), (min((arr_38 [i_10]), (arr_38 [i_10])))))));
        arr_40 [i_10] [i_10] = ((-(((arr_37 [i_10] [i_10]) ? (61 - 118313202183984893) : var_14))));
    }
    #pragma endscop
}
