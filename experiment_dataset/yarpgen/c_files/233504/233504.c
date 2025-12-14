/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_19 = (max(((((arr_1 [i_0]) - (arr_2 [i_0])))), ((3957281432 | (max(-94, 3957281435))))));
                var_20 = min((arr_3 [i_0] [i_0]), (max(var_0, (arr_3 [i_1 + 1] [i_0]))));

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_21 = ((-((var_7 / (arr_0 [i_0])))));
                    var_22 = (min((max((var_4 - var_14), (arr_4 [i_0] [i_1] [i_2] [i_2]))), var_4));
                    arr_6 [10] [i_1] = max((arr_5 [i_0] [i_0] [i_2]), (max(1, var_13)));
                }
                /* vectorizable */
                for (int i_3 = 3; i_3 < 13;i_3 += 1)
                {
                    arr_10 [i_0] [i_1 + 1] [i_3] = 634919936700452985;
                    var_23 -= (~2088801780);
                }
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    arr_13 [i_0] [0] [i_4] [13] = ((var_7 * var_18) / (-93 * 634919936700452991));
                    var_24 = ((((min(var_18, (arr_4 [i_4] [11] [i_0] [i_0])))) ? (var_11 - 2425341033) : (min(var_2, var_6))));
                    arr_14 [i_1] = 1;
                }
                arr_15 [i_0] [i_0] [i_1] = 2048;
                var_25 = (arr_9 [i_0] [i_1] [4] [i_1 - 3]);
            }
        }
    }
    var_26 = (((((max(var_14, var_16)) | var_13)) >= var_5));
    var_27 = var_9;
    #pragma endscop
}
