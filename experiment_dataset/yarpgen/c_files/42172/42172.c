/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_7 / -2109826874);

    /* vectorizable */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] = (((arr_0 [i_0]) ? (arr_2 [i_0 + 1]) : 68));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_12 ^= (((arr_6 [i_0 - 2] [i_1 + 1] [i_1 + 1]) ? (arr_6 [i_0 - 3] [i_1 - 1] [i_1 + 1]) : (arr_7 [i_1 + 1] [i_1] [i_1 + 1])));
                    var_13 &= ((((arr_7 [i_0 + 1] [i_1 + 1] [9]) != var_1)) ? ((((arr_6 [i_0] [i_0] [i_0]) ^ 62))) : (arr_9 [i_1 + 1] [14] [7]));
                    arr_11 [i_1] = (arr_9 [i_2] [i_1 + 1] [i_0]);
                }
            }
        }
        var_14 = (arr_5 [i_0 - 3]);
    }
    var_15 = (((-8779076385013475252 | var_2) - (max((max(68, var_3)), var_3))));
    #pragma endscop
}
