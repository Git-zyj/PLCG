/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_13 | ((-((27110 ? 6221646414916545545 : 40))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 23;i_2 += 1)
            {
                {
                    var_16 = (arr_6 [i_0] [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_3] [4] = var_14;
                                var_17 = (((~(arr_2 [i_1 + 2] [i_2 + 2]))));
                                var_18 = ((~(!-var_5)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (var_5 != var_7);

    for (int i_5 = 4; i_5 < 15;i_5 += 1)
    {
        var_20 = (max(((max((min((arr_4 [i_5] [17] [17] [i_5]), -163048808)), (arr_0 [23])))), (min(var_6, (arr_2 [i_5] [i_5 - 3])))));
        var_21 -= (min((var_11 & var_13), (min(-27110, (arr_15 [2] [i_5])))));
        arr_16 [i_5] = (arr_12 [i_5 + 2] [i_5] [6] [i_5] [22]);
        var_22 -= (arr_3 [18] [18] [i_5]);
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 19;i_6 += 1)
    {

        for (int i_7 = 3; i_7 < 17;i_7 += 1)
        {

            for (int i_8 = 1; i_8 < 19;i_8 += 1)
            {
                var_23 = (arr_2 [i_7 + 1] [2]);
                var_24 = ((var_10 ? var_9 : (arr_22 [i_6] [17])));

                for (int i_9 = 3; i_9 < 16;i_9 += 1)
                {
                    arr_30 [i_6] [7] [3] [i_8] [i_6] [i_6] = -var_4;
                    var_25 = ((-(arr_3 [i_6 - 1] [i_7 - 3] [i_9 - 3])));
                }
            }
            var_26 = (arr_7 [i_7 + 2] [i_6 + 1]);
            arr_31 [12] [i_7] |= (((-1 ? var_12 : var_7)));
        }
        var_27 = (((arr_17 [i_6 - 1]) ? var_4 : 1872750431));
    }
    var_28 -= 27110;
    #pragma endscop
}
