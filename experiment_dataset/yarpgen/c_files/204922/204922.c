/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_18 = (min(446480559, 0));

                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        var_19 = 17;
                        var_20 -= (((((+(min((arr_5 [0] [6] [i_3]), 14))))) ? ((~((min(244, var_13))))) : ((((19 ? (arr_7 [16] [2]) : (arr_5 [i_0] [i_1 - 1] [i_2])))))));
                        var_21 = ((((255 > (arr_4 [i_0 + 1] [8] [i_0 + 1]))) ? (arr_4 [i_0 + 1] [i_0] [i_0 + 1]) : 20027));
                        var_22 = (((min((15 / 245), ((120 ? 227 : 4294967295)))) / (arr_4 [i_0 + 1] [i_2 + 3] [i_3 - 2])));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        var_23 = (arr_6 [i_0]);
                        var_24 |= (arr_4 [i_4] [13] [i_1]);
                    }
                    for (int i_5 = 3; i_5 < 17;i_5 += 1)
                    {
                        var_25 = (((((min(6, -120)))) <= ((~(((-9223372036854775807 - 1) ? (arr_9 [1] [i_0] [i_1 - 1] [i_0] [i_2] [i_5 - 1]) : var_2))))));
                        var_26 &= ((((1822898382 ? (((!(arr_11 [i_0] [i_1] [i_2] [i_5 + 2])))) : (((arr_1 [9]) + 33)))) > ((+(((arr_2 [i_0 + 1] [12] [i_0]) ? (arr_11 [17] [i_1 + 1] [16] [i_5 - 3]) : 239))))));
                        var_27 = (((~-2020389059) || ((((1367211755 ? -112 : 107))))));
                        var_28 = (min(((((((arr_10 [i_0] [i_0] [4] [i_2 + 1] [i_5]) + (arr_10 [3] [i_0] [i_1] [i_0] [i_0]))) <= (arr_0 [i_0] [1])))), (max(149, ((var_6 + (arr_8 [1] [i_0 + 1] [i_0] [i_5])))))));
                    }
                    var_29 = (((((arr_4 [i_0] [i_0 + 1] [i_2 + 1]) - (arr_4 [i_0] [i_0 + 1] [i_2 + 1]))) - ((min((arr_4 [i_0] [i_0 + 1] [i_2 + 1]), 22)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            {
                var_30 = (((arr_5 [1] [i_7] [i_7]) > (((((~(arr_1 [6]))) >> (((arr_1 [7]) ? 0 : 0)))))));
                arr_17 [i_6] = (((var_14 + 255) + (((arr_7 [i_7] [i_7]) + (arr_0 [i_6] [i_6])))));
            }
        }
    }
    #pragma endscop
}
