/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 = (arr_5 [i_0]);
                    arr_8 [i_0] [i_0] [i_0] [i_0] = 2251799813685247;
                }
            }
        }
        var_21 = (arr_7 [i_0] [i_0] [2] [i_0]);
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    arr_15 [9] [i_3] [i_4] = ((var_0 << (((-127 - 1) + 142))));

                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        var_22 = ((-(arr_6 [i_5 + 2])));
                        var_23 = 1;
                        var_24 -= ((var_13 <= (arr_7 [i_5 + 2] [i_3 - 1] [i_4] [i_4])));
                    }
                    for (int i_6 = 3; i_6 < 17;i_6 += 1)
                    {
                        var_25 = (((arr_16 [i_3 - 2] [i_3 - 1] [i_4] [14] [i_6] [i_0]) ? (arr_16 [i_3 - 1] [i_3 - 1] [i_4] [i_3 - 1] [i_3 - 1] [i_3 - 1]) : (arr_16 [i_3 + 1] [i_3 + 1] [17] [i_6 - 1] [i_0] [i_3 - 1])));
                        arr_21 [7] [i_3 + 1] [i_4] [i_3 + 1] [i_3] = (((arr_18 [i_0] [i_0] [i_3] [i_4] [i_6]) ? (arr_13 [i_0] [i_3 - 1] [i_4] [i_6 + 4]) : (arr_13 [i_0] [i_0] [4] [i_0])));
                        var_26 = (!32767);
                        arr_22 [i_0] [i_3] [i_4] [i_3] = (arr_3 [i_0] [i_3]);
                    }
                    arr_23 [i_3] [i_3] [i_3] [8] = arr_10 [i_0] [i_3 - 2];
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        var_27 = ((-(min((arr_26 [i_7] [i_7]), (arr_25 [i_7])))));
        arr_27 [i_7] [i_7] |= -1;
    }
    var_28 = (var_5 << (!105));
    #pragma endscop
}
