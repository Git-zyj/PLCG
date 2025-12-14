/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_14;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_21 += (((arr_1 [i_0]) ? (((arr_2 [1]) ? (arr_2 [4]) : (arr_2 [8]))) : ((3394297016 ? 1411650398 : -32746))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_22 = var_13;
                    var_23 ^= arr_0 [i_2] [i_2];
                    var_24 = var_15;
                }
            }
        }
        var_25 = (min(var_25, (arr_6 [0] [8] [i_0 + 1])));
        arr_7 [i_0] [i_0] = ((((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])))) ? (arr_2 [i_0]) : (arr_2 [i_0])));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_26 = (((arr_8 [i_3] [i_3]) ? (arr_8 [i_3] [i_3]) : (arr_8 [i_3] [i_3])));
        var_27 = var_12;
        var_28 = (max(var_28, (arr_9 [0])));
    }
    var_29 = var_11;
    var_30 = ((var_19 ? var_11 : var_8));
    var_31 = var_2;
    #pragma endscop
}
