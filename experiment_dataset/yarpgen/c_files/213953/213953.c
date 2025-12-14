/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;
    var_13 = var_9;
    var_14 ^= ((((((((var_8 ? 4160749568 : var_9))) ? (((5 << (-124 + 149)))) : ((4160749568 ? var_4 : var_4))))) && ((min(var_8, var_7)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_15 = (max(((((((arr_1 [23]) ? 436159493 : -1669328501))) ? ((96 ? 5 : (arr_1 [i_0]))) : (((var_6 < (arr_1 [i_0])))))), 251));
        var_16 = (((arr_1 [i_0]) << ((((min((arr_0 [i_0]), (arr_1 [i_0])))) - 103))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        var_17 = ((var_0 % (var_1 >= 26)));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    var_18 = ((((4692298308217620133 ? 2516311369 : var_11)) <= (arr_6 [i_1] [i_1] [i_3])));
                    arr_12 [i_3] [i_1 - 1] [i_2 + 1] [i_3] |= ((var_9 ? (arr_9 [i_2 - 1] [i_3]) : -114));

                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {
                        var_19 = (var_11 || 1);
                        arr_15 [i_1] [3] [3] [i_2] [i_3] [i_4 - 1] = (((var_10 | (arr_2 [12]))));
                        var_20 = (max(var_20, ((((((arr_10 [14] [i_3] [i_3]) >> var_2))) ? var_0 : (arr_11 [i_1 - 1] [i_2] [1] [5])))));
                    }
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        arr_18 [i_2] = arr_4 [i_1] [i_1];
                        var_21 += (var_9 <= -var_6);
                    }
                    var_22 = (((arr_10 [i_1] [i_2] [i_3]) + (arr_10 [i_1 + 1] [i_2] [i_3])));
                    var_23 = var_3;
                }
            }
        }
        var_24 = (max(var_24, ((((arr_3 [i_1 - 2]) ? ((var_5 - (arr_4 [1] [i_1 + 1]))) : (((var_5 >> (var_7 + 24989)))))))));
    }
    #pragma endscop
}
