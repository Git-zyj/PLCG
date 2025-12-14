/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = ((-(((!((!(arr_1 [i_1] [5]))))))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_12 [i_1] [i_3] [i_1] [i_1] = ((var_8 & (arr_2 [i_1])));
                                arr_13 [i_1] [i_0] [i_1] = ((arr_10 [i_4] [13] [i_2] [i_2] [19] [i_0]) && (((3260892892 ? var_8 : (3668400427445182678 < 79262110)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_11 = (((max(0, 14485923182241999919)) * (((((((arr_6 [i_6] [i_5] [i_1 - 1] [i_0]) / (arr_14 [i_6] [i_1] [i_2] [i_1] [i_0])))) ? (arr_0 [i_0 + 1]) : (arr_6 [9] [i_6] [i_1 + 1] [i_0 - 1]))))));
                                arr_21 [i_1] [i_5] [i_1] = (((arr_8 [17] [i_5] [i_5] [12] [i_1] [9]) && ((!((max((arr_20 [i_1]), (arr_11 [i_6] [i_5] [i_2] [i_1] [16]))))))));
                            }
                        }
                    }
                    arr_22 [i_1] [8] [i_0] [i_1] = (arr_1 [i_1 + 1] [i_0 + 2]);
                }
                for (int i_7 = 1; i_7 < 16;i_7 += 1)
                {
                    var_12 = (((-32767 - 1) + 1900369477));
                    var_13 = (((arr_19 [i_1 + 1] [i_1 - 1]) ? (max((arr_7 [i_7 + 4] [i_1 + 1] [i_1]), (arr_19 [i_1 + 1] [i_0 + 2]))) : (arr_7 [i_7] [i_1 + 1] [i_0])));
                    arr_25 [18] [i_1 + 1] [10] [18] &= (arr_7 [i_7] [i_1] [13]);
                }
            }
        }
    }
    var_14 = min((((((var_3 >> (var_5 - 21746)))) ? var_8 : ((var_1 ? var_10 : var_9)))), var_4);
    #pragma endscop
}
