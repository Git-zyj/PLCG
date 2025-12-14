/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = (((~(arr_0 [i_0]))));
                arr_7 [i_0] [i_0] = (((((((arr_1 [i_1]) ? 59452 : var_12)))) ? ((((~5723728650200937580) ? ((max((arr_4 [i_0] [0]), var_7))) : (arr_4 [i_0] [i_0])))) : var_3));
                arr_8 [i_1] = ((((((arr_3 [i_1]) ? (arr_3 [6]) : (arr_3 [8])))) / (arr_5 [i_0] [i_0])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 15;i_3 += 1)
        {
            {
                arr_15 [4] [i_3 + 2] [5] = ((((max((arr_3 [i_2 - 1]), (arr_3 [i_2 - 3])))) % (arr_3 [i_2 - 2])));

                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    arr_18 [i_3 - 2] [i_3 - 2] [9] = (max((((!(arr_0 [i_2])))), var_4));
                    arr_19 [i_4] [i_3 - 2] [i_2] = (max(var_3, (arr_9 [i_4] [13])));
                    arr_20 [i_4] [i_4] [i_4] [i_4] = max((((!(arr_13 [i_3] [i_3] [i_3 - 2])))), ((var_10 ? (arr_3 [i_3]) : var_7)));
                    arr_21 [i_2] [i_3] [i_4] = 2838384812;
                    arr_22 [0] [i_3] [i_4] = (arr_4 [9] [i_2 - 1]);
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    arr_27 [i_5] [i_3] [i_5] = ((((-5775560804986729647 ? 1 : 59450))) * (((arr_5 [15] [i_2]) / var_8)));
                    arr_28 [i_2] [i_2 - 1] [i_2 - 1] [i_5] = ((((arr_24 [i_3] [i_3]) ? (arr_4 [i_2] [i_2]) : var_2)));
                }
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    arr_31 [i_2 + 1] [i_3] [i_6] = (((((((-5723728650200937568 != (arr_2 [i_3] [9]))) ? ((19992 ? var_2 : var_6)) : (~var_5)))) ? (((((var_4 ^ (arr_9 [i_2] [i_2])))) ? (min(var_4, (arr_0 [i_6]))) : ((max((arr_1 [i_3]), 9958))))) : (arr_9 [i_3] [9])));
                    arr_32 [i_2 - 1] [i_2] [i_3 + 2] [i_6] = (max(var_5, (((((196 ? (arr_30 [2] [i_3 + 2] [i_6] [12]) : (arr_11 [10])))) ? (arr_12 [i_2 - 2]) : (max(-97, (arr_17 [i_3] [16])))))));
                    arr_33 [i_2 - 1] [i_3] [i_6] = (((((var_0 + ((max(var_12, 48175)))))) ? ((~(((arr_0 [15]) ? (arr_13 [i_2] [i_2] [i_2]) : 17245764392360983395)))) : (arr_26 [i_6] [16] [16] [i_2])));
                }
            }
        }
    }
    var_13 = var_3;
    #pragma endscop
}
