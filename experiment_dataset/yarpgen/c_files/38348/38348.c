/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((~14567017921535879085) & (14567017921535879085 & 1143914305352105984))));
    var_21 = var_7;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_22 = (~var_12);
        arr_2 [2] |= 0;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] &= 3879726152173672531;
                    var_23 = (((!var_13) != (~3879726152173672531)));
                }
            }
        }
        var_24 = (max(var_24, ((((((-(~3021988628)))) && 1)))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {

        for (int i_4 = 1; i_4 < 16;i_4 += 1)
        {
            var_25 = (arr_13 [i_3] [i_4 - 1]);
            var_26 &= 8;
        }
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            var_27 -= -var_13;
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_28 = 1;
                        arr_20 [i_6] [i_3] = var_14;
                        var_29 += 9219630022283072233;
                        var_30 = -1489475023955680850;
                    }
                }
            }
        }
        var_31 = 1;
        arr_21 [i_3] = var_10;

        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {

            for (int i_9 = 1; i_9 < 19;i_9 += 1)
            {
                var_32 = (max(var_32, ((var_7 != ((var_15 ? 1 : var_19))))));
                var_33 = (max(var_33, var_3));
                var_34 = (min(var_34, 0));
                arr_26 [i_8] [i_3] [i_8] [i_9] = (arr_16 [i_9 - 1] [i_9 + 1] [i_9 + 1] [i_9 + 1]);
            }
            var_35 = (max(var_35, (((var_17 - (9223372036854775807 | var_10))))));
            arr_27 [i_8] [i_8] [i_8] = 14567017921535879094;
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        {
                            arr_35 [i_3] [i_10] [i_3] [i_12] &= -1;
                            var_36 = 1365955441;
                            arr_36 [i_3] [i_8] [i_10] [i_11] [i_11] [i_12] = ((-var_11 + (arr_18 [i_3] [i_11] [i_11] [i_10])));
                        }
                    }
                }
            }
            arr_37 [i_3] [i_8] [i_8] = 3021988628;
        }
    }
    for (int i_13 = 0; i_13 < 18;i_13 += 1)
    {
        var_37 = ((!(arr_5 [i_13] [i_13] [i_13] [i_13])));
        var_38 = ((var_17 ^ ((((arr_29 [i_13] [i_13] [i_13]) && 32768)))));
        arr_40 [3] = -6987801932912721522;
        var_39 ^= (arr_34 [16] [i_13] [i_13] [i_13] [i_13]);
    }
    var_40 = 1;
    var_41 = var_19;
    #pragma endscop
}
