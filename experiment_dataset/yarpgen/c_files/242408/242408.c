/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_10 -= (arr_3 [i_1]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_11 = (max(2841, (-25884 >= 2664504740)));
                                var_12 = (((((2841 >> (-21845 + 21860)))) ? (~-1547742495) : ((-(max(49527, var_1))))));
                            }
                        }
                    }
                }
                arr_13 [4] = min((((arr_0 [7] [7]) ^ 106)), ((max(50169, 67))));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_13 -= (((max(-25886, 2837))));
                                var_14 -= (~140737488355328);
                            }
                        }
                    }
                }

                for (int i_8 = 4; i_8 < 11;i_8 += 1)
                {
                    var_15 = 328627980;
                    var_16 = 25226;
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    arr_24 [4] [i_1] [i_1] [i_9] = (var_9 <= var_3);
                    var_17 = (((!(arr_18 [i_0] [i_0] [i_1] [i_9] [i_9]))));
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 13;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            {
                                arr_32 [i_11] [12] [11] [i_11] [i_11] [i_11] [i_12] = (arr_30 [i_11 - 2] [i_11 - 2] [i_11 - 2] [i_11] [i_11 - 1] [i_11 + 1] [i_11 - 1]);
                                var_18 -= (arr_5 [i_0] [i_10]);
                                var_19 = var_7;
                                var_20 = (~3141172022937842220);
                            }
                        }
                    }
                    arr_33 [i_0] [i_0] [i_10] [0] = arr_5 [i_0] [i_1];
                }
                for (int i_13 = 0; i_13 < 14;i_13 += 1)
                {
                    var_21 = 5296;
                    arr_36 [13] [i_1] [i_1] [13] = (((4 >> (3613529857799175836 - 3613529857799175826))));
                }
            }
        }
    }
    var_22 -= var_1;
    var_23 |= var_0;
    #pragma endscop
}
