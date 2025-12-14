/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_12));
    var_14 &= (max(var_1, var_7));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_2 [i_0 + 1]) == var_8));
        arr_4 [i_0 + 1] = (arr_0 [i_0 + 1]);
        arr_5 [i_0] = -var_10;
        var_15 = (arr_2 [i_0 + 1]);
        var_16 = (((arr_0 [i_0 + 1]) << (arr_2 [i_0 - 1])));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 20;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (arr_7 [i_1 + 2]);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    var_17 = ((var_11 ? (arr_6 [i_1]) : 5217210785596837360));

                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {

                        for (int i_5 = 1; i_5 < 21;i_5 += 1)
                        {
                            var_18 = (((arr_10 [i_4 - 1] [i_4 - 1] [i_1 + 2]) & (arr_10 [i_1] [i_1] [i_2])));
                            arr_22 [i_1] [i_4] [4] [i_2] [i_1] = (arr_20 [i_1] [i_1 - 2] [19] [i_4] [i_5 - 1] [19]);
                            var_19 = (arr_9 [i_1] [16]);
                            arr_23 [i_1] [i_2] [i_3] [i_4] [i_5] = 5217210785596837360;
                            arr_24 [i_1] [9] [i_3] [15] [i_5] = (arr_10 [i_1] [i_2] [i_4]);
                        }
                        arr_25 [i_1 - 2] [i_1 - 2] [i_1] [i_1 - 2] = (((arr_15 [i_1] [15] [i_1] [15] [15] [i_4]) - (arr_15 [i_4] [i_2] [i_1] [i_2] [i_3] [3])));
                        arr_26 [i_2] [i_1] [3] = ((((5217210785596837352 % (arr_17 [i_4 - 1] [i_3] [i_2] [18]))) % var_6));
                        var_20 = -1130827032;
                    }
                }
            }
        }
        arr_27 [i_1] = (((arr_18 [7] [i_1 - 2]) || (arr_18 [i_1] [i_1 - 2])));
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 18;i_6 += 1)
    {
        arr_32 [i_6] = (((arr_21 [i_6 + 1] [i_6] [i_6] [i_6 + 1] [i_6] [i_6 - 1] [i_6]) >= var_8));
        arr_33 [i_6] = (((arr_6 [i_6 + 2]) != (arr_6 [i_6 + 2])));
        arr_34 [i_6] = -1130827059;
        arr_35 [i_6 + 3] = var_11;
    }
    for (int i_7 = 1; i_7 < 13;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 14;i_9 += 1)
            {
                {
                    var_21 = ((32 ? 12080 : 1130827060));
                    var_22 |= ((((arr_28 [i_7 + 2] [i_7]) ^ (arr_44 [i_7] [1] [i_7 - 1] [12]))));
                }
            }
        }
        arr_45 [i_7] = var_10;
        arr_46 [i_7] = ((((((arr_14 [i_7 + 2] [i_7 + 1]) ? (arr_14 [i_7 + 1] [i_7 + 2]) : (arr_14 [i_7 + 2] [i_7 + 1])))) ? ((-(arr_14 [i_7 - 1] [i_7 - 1]))) : (arr_14 [i_7 + 2] [i_7 - 1])));
        var_23 = (-23485 || ((((4814699662810184886 & -797) | -93))));
    }
    var_24 = var_4;
    #pragma endscop
}
