/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0 + 1] |= 37;
        arr_3 [i_0] [i_0] = (((arr_0 [i_0 - 1]) ? ((((max(-1, 336177005776705217))) ? (arr_0 [i_0 + 1]) : ((~(arr_1 [1]))))) : ((var_9 ? var_12 : var_6))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    var_14 += 255;
                    var_15 = ((var_7 ? ((var_6 ? var_7 : 207)) : ((max(var_2, (arr_7 [i_2 + 2] [9] [i_2 - 2]))))));
                }
            }
        }
        var_16 = (((min((arr_6 [i_1] [i_1]), 18110567067932846399)) * ((((max(18110567067932846411, (arr_5 [i_1]))))))));
        arr_13 [i_1] [i_1] = var_6;

        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            var_17 += (max(var_12, var_5));
            var_18 = ((((336177005776705204 ? (max(var_12, 11724925511016152841)) : ((((arr_14 [6]) / var_6))))) / ((((var_8 ? var_11 : var_4))))));
            arr_16 [i_1] [i_1] = (max(var_12, 336177005776705217));
        }
        /* vectorizable */
        for (int i_5 = 3; i_5 < 13;i_5 += 1)
        {
            var_19 |= var_3;
            var_20 += (((arr_11 [0] [i_5 - 3] [i_5] [i_5 + 1]) ? var_3 : 18110567067932846411));
            var_21 = 4294967286;
        }
    }
    #pragma endscop
}
