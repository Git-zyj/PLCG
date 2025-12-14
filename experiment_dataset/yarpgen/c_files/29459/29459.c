/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_10 = -65531;
                    var_11 = 9571751558737561284;
                    var_12 = (max((arr_2 [i_1]), (arr_7 [i_0 - 2] [i_1] [i_2])));

                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        arr_12 [i_0] [i_0] [i_3] [i_0] [i_0] [i_0] = ((-(((arr_2 [i_3 - 3]) << (((arr_2 [i_3 - 2]) - 1278602008))))));

                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            arr_16 [i_1] [i_1] [i_1] &= (((((((arr_8 [0] [i_4 + 1]) < (arr_8 [i_0] [i_0 - 1]))))) <= ((-(arr_8 [i_1] [i_3 + 3])))));
                            var_13 = 65520;
                            arr_17 [i_2] [i_1] [i_1] [i_3] [i_4] = (((!-100) ? (((arr_4 [i_0] [i_1] [i_3 - 3]) * (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0 - 1]))) : ((((!(arr_15 [14] [i_4] [i_4 + 1] [i_4] [i_4 - 1] [i_4 + 1] [5])))))));
                            arr_18 [i_1] [i_0 + 1] [i_1] [i_2] [i_1] [i_3] [i_4 - 1] &= ((~(arr_14 [i_1] [i_3 + 2] [i_3 + 4] [i_4 - 1])));
                        }
                    }
                    arr_19 [i_1] [i_1] [i_1] [i_1] = (arr_4 [i_0] [i_0] [0]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 12;i_6 += 1)
        {
            {
                var_14 = ((!(arr_5 [i_5] [i_6] [i_5])));
                var_15 = (max((((!(arr_7 [i_5 - 1] [i_6 + 1] [i_6 + 1])))), (((arr_7 [i_5 - 2] [i_6 - 1] [i_6 - 3]) << (((arr_10 [20] [i_5 - 2] [i_5 + 2] [i_6 - 3] [i_5 - 2]) + 129))))));
                arr_25 [i_6 - 3] [i_6] [i_6] |= (((max(((min((arr_22 [i_5] [i_6] [i_6]), 99))), (arr_15 [i_5] [14] [i_6 - 3] [i_6] [i_6] [i_5] [i_6 - 3]))) << (((min((arr_3 [i_6 - 2] [i_5]), (arr_3 [i_6 - 1] [i_6]))) - 2473470989590569451))));
            }
        }
    }
    #pragma endscop
}
