/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_10 = (((var_4 - var_4) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])));
        var_11 = (min(var_11, (((var_3 ? 0 : var_1)))));
        var_12 += (var_4 ^ -819550936470946678);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_13 |= (((-202671669705968342 + 2253203397330249200) | (arr_5 [i_0] [10] [i_1 + 1] [i_3])));
                        arr_10 [i_3] [i_0] [i_2] [i_0] [i_0] = var_7;
                        var_14 = (4294967287 + var_5);
                    }
                    for (int i_4 = 2; i_4 < 14;i_4 += 1)
                    {
                        arr_15 [i_1] [i_0] [i_2] = ((((0 ? 0 : 425775377)) - var_0));
                        arr_16 [10] [i_0] [i_2] [i_0] = (((arr_3 [i_1 + 1] [i_0]) - (arr_3 [i_1 + 1] [i_0])));
                    }
                    arr_17 [i_0] [12] [i_2] [i_0] = var_3;
                    var_15 = 8814;
                    var_16 = 56720;
                    var_17 = 0;
                }
            }
        }
        var_18 += ((~(arr_2 [i_0] [2])));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
    {
        arr_20 [0] |= -1;

        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            var_19 = 641291612;
            arr_23 [i_5] [i_5] = (((((2037186599 ? var_5 : (arr_1 [8])))) ? (0 << 0) : var_8));
            arr_24 [i_5] = 8295805459848232212;
        }
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            var_20 *= (~-643420003);
            arr_27 [i_5] [i_5] [i_7] = (((arr_5 [i_7] [i_7] [i_5] [i_7]) && (((var_9 ? 39 : var_2)))));
        }
        arr_28 [i_5] = 0;
        var_21 = (-0 ? (var_6 || 4294967295) : (arr_5 [i_5] [i_5] [i_5] [14]));
    }
    var_22 = 8839;
    var_23 = 768;
    var_24 = var_0;
    #pragma endscop
}
