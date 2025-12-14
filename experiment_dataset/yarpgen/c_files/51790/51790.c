/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((var_1 != ((var_13 ? var_1 : var_9)))) ? ((var_14 ? (((max(16384, var_0)))) : ((var_7 ? var_14 : var_13)))) : var_8);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [1] [1] |= ((((((arr_4 [i_1]) ? 43 : (arr_0 [i_1]))) >> (min((arr_2 [i_0] [i_0 - 1] [i_1]), 1)))));
                var_17 = ((4 - (((arr_2 [i_1] [i_0] [i_0]) ? var_8 : 0))));

                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    var_18 &= ((min(var_13, ((5754257330716645241 | (arr_0 [i_0]))))));
                    arr_10 [i_0] [i_1] = ((((min((max(2305843009213693936, (arr_6 [1] [i_0] [i_0]))), (1351902265787425558 == var_1)))) ? -var_13 : (~1351902265787425573)));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {

                    for (int i_4 = 1; i_4 < 21;i_4 += 1)
                    {
                        var_19 = (((((arr_13 [13] [i_1] [i_1]) + (arr_12 [i_1]))) < (arr_0 [i_0])));
                        arr_17 [i_0] [i_1] [i_1] [i_3] [i_4] = (((arr_1 [i_0 + 1]) ? 255 : var_10));
                    }
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {

                        for (int i_6 = 2; i_6 < 20;i_6 += 1)
                        {
                            var_20 = (min(var_20, 32767));
                            var_21 = (min(var_21, ((((((1351902265787425567 ? var_15 : (arr_19 [10] [i_3] [1] [i_3] [i_3 - 1] [1])))) ? (arr_13 [i_0 + 2] [i_1 - 1] [i_6 + 1]) : 1)))));
                            arr_22 [i_0] [i_1] [i_1] [i_5 - 1] [i_5 - 1] = (arr_20 [i_0 - 2] [i_1] [8] [i_5] [i_6 - 1] [i_1] [i_0]);
                            var_22 = (arr_4 [i_0]);
                        }
                        var_23 |= ((~(((arr_0 [i_5]) ? var_4 : var_14))));

                        for (int i_7 = 0; i_7 < 0;i_7 += 1)
                        {
                            var_24 = (max(var_24, (((((!(arr_11 [1]))))))));
                            var_25 = var_5;
                            arr_25 [i_1] [i_3] [i_1] = var_3;
                        }
                    }
                    var_26 = (max(var_26, var_14));
                }
                for (int i_8 = 1; i_8 < 22;i_8 += 1)
                {
                    var_27 = arr_26 [i_1] [i_1] [i_1 - 1] [i_1];
                    var_28 = (((arr_11 [i_1]) & (arr_20 [i_0] [i_1] [i_0] [i_1] [i_1 - 1] [i_8] [i_8])));
                }
                arr_28 [i_1] [i_1] [1] = ((-((max(0, 136)))));
            }
        }
    }
    var_29 = (!var_7);
    #pragma endscop
}
