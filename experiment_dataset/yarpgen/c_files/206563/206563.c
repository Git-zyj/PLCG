/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] |= (arr_2 [i_0]);
        var_20 -= ((((arr_1 [4] [i_0]) & (arr_2 [i_0]))));
        var_21 = (min((arr_2 [i_0]), (((arr_2 [7]) - (arr_1 [i_0] [i_0])))));
        var_22 = (max((arr_0 [i_0]), (max((~-3877409279032103427), (arr_1 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        arr_10 [14] [i_2] [i_2] = (!7423838404779201265);
                        arr_11 [i_0] [1] [1] [i_1] = ((!((max((min(5864869920697590477, 31301)), ((min((arr_2 [i_0]), -28401))))))));
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        arr_15 [i_0] [i_1] [i_0] [9] = (arr_7 [i_0] [i_2] [11]);
                        var_23 ^= (((((18 ? -1058843289 : -21522))) ? (~3660749315) : (arr_4 [i_0] [i_0] [i_0])));
                        var_24 |= (((1 - 3660749305) ? ((((arr_2 [i_0]) == (arr_12 [i_0] [i_1] [i_1] [i_1])))) : 0));
                        var_25 = ((arr_13 [i_0] [i_1]) & ((~(arr_14 [i_0] [i_0] [i_2] [2]))));
                    }
                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 14;i_5 += 1)
                    {
                        var_26 = (max(var_26, ((((arr_6 [i_5 - 1] [0] [i_2]) ? ((~(arr_4 [i_0] [i_0] [i_0]))) : (arr_12 [4] [i_2] [i_1] [i_0]))))));
                        arr_18 [i_0] [1] [1] [i_5] = ((~((~(arr_0 [i_0])))));
                        arr_19 [i_0] [i_5] = (arr_17 [i_1] [i_2] [i_2] [i_1] [i_1] [i_0]);

                        for (int i_6 = 1; i_6 < 15;i_6 += 1)
                        {
                            var_27 = ((-(arr_12 [i_0] [i_5 + 2] [i_5 - 2] [i_5])));
                            var_28 = (min(var_28, (arr_12 [i_6 + 1] [i_1] [i_2] [i_5 + 2])));
                            arr_24 [i_1] [i_1] [i_5] = (((arr_14 [i_5 + 1] [i_5 - 2] [i_5 - 1] [i_5 + 1]) == (arr_16 [13])));
                        }
                        var_29 += 1058843288;
                    }
                    arr_25 [i_2] [12] = (arr_23 [10] [11] [i_1] [i_1] [i_0] [i_0]);
                    var_30 = (arr_12 [i_0] [i_0] [12] [i_2]);
                    var_31 += var_5;
                    var_32 ^= (arr_5 [i_2] [i_2] [i_2]);
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        arr_30 [i_7] = (((-(arr_28 [i_7]))));
        var_33 |= (arr_26 [i_7] [i_7]);
        arr_31 [i_7] = ((~((248 ? -28392 : (1251 + -20467)))));
    }
    var_34 = var_4;
    #pragma endscop
}
