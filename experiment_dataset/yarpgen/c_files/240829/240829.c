/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(222, -63));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_18 = ((((-(((arr_1 [12]) - 4161536)))) != 252));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_19 = (((((arr_8 [13] [i_4 - 1] [13] [i_4 - 1] [i_4 + 4]) >> (((arr_8 [i_4 - 1] [i_4 - 1] [i_4] [16] [i_4 + 4]) - 163)))) & (arr_8 [i_3] [i_4 - 1] [15] [4] [i_4 + 4])));
                                arr_12 [i_0] [i_1] [21] [i_3] [7] [i_3] [i_4] = (max(((((!-4161532) != (max(-63, 288230376151711736))))), ((((var_11 | (arr_6 [i_0] [i_3] [i_1] [i_0]))) * ((min(37666, (arr_5 [i_0] [i_0]))))))));
                                var_20 -= 4161533;
                                arr_13 [22] [i_0] [i_2] [i_3] [16] = ((((((arr_4 [i_0] [9]) ? (arr_9 [i_0] [i_0] [i_1] [i_2]) : (arr_6 [i_2] [14] [11] [i_2]))) & (15872 != 248))) + (16384 && 58720256));
                            }
                        }
                    }
                }
                var_21 = ((~(arr_3 [i_0] [i_0])));
            }
        }
    }
    var_22 = -58720240;
    #pragma endscop
}
