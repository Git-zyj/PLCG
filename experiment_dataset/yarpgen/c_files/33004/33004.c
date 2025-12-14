/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_4;
    var_20 = ((!(((var_6 && -538285112) && ((max(var_3, var_10)))))));
    var_21 = (var_18 >= 7);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 21;i_4 += 1)
                            {
                                arr_17 [i_0] [i_4] [i_0] [i_0] = (((arr_15 [i_1 + 1] [i_1] [i_1 - 1] [i_3 - 2] [i_3 - 2]) ? (arr_15 [i_1 + 1] [6] [i_1 - 1] [i_3 + 3] [i_3 + 4]) : (arr_15 [i_1 - 1] [14] [i_1 + 1] [i_3 - 2] [i_3 - 2])));
                                var_22 = (14985419821913138436 <= ((15 ? 7 : (arr_14 [i_0] [i_1 + 1] [i_2] [i_3]))));
                            }
                            for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                            {
                                arr_22 [i_0] [i_0] [i_0] [i_0] [i_3] [i_5] = ((((((arr_15 [i_1] [i_1 - 1] [i_3] [i_5] [i_1]) ? (arr_15 [i_0] [i_1 - 1] [i_1] [13] [i_3]) : (arr_15 [i_1] [i_1 + 1] [i_1] [i_5] [i_5])))) ? ((-(arr_15 [i_1] [i_1 - 1] [i_3 + 2] [i_5] [i_5]))) : 538285095));
                                var_23 = ((+(((!var_9) ? ((var_4 ? 18446744073709551605 : 7)) : (((arr_11 [i_0] [i_0] [i_0] [i_0]) ? (arr_4 [i_1] [i_5]) : (-2147483647 - 1)))))));
                            }
                            for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                            {
                                var_24 = (arr_5 [i_0]);
                                arr_26 [i_0] [i_1] [i_1 - 1] [i_1] [i_3] [i_6] = (max((((arr_13 [i_1] [i_1 - 1] [i_1 - 1]) ? (arr_13 [i_1] [i_1 - 1] [i_1 - 1]) : var_17)), -5993677143930314243));
                                var_25 = -538285111;
                                var_26 = var_3;
                                var_27 = (arr_2 [i_2]);
                            }
                            for (int i_7 = 3; i_7 < 17;i_7 += 1)
                            {
                                arr_29 [i_2] [i_7] = ((+((((1 + -1440902755) != 1440902758)))));
                                var_28 = ((((!(arr_11 [i_0] [i_0] [i_0] [13]))) ? (((var_1 != var_12) ^ ((254 ? (arr_7 [i_0]) : (arr_1 [i_1] [i_3]))))) : 32762));
                            }
                            arr_30 [11] [i_2] [i_1 - 1] [i_0] [i_0] = (((arr_28 [i_0] [1] [i_2] [i_3] [18] [i_3]) ? ((((!(arr_18 [1] [1]))))) : ((((((arr_6 [i_0] [i_1]) == 1)) && ((var_3 || (arr_10 [i_0] [i_0] [i_2]))))))));
                        }
                    }
                }
                arr_31 [i_0] [i_1] [i_0] = (((((-1440902755 ? 1 : (arr_8 [i_1] [i_1] [i_1 + 1] [i_1 + 1])))) || (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0])));
                var_29 = min(((max((arr_16 [i_0] [i_1] [i_1 + 1] [i_0] [i_1 + 1]), (arr_16 [i_0] [i_1] [i_1] [i_0] [i_1 - 1])))), (max((arr_4 [i_0] [i_1 - 1]), 4)));
            }
        }
    }
    #pragma endscop
}
