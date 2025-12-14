/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, ((!(((-var_14 & (((var_3 ? var_2 : -1))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        var_17 = (min(var_17, (((~(((!(~-94)))))))));
                        arr_12 [i_0] [i_1 + 2] [i_2] [5] = ((~(min((max(var_5, (arr_1 [i_0]))), -82))));
                        arr_13 [i_1] = (((+-81) ? ((max(75, -84))) : ((max(82, (max((arr_2 [i_2] [i_3 + 2]), (arr_5 [i_0] [i_2]))))))));
                        var_18 = ((((((max((arr_7 [i_3] [i_2] [1] [i_0]), (arr_1 [i_2 + 3])))) ? (((!(arr_6 [7])))) : ((var_13 ? 83 : (arr_9 [14] [i_1] [i_2] [6]))))) == ((((arr_6 [i_2 + 1]) && (((arr_6 [i_2]) > (arr_8 [i_0] [i_1] [i_3 - 1]))))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 3; i_4 < 14;i_4 += 1)
                    {
                        arr_17 [i_0] [i_1 - 1] [i_2] [i_4] = 77;
                        var_19 = ((~(arr_0 [i_2 + 1])));
                        arr_18 [i_0] [11] [i_1] [i_2 - 1] [i_2 + 3] [i_4] = (arr_1 [i_2 + 3]);
                    }
                    arr_19 [i_0] [i_1] [5] [12] = (((max(((((arr_9 [i_2] [i_1] [i_1] [i_0]) + (arr_14 [12] [i_1 - 1] [i_1] [i_0])))), (((arr_1 [9]) - (arr_14 [i_0] [i_1 - 1] [i_0] [i_0]))))) < (arr_16 [i_0] [i_0] [i_1] [i_1] [i_0] [i_2 + 1])));
                    var_20 = ((+(((arr_6 [i_1 + 1]) ? (arr_6 [i_1 + 1]) : (arr_6 [i_1 - 1])))));
                    var_21 = ((-1 - ((max((arr_9 [i_1 + 2] [i_1] [i_1] [i_2 + 1]), (((arr_16 [i_0] [5] [i_1 + 2] [5] [i_2] [5]) | (arr_8 [i_0] [i_1] [3]))))))));
                    arr_20 [i_0] [i_1 + 2] [i_2 + 2] = (min((90 == 30680), (((arr_8 [i_0] [i_1 + 2] [i_2 + 1]) == (arr_8 [i_0] [i_1] [i_2 + 2])))));
                }
            }
        }
    }
    var_22 = max((~var_4), (max(((min(90, var_8))), ((var_5 ? var_0 : var_14)))));
    #pragma endscop
}
