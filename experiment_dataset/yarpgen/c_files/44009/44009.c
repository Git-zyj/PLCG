/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [4] [i_0] = (((arr_0 [i_0]) ? ((3 ? var_10 : (arr_1 [i_0]))) : (arr_0 [i_0])));
        arr_4 [i_0] = (((arr_2 [i_0] [i_0]) && (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    var_11 = (min(var_11, (((~(((((576460752303423487 > (arr_9 [i_1])))) * ((((arr_12 [i_1] [i_1] [i_1]) < (arr_6 [i_3])))))))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            {
                                arr_18 [8] [i_2] [i_4] [i_5] = (arr_9 [i_1]);
                                arr_19 [i_1] [i_1] [i_3] [i_1] [i_2] = (arr_5 [i_5]);
                            }
                        }
                    }
                }
            }
        }
        var_12 = (min(2657269236, (1777800614 > 0)));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    {

                        for (int i_9 = 1; i_9 < 20;i_9 += 1)
                        {
                            arr_31 [i_1] [i_1] [i_1] [i_6] [i_8] = (~(arr_27 [i_8] [i_7] [i_8] [i_7] [i_1] [i_1]));
                            var_13 *= (((4590643264806995791 <= 65338) && ((((arr_23 [i_6 + 1] [i_6 + 1] [i_7 + 1] [i_9 + 1]) ? (arr_21 [i_6 + 1] [15] [i_7 - 1]) : (arr_23 [i_6 + 1] [i_6 + 1] [i_7 - 1] [i_9 - 1]))))));
                        }
                        arr_32 [i_1] [i_6] [i_6] [i_6] [i_8] [i_8] = (arr_16 [i_8] [i_6] [i_7 + 1] [i_8] [i_1]);
                        var_14 = ((-((((arr_5 [i_6 + 1]) != (arr_5 [i_6 + 1]))))));
                        arr_33 [i_1] [i_6 + 1] [i_6] [i_8] = (arr_23 [i_1] [i_8] [i_7] [i_1]);
                        var_15 *= ((((((((arr_29 [i_1] [i_1] [16] [i_1]) >> (((arr_9 [i_6 + 1]) - 7145818386439203389))))) + 710380824296732446)) >= (arr_17 [i_1] [i_6] [i_6] [i_7] [i_8])));
                    }
                }
            }
        }
    }
    var_16 = (((-597286932 + 2147483647) >> (218 - 202)));
    var_17 = var_7;
    /* LoopNest 2 */
    for (int i_10 = 2; i_10 < 19;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {
            {
                var_18 = (1612013316950569897 | 421490461);
                var_19 = ((((((arr_26 [11] [i_10] [i_10] [i_10 + 1]) > (arr_26 [i_10] [i_11] [i_11] [i_10 - 2])))) | ((((((arr_20 [i_10] [i_10] [i_10]) + (arr_16 [i_10 - 1] [i_10] [i_10 - 1] [i_11] [i_11]))) <= (((((arr_23 [i_10] [20] [i_11] [i_10]) > (arr_25 [i_10]))))))))));
                var_20 = (((arr_11 [8]) > (arr_8 [i_10 + 2] [i_11])));
            }
        }
    }
    #pragma endscop
}
