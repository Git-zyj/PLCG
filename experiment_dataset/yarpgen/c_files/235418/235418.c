/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_10, (min(var_11, var_8))));
    var_13 = -var_4;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_14 = (min(((237 ? (((8911494874064239568 && (arr_2 [i_0])))) : -var_7)), (arr_0 [i_0 - 1])));
        arr_3 [i_0] = ((((min(var_9, 0))) & (~3638398819)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (248 ? 5945572913850208956 : 0);
        arr_7 [6] = (~var_1);
        var_15 = -5945572913850208956;
    }
    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    arr_17 [5] [i_2] = 18013298997854208;
                    var_16 = (((var_0 - 5945572913850208956) <= (max(((1 ? 248 : 14223632897342044973)), (min(14223632897342044973, -96))))));

                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {
                        arr_20 [i_3] [i_4] [i_2] [i_2] [i_3] [i_2] = (min(var_7, 0));
                        arr_21 [i_2] [i_3] [i_2] [i_2] = var_2;
                        var_17 = (min(var_1, ((min((255 * 0), var_0)))));
                        var_18 = (min((min(((min(255, 15180))), (min(8, 18446744073709551615)))), (var_11 - 4611686018427387904)));
                    }
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        var_19 = (min(var_2, -var_6));
                        var_20 = (max((-7697375111717422353 ^ -7697375111717422353), (((((arr_8 [i_2]) / var_1))))));
                        arr_25 [i_2] [i_2] = var_4;
                        var_21 = (min(248, -1));
                        arr_26 [i_2] [i_2] [i_4] [i_2] [i_3] = ((15180 ? (min((arr_12 [i_2]), var_4)) : (((min((arr_10 [i_2] [i_2]), var_9))))));
                    }
                }
            }
        }
        var_22 = ((var_2 ? (!var_4) : (min(var_11, var_10))));
        var_23 = ((((min((arr_8 [i_2]), var_11))) && (((((min(var_8, var_6))) ? var_1 : var_2)))));
    }
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        var_24 = ((-15181 ? (arr_16 [i_7] [1]) : -var_0));
        arr_30 [10] = var_1;
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                {
                    arr_37 [i_8] [i_8] [i_9] = (~89191979606864361);

                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {

                        for (int i_11 = 1; i_11 < 9;i_11 += 1)
                        {
                            var_25 = (~5945572913850208956);
                            var_26 = (min((((var_1 >= (min(var_5, var_2))))), (arr_24 [i_11 + 2] [i_8])));
                            arr_44 [10] [10] [i_8] [i_10] [i_10] = min((arr_40 [8] [i_8] [1] [i_10] [1] [i_11]), var_11);
                            var_27 = (max((min((var_7 >> var_6), (min(var_7, var_3)))), (((var_5 >= (min(var_7, var_2)))))));
                        }
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 11;i_12 += 1)
                        {
                            var_28 = (~var_0);
                            var_29 = (arr_24 [i_9] [i_8]);
                        }
                        var_30 = -101;
                        var_31 = var_3;
                        var_32 = ((!(((((min(var_5, 0))) ? var_11 : var_6)))));
                    }
                    var_33 = ((-((var_11 ? (arr_43 [i_7] [i_7] [i_8] [1] [i_8]) : var_7))));
                    var_34 = (min((arr_45 [0] [0] [0] [i_8] [i_9]), 113));
                    var_35 = (105 ? 158 : 4294967295);
                }
            }
        }
    }
    #pragma endscop
}
