/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_6;
    var_19 ^= ((var_6 ? var_15 : ((((((max(var_12, var_12)))) > ((2922558624628631834 ? 267363637 : 2147483647)))))));
    var_20 = (((((((var_15 ? var_5 : var_0))) ? (((var_5 ? var_10 : var_4))) : (min(var_0, var_15)))) - var_0));
    var_21 = ((((var_1 > ((var_2 ? var_13 : var_11)))) ? var_5 : ((4027603665 ? 267363630 : 267363622))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_22 = ((((arr_1 [i_1] [i_2]) ? var_13 : (((arr_3 [i_1] [i_2]) ? (arr_3 [i_0] [i_1]) : (arr_5 [i_0] [i_0] [i_1] [i_2]))))));
                    var_23 = var_15;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_10 [i_0] [i_1] [i_2] [i_2] [i_2] [i_4] = var_4;
                                var_24 = ((((max((arr_0 [i_0]), (arr_5 [i_2] [i_1] [i_1] [i_2])))) ? (arr_0 [i_2]) : (((arr_0 [i_1]) ? (arr_5 [i_0] [i_2] [i_3] [i_2]) : (arr_5 [i_2] [i_3] [i_1] [i_2])))));
                            }
                        }
                    }
                    var_25 ^= ((((267363630 ? -7122420714380057500 : 267363638)) <= (((arr_3 [i_0] [i_2]) ? (arr_4 [i_1] [i_1]) : (arr_3 [i_1] [i_2])))));
                    var_26 = (max(var_26, (((((min((((4027603674 ? (arr_8 [i_0] [i_1] [i_1] [i_1] [i_2]) : 7680))), 4027603665))) ? var_6 : ((((var_2 ? (arr_4 [i_1] [i_1]) : (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]))))))))));
                }
            }
        }
    }
    #pragma endscop
}
