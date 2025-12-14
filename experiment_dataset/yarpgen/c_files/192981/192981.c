/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_6 || var_2);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_14 = (((arr_2 [i_0]) * ((255 ? var_4 : var_3))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 ^= (((arr_1 [i_1 + 4]) ? var_11 : (arr_1 [i_0])));
                    arr_8 [i_0] [20] [i_0] = 480;
                }
            }
        }
        var_16 = (max(var_16, (var_12 != -1)));
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_17 = ((!((!((max(234, 124)))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 8;i_7 += 1)
                        {
                            {
                                arr_23 [6] [i_3] [i_5] [i_6] [i_3] [7] = ((243 ? 4294967295 : (((~((64 ? (arr_18 [i_3]) : 64)))))));
                                arr_24 [i_3] = max((arr_16 [i_6 - 3] [i_6 - 1] [i_6 - 2] [i_6 - 2]), (((arr_4 [i_6 - 3]) ? (arr_4 [i_6 - 3]) : (arr_4 [i_6 + 1]))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 8;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            {
                                var_18 = (min(var_18, (((((max((arr_6 [i_8 + 1]), (arr_5 [i_8 - 1])))) && ((min(14, var_0))))))));
                                arr_29 [i_8] [i_3] [i_3] [i_3] = (max((((((((arr_26 [i_3] [i_3]) ? (arr_4 [20]) : 2096640))) || 1))), (min((arr_27 [9] [i_3] [i_4] [i_4] [i_4] [i_3] [1]), (arr_27 [8] [i_3] [0] [i_4] [i_4] [i_3] [i_4])))));
                            }
                        }
                    }
                    var_19 = (max(var_19, 1835008));
                    var_20 = (min((((arr_27 [i_5] [i_3] [i_4] [i_4] [i_3] [i_3] [i_3]) ? ((var_11 ? var_7 : (arr_16 [3] [i_4] [i_4] [7]))) : 28)), (arr_15 [i_3] [i_4] [i_5] [i_5])));
                    var_21 = 84;
                }
            }
        }
    }
    var_22 = 4292870663;
    var_23 = min((max(var_10, (var_3 || var_3))), var_6);
    #pragma endscop
}
