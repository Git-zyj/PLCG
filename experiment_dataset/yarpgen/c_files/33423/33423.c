/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        arr_12 [i_0] [i_0] [i_2] [i_0] = ((-((((arr_9 [i_3 - 2] [i_1] [i_3 + 3] [i_1]) > (arr_9 [i_3 - 1] [i_3] [i_3 + 1] [i_2]))))));
                        var_14 = (min(((min((arr_9 [i_3 - 1] [i_3 + 2] [i_3 - 2] [i_3 - 1]), (arr_9 [i_3 + 4] [i_3 + 2] [i_3 + 4] [i_3 + 4])))), ((12889541128183663413 >> (((arr_9 [i_3 + 2] [i_3 - 2] [i_3 + 3] [i_3 - 2]) - 2945534882))))));
                        var_15 &= ((((12889541128183663421 != ((((!(arr_7 [i_0] [8] [8] [14])))))))));
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        var_16 = ((((~(((arr_6 [i_1] [i_2] [i_4]) ? (arr_1 [i_0]) : 12889541128183663438)))) > 1112902390));

                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            arr_17 [i_1] [i_4] [8] [i_4] [i_5] &= ((!(((-5557202945525888202 ? 17227110926391579246 : 5557202945525888191)))));
                            var_17 = ((+(((arr_11 [i_0]) ? ((~(arr_15 [i_0] [i_0] [i_0] [i_1] [i_0] [i_4] [i_5]))) : var_3))));
                            var_18 = 2256;
                        }
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_19 = var_10;
                        arr_21 [i_0] = (arr_6 [i_2] [i_0] [i_0]);
                    }
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        arr_24 [12] [i_7] [i_0] [i_0] [12] [i_7] &= (arr_14 [i_7] [i_1] [i_2]);
                        arr_25 [0] [i_0] [i_1] = (arr_14 [i_0] [i_1] [i_2]);
                        var_20 = (max(var_20, (((12889541128183663452 ? 7302846695909822833 : 21331)))));
                        arr_26 [i_0] [i_0] [i_0] [i_2] [i_7] [i_0] = ((~((7 ? (arr_8 [i_0] [i_0] [i_2] [9]) : (arr_8 [i_0] [i_2] [i_0] [i_0])))));
                        arr_27 [i_0] [i_0] [i_1] [5] [i_7] = ((((min((arr_4 [i_2] [i_1] [i_0]), 80))) ? var_4 : var_12));
                    }
                    var_21 += 7;
                    var_22 &= 54981;
                    var_23 = ((12889541128183663426 ? (min(12889541128183663413, (arr_10 [i_0] [i_0]))) : 17));
                }
            }
        }
    }
    var_24 = ((-((var_4 << (33235 - 33216)))));
    #pragma endscop
}
