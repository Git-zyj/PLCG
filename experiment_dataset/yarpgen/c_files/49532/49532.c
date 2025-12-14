/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = ((((126100789566373888 ? 43886608 : (arr_0 [i_0]))) % (((~(arr_1 [i_0] [i_0]))))));
        var_10 ^= (((((((min((arr_1 [i_0] [14]), (arr_0 [10])))) ? -11465 : var_4))) ? -762708719 : 11458));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        var_11 = ((-(arr_5 [i_1 - 1])));
        arr_6 [i_1] &= (arr_5 [i_1]);
        arr_7 [i_1 + 1] = (((((arr_5 [i_1 - 1]) ? 35184372088831 : (arr_5 [i_1 - 1])))) ? (arr_5 [i_1 - 1]) : 28774);
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = ((28774 ? 28774 : 11464));

        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {
            var_12 = 114676139;
            var_13 = ((((((arr_9 [i_3 - 1]) - 1))) ? (arr_12 [i_3 + 2] [i_3]) : (arr_12 [i_3 + 1] [i_3 + 2])));
            arr_14 [i_3 - 2] = (max((((~(arr_9 [i_3 + 2])))), (arr_9 [i_3 - 1])));
            arr_15 [i_3] = var_1;
            arr_16 [i_2] [i_3] = 2648196321;
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        arr_19 [i_4] [i_4] = (((arr_18 [i_4]) ? (arr_18 [i_4]) : (arr_18 [i_4])));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 16;i_6 += 1)
            {
                {
                    var_14 ^= -28775;
                    var_15 = (min(var_15, (((((((arr_0 [0]) ? (arr_20 [16] [i_5] [14]) : (arr_23 [i_4])))) ? -1 : ((114676168 ? (arr_21 [i_4] [i_4]) : 0)))))));
                }
            }
        }
        arr_27 [i_4] [i_4] = (((arr_13 [i_4] [i_4] [2]) ? (arr_13 [i_4] [21] [1]) : (arr_13 [i_4] [i_4] [i_4])));
    }
    var_16 = (min(var_16, (((((var_6 ? var_3 : -21)))))));
    var_17 = (((((var_0 >> (var_3 - 13335411998825049366)))) ? 0 : 45));
    #pragma endscop
}
