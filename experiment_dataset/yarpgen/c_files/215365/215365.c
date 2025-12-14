/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_20 = var_13;
                    arr_10 [i_0] [i_0] = ((~((~(min(93, -372619548))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            {
                var_21 |= ((+((var_10 ? (arr_13 [i_4] [4] [i_3]) : 1))));
                arr_16 [13] = ((-(((!(arr_15 [i_3] [i_4] [i_4]))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        {
                            arr_21 [i_6] [i_5] [i_4] [i_5] [i_3] = (max((((arr_14 [i_4]) - (arr_14 [i_3]))), ((~(arr_14 [i_4])))));
                            arr_22 [i_5] [1] [1] [i_5] = (1 <= 16886748512575471372);
                            var_22 = (-127 - 1);
                        }
                    }
                }
                var_23 = (((max(8431954184554087758, (arr_15 [i_3] [i_3] [i_4])))) ? (arr_20 [i_4] [i_4] [i_4] [i_3]) : (~0));
            }
        }
    }
    var_24 = var_8;
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                {
                    arr_30 [i_9] [i_8] = (arr_24 [i_7]);
                    var_25 = (((((-(min(var_18, 12296572022983390654))))) ? (((arr_25 [i_7]) ? var_17 : (arr_19 [i_9] [i_8] [7] [i_7]))) : (((-372619546 <= var_12) ? (1166339222 & 1) : (arr_26 [i_7] [i_7] [i_9])))));
                    var_26 = 2176355581;
                }
            }
        }
    }
    #pragma endscop
}
