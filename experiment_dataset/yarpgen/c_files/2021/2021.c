/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((3249220295265901568 ? -4680582210689597400 : 3249220295265901570))) | (max(((max(var_3, var_4))), ((var_5 ? var_9 : var_2))))));
    var_12 = var_8;

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_13 = (max(var_13, ((min((((1 == var_6) ? (arr_1 [i_0 - 1]) : (((arr_3 [i_0]) ? 1 : (arr_0 [1]))))), (((arr_3 [0]) ? (arr_1 [i_0 + 1]) : (!var_9))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_16 [i_0 - 1] [i_1] [i_2] [i_3] [i_4] = (((~1) ? ((~(arr_13 [i_0] [6]))) : var_7));
                                var_14 = (arr_2 [i_1]);
                                arr_17 [6] [i_1] [i_2] [i_1] [i_4] [2] [i_2] = (max(8027057943195180632, (arr_3 [i_0 + 1])));
                                var_15 ^= ((8192749945139941112 ? 91 : 16361892505884482766));
                            }
                        }
                    }
                    arr_18 [i_0] [i_2] [1] [1] = ((-(((!((((arr_3 [i_2]) ? 5222655386211739625 : var_4))))))));
                }
            }
        }
        var_16 = (max((((arr_3 [i_0 - 1]) & (arr_3 [i_0 - 1]))), ((((arr_3 [i_0 - 1]) == (arr_3 [i_0 + 1]))))));
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        var_17 |= ((var_9 ? (((((arr_2 [i_5]) ? 94 : var_5)))) : (arr_20 [i_5])));
        var_18 = -var_8;
        arr_23 [i_5] [5] = ((+((var_1 ? (!var_10) : ((((arr_20 [i_5]) <= -8027057943195180637)))))));
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                {
                    arr_28 [i_7] [i_6] [i_6] = (((38204 ? -1 : (1 * 3471468110137599482))));
                    arr_29 [i_7] = ((-(arr_20 [i_5])));
                    arr_30 [11] [i_7] [i_7] [i_5] = ((+(min(((min((arr_4 [15] [0] [1]), -10))), var_10))));
                }
            }
        }
    }
    var_19 -= -71;
    #pragma endscop
}
