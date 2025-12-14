/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= (min(((var_3 ? (((max(0, 19)))) : ((1618601735 ? var_12 : 17290739497602765997)))), -var_7));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_15 = (((!29810) ? (arr_1 [i_0] [1]) : 12867));
        var_16 = (((((arr_1 [i_0] [i_0]) ? var_2 : (arr_1 [i_0] [4]))) ^ -var_13));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_5 [i_1] = (((((0 ? 1618601737 : 3138941918))) ? ((((!(arr_4 [i_1]))))) : var_10));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    {
                        var_17 *= (min(((46 | (arr_3 [i_2]))), ((((arr_3 [i_2]) == (arr_3 [i_4]))))));

                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            var_18 = (max((((-(arr_6 [i_1])))), 17290739497602765997));
                            var_19 = (var_9 * (min(((min(113, 70))), -var_4)));
                            var_20 = (max(142, ((((-31634 && (arr_6 [i_1]))) ? -0 : 40))));
                        }
                        var_21 = 11362;

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_22 *= (arr_18 [7]);
                            var_23 = (min((arr_19 [i_1] [i_2] [i_4]), (min((max(-24747, (arr_17 [i_6] [16] [i_3] [i_2] [9] [i_1]))), (arr_17 [i_1] [i_2] [i_3] [i_4] [i_4] [i_6])))));
                            var_24 = (max(((var_1 * (arr_8 [i_1]))), (arr_8 [i_1])));
                            var_25 = (arr_16 [i_1] [i_1]);
                        }
                    }
                }
            }
            var_26 = (max((arr_7 [i_2]), (((((arr_17 [i_1] [6] [i_1] [i_1] [8] [8]) ? -1863 : 204))))));
            var_27 = (!379983448);
            var_28 = min(((-1 | (arr_15 [i_1] [5] [i_2] [i_2] [i_2]))), -1076167489);
            arr_20 [i_1] [0] [i_1] = (arr_19 [i_1] [i_2] [i_1]);
        }
        arr_21 [i_1] = ((-(min((((var_1 | (arr_6 [i_1])))), 3170910938358497501))));
    }
    var_29 = var_11;
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            {
                arr_26 [i_7] = ((((max(15451126198135369223, (((!(arr_24 [i_7] [i_8]))))))) ? (max(((var_8 ? (arr_23 [i_7] [8]) : (arr_1 [12] [i_8]))), 1209371594)) : 1));
                var_30 = (max(var_30, (((max(-1, (~-1))) + ((max(-1618601737, 21670)))))));
                var_31 = (max(var_31, var_5));
            }
        }
    }
    var_32 = var_9;
    #pragma endscop
}
