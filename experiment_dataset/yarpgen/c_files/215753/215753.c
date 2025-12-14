/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_15;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_21 = 255;

            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                arr_6 [i_1] = -52;
                arr_7 [i_1] [i_1] [i_1] = (min((min((1665486990 / 1), (((arr_2 [i_2]) ? (arr_1 [i_1]) : (arr_0 [i_0]))))), ((-(arr_5 [i_0] [i_1] [i_0])))));
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 9;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 9;i_4 += 1)
                    {
                        {
                            arr_14 [i_0] [i_1] [i_2 - 1] [8] [i_2] [i_1] [i_2] = ((((((((-7237578335884980343 ? 40 : 184339929))) ? var_3 : (arr_8 [i_0] [4] [i_2 + 1] [i_3 + 1])))) / (((arr_11 [i_1] [7] [i_2 + 1] [i_4] [i_4 - 2]) ? (-9 ^ 10748315772296772501) : (arr_10 [i_4 - 1] [i_3 + 1] [i_3] [i_3 - 1] [i_2 + 1])))));
                            var_22 = ((~((1 ? 60 : (arr_12 [i_3 - 2] [7] [i_1] [i_3 - 2] [i_1] [6] [i_2 - 1])))));
                            var_23 = (!10748315772296772501);
                            var_24 = ((+((1 ? (((arr_1 [i_2 + 1]) ? 1 : (arr_5 [i_4] [i_3] [i_2]))) : ((-7021027061022183495 ? 252 : var_13))))));
                        }
                    }
                }
            }
        }
        arr_15 [i_0] [i_0] = (((((((-524791720008190976 ? (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : -7021027061022183495)) / (((min(1, var_8))))))) ? (min((((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) ? 1 : 5)), 0)) : ((((((var_15 ? (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) : -1665486991))) ? 127 : ((1665486981 ? 63 : (arr_12 [i_0] [1] [i_0] [1] [i_0] [i_0] [i_0]))))))));
        arr_16 [i_0] = (min(((-1 ? -1665487017 : -116)), (((arr_3 [i_0] [i_0] [i_0]) ? (arr_3 [i_0] [i_0] [i_0]) : -1665486991))));
    }
    var_25 = (((((((min(var_6, var_11))) ? ((min(var_10, -9))) : var_10))) ? (246 / -74) : ((-(max(var_7, 18446744073709551600))))));

    /* vectorizable */
    for (int i_5 = 3; i_5 < 21;i_5 += 1)
    {
        var_26 = (((arr_18 [i_5 - 3] [i_5 - 2]) ? 1 : 4296214479626460286));
        var_27 = ((0 ? -61 : -2));
        var_28 = ((~(arr_18 [i_5 + 2] [i_5 + 2])));
    }
    #pragma endscop
}
