/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 24;i_0 += 1)
    {
        var_18 = ((var_8 ? (4294967295 < 255) : (var_7 <= 0)));
        var_19 = (arr_1 [i_0 - 3]);
        var_20 -= (arr_0 [i_0 - 1]);
    }
    for (int i_1 = 3; i_1 < 19;i_1 += 1)
    {
        var_21 ^= (max((((((arr_3 [8]) + 1146895387)))), ((-(max(479800015, (arr_1 [17])))))));
        var_22 ^= ((~(arr_4 [i_1 + 2] [i_1 - 2])));
        var_23 = ((!(!134980340)));
        arr_5 [i_1] = (min(((var_12 ? ((3148071934 ? var_10 : 43)) : var_5)), var_11));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 20;i_3 += 1)
            {
                {
                    var_24 = ((~(arr_0 [i_2])));
                    var_25 = (((((3148071947 ? 3815167291 : 84))) ? (((arr_11 [i_3 - 1] [i_1] [i_1]) ? var_0 : (arr_6 [i_1 + 1]))) : (var_6 + var_8)));
                    arr_12 [i_1] [i_1] [i_3] = (max((arr_7 [i_1] [i_1] [i_1]), 246));
                    var_26 = ((-var_4 * ((43 ? (arr_10 [i_3] [i_1] [i_1]) : (479799990 & var_3)))));
                }
            }
        }
    }
    var_27 = ((var_11 ? var_4 : 4294967290));
    #pragma endscop
}
