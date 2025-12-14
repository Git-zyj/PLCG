/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_12 = ((((arr_1 [6]) & -20755)));
        var_13 = (((min((min(var_7, var_2)), var_1)) + ((max((min((arr_1 [i_0]), var_8)), (var_6 && var_1))))));
        var_14 = (min(var_14, 31459));
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 7;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 7;i_2 += 1)
        {
            {
                arr_8 [i_2] [i_1] = (max((var_9 & var_2), (((arr_5 [i_2] [8] [i_1]) / ((((arr_3 [i_2]) && (arr_3 [i_1]))))))));
                arr_9 [i_1] [i_1 + 2] = (((((arr_6 [i_1]) <= ((((arr_1 [i_1]) / (arr_3 [i_2])))))) ? (((var_9 ? (arr_2 [i_2 - 2] [i_2]) : (arr_7 [i_1] [i_1] [i_2])))) : ((((min((arr_3 [i_1]), (arr_2 [3] [i_2])))) ? (var_3 / var_6) : (((var_6 ? (arr_2 [4] [i_2]) : -480470020)))))));

                /* vectorizable */
                for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
                {
                    arr_14 [i_1] [1] [i_3] [6] = (arr_1 [i_1 - 1]);
                    var_15 ^= (((arr_3 [i_2 - 1]) / (((929364413 <= (arr_13 [i_1] [5] [i_1] [i_1]))))));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
                {
                    arr_17 [i_1] [i_2 - 1] = (arr_5 [i_2 + 4] [i_2 - 3] [i_1 + 1]);
                    arr_18 [i_2] = ((-20746 ? var_8 : (var_1 ^ var_9)));
                    var_16 = (arr_3 [i_4]);
                    arr_19 [i_4] [i_2] [i_2 + 1] [6] = (((((((arr_0 [i_2 - 3]) + 2147483647)) >> (((arr_10 [i_1 + 4] [i_2] [i_4] [0]) + 48)))) < (arr_7 [i_1 - 1] [i_2 - 1] [i_4])));
                    var_17 = var_5;
                }
                var_18 -= (arr_0 [i_1]);
            }
        }
    }
    #pragma endscop
}
