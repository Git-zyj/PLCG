/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 0;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_21 &= arr_1 [i_0] [i_1];
                var_22 = 614080255;

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_23 = (arr_3 [i_0 - 3] [i_0 - 3]);
                    arr_11 [21] [17] [17] = (arr_5 [i_0] [i_1] [i_1]);
                    var_24 = (-(arr_5 [i_2] [i_0 - 3] [i_0 - 3]));
                    var_25 = (-(arr_3 [i_1] [i_0]));
                    arr_12 [9] [i_1] [i_1] [i_2] = -614080256;
                }
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    var_26 = (min(var_26, (~18)));
                    var_27 = (((((!(arr_0 [11])))) & ((((~(arr_14 [i_0] [i_3] [i_3] [i_3])))))));
                }

                /* vectorizable */
                for (int i_4 = 1; i_4 < 19;i_4 += 1)
                {
                    var_28 = (614080255 + -614080256);
                    var_29 = (arr_4 [i_1]);
                    arr_17 [i_0] [i_1] [i_4] = (arr_13 [i_0] [i_1] [i_4] [i_4]);
                }
                for (int i_5 = 2; i_5 < 21;i_5 += 1)
                {
                    var_30 = (min(var_30, (arr_9 [20] [i_1] [12] [i_1])));
                    var_31 |= -907917392;
                    var_32 = (arr_14 [13] [i_1] [12] [12]);
                }
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    var_33 = (arr_16 [19] [i_1] [3] [4]);
                    arr_22 [15] [15] [i_6] = 614080258;
                    var_34 = (arr_16 [i_0] [i_1] [11] [i_6]);
                    var_35 = -104;
                }
            }
        }
    }
    #pragma endscop
}
