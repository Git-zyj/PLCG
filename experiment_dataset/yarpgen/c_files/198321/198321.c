/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~var_15);
    var_21 = (-14594 + var_18);
    var_22 = ((126 ? -7713907789216976946 : 65528));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_23 += (((14611 < -96) ? (min((((var_19 ? (arr_7 [i_0] [i_0] [i_3]) : -125))), (((arr_1 [i_3] [i_4]) - (arr_3 [i_1]))))) : (arr_4 [15])));
                                arr_13 [i_4] [i_4] [i_1] = ((min(((2004499812 ? var_16 : 14611)), (arr_2 [i_0] [i_0]))));
                                var_24 = (((~61440) / ((min((arr_0 [i_0 + 1]), (arr_1 [i_0 - 1] [i_1 - 1]))))));
                                arr_14 [i_4] [i_4] = (min((((~((max(var_10, (arr_8 [i_3] [i_4]))))))), (arr_2 [i_0 - 1] [i_2 + 2])));
                            }
                        }
                    }
                    var_25 ^= (max(((((arr_9 [i_0 - 1]) || (arr_9 [i_0 - 1])))), (max((arr_9 [i_0 + 1]), (arr_9 [i_0 + 1])))));
                    var_26 = ((((-((55873 ? (arr_9 [i_0]) : (arr_3 [i_0]))))) - ((max(((-(arr_3 [18]))), (((-(arr_4 [15])))))))));
                }
            }
        }
    }
    var_27 = (var_6 / -14594);
    #pragma endscop
}
