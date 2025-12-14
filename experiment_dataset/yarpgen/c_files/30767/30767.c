/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 = 34016;
                    var_12 = (max(var_12, 0));

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_13 &= 1;
                        arr_10 [i_1] |= ((!(max((arr_0 [i_0] [i_2]), (61 == 32907)))));
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {

                        for (int i_5 = 1; i_5 < 18;i_5 += 1)
                        {
                            var_14 = (min(var_14, ((max((((1 == ((~(arr_5 [i_0] [i_5])))))), (((arr_12 [i_1] [i_1] [i_1] [i_5 + 1] [i_5 + 1]) / (arr_12 [i_4] [i_5] [20] [i_5 - 1] [i_5 - 1]))))))));
                            var_15 = (((((1 > 1) ? ((~(arr_15 [i_0]))) : ((-(arr_4 [i_0] [i_1]))))) * 1));
                            var_16 = (min(65535, 1));
                        }
                        arr_16 [i_0] [18] [13] [i_0] = (1 && (((arr_11 [i_0] [i_0] [15] [i_0]) || (((1 ? 65524 : (arr_2 [i_0])))))));

                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            var_17 += ((((-13454 > (arr_1 [i_0] [i_0]))) ? (arr_8 [i_0] [i_0] [i_0] [20] [18] [i_0]) : (((var_4 == (((arr_6 [4] [i_1] [i_1]) | (arr_7 [i_0] [i_0]))))))));
                            var_18 = (8 + 8);
                            var_19 |= (max(1496408962015023787, 1));
                        }
                        for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
                        {
                            var_20 += (((4 ? 18076586773327493179 : 904957918)) == var_10);
                            arr_21 [i_7] [i_1] [i_1] = (9 == 0);
                            arr_22 [i_4] [i_4] = (((((~((max(1, -46)))))) ? ((1 << (arr_15 [i_4]))) : (((!(arr_15 [i_0]))))));
                            arr_23 [i_4] = (arr_8 [4] [4] [4] [i_4] [i_4] [7]);
                        }
                        for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
                        {
                            var_21 += (((((-(arr_14 [i_4] [i_4] [i_2] [i_4] [i_8])))) && (((14119583226583052820 ? 1 : 1)))));
                            var_22 |= (max((((!(arr_13 [i_1])))), (((8 == 1) ? (((var_9 + (arr_1 [i_0] [i_0])))) : 5540917222651773891))));
                            arr_26 [i_0] [i_0] [i_2] [i_4] [i_0] [i_2] = ((45 ? ((max(8, 12905826851057777730))) : (((((((arr_14 [i_8] [i_1] [i_1] [i_1] [i_8]) ? (arr_3 [i_2]) : 1)) == ((((arr_1 [i_2] [i_0]) >= 69)))))))));
                            arr_27 [i_0] [i_0] [i_2] [i_4] [i_4] = ((!(arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                        }
                        var_23 *= ((-((~((13419751460044090622 ? 1 : (arr_13 [i_0])))))));
                        var_24 = 4207395870;
                    }

                    for (int i_9 = 2; i_9 < 20;i_9 += 1)
                    {
                        arr_30 [i_0] [i_1] [i_1] [i_1] [i_9] = (4207395857 == ((((!((-18611 >= (arr_5 [i_2] [18]))))))));
                        var_25 = (min(var_25, (((!(((((-909394808 ? 33 : 18207945616397332066))) && 241)))))));
                    }
                }
            }
        }
    }
    var_26 = var_9;
    var_27 = var_8;
    #pragma endscop
}
