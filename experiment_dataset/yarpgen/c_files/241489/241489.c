/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 253;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            arr_5 [11] [i_1] [i_0] = (((arr_3 [i_0]) / (arr_2 [i_1 - 1])));
            arr_6 [i_0] = (!(arr_2 [i_1 - 2]));
            var_13 *= (var_4 & var_2);
        }
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        arr_14 [1] [i_0] [i_4] [i_0] = (arr_9 [i_4]);
                        var_14 = var_6;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_15 = (arr_16 [i_5]);
        var_16 -= (arr_1 [8]);
    }
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        arr_20 [i_6] [i_6] = ((((((!(arr_17 [i_6] [1]))))) + ((var_7 ? (((0 ? 1410373366 : (arr_19 [i_6])))) : (((arr_19 [i_6]) * 0))))));
        var_17 = -512780735;
        var_18 = (((arr_18 [i_6] [i_6]) ? var_1 : var_11));
    }
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        var_19 ^= ((!((!(((var_3 ? (arr_18 [i_7] [i_7]) : (arr_19 [i_7]))))))));
        var_20 = (((((~(!1)))) ? (arr_19 [i_7]) : 0));
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    {
                        arr_33 [14] [i_8] [14] [i_7] = (((((18 & (arr_24 [i_7] [i_8] [i_7])))) ? ((var_11 + (arr_22 [4] [i_8]))) : 1));
                        var_21 = (min(var_21, 954));
                        arr_34 [i_7] [i_8] [i_9] [7] = (arr_27 [i_7] [i_8] [i_9] [i_10]);
                        var_22 = (((((512780711 << ((min(var_9, (arr_29 [i_7] [i_7] [i_7] [12]))))))) ? (((max(1, 32748)))) : (arr_24 [i_9] [i_8] [i_7])));
                    }
                }
            }
        }
        var_23 = (max(var_23, (max((arr_19 [i_7]), (((((arr_28 [2] [i_7]) + 2147483647)) << (var_11 - 1487233171)))))));
    }
    #pragma endscop
}
