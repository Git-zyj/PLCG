/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_21 *= 3667445254971940867;
        arr_2 [i_0] &= (~-var_2);
        var_22 = var_17;
        arr_3 [1] = ((3667445254971940867 + (arr_1 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = (((((65535 ? 16245619679370041917 : var_17))) ? (arr_9 [i_1] [i_1 + 1] [i_1 + 3] [i_1]) : (arr_8 [i_1 + 2])));
                    var_23 = (max(var_23, (((arr_7 [12] [i_1]) ? 3667445254971940867 : (arr_7 [i_0] [i_1 + 2])))));
                }
            }
        }
    }
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {
        var_24 = (min(var_24, (arr_11 [0] [4])));
        var_25 = (i_3 % 2 == zero) ? (((((-(arr_11 [i_3] [i_3 + 1]))) >> (5198411344487469182 - 5198411344487469179)))) : (((((((-(arr_11 [i_3] [i_3 + 1]))) + 2147483647)) >> (5198411344487469182 - 5198411344487469179))));
        arr_14 [i_3] = 16777212;
        arr_15 [i_3] [i_3] = -var_3;
    }
    var_26 += (((((-27 ? var_17 : 3667445254971940836)))));
    var_27 = 3667445254971940867;
    #pragma endscop
}
