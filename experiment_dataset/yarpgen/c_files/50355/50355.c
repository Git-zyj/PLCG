/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_11 = ((1 ? var_6 : (min(var_1, (arr_0 [i_0])))));
        var_12 = ((!(((13643851061206249855 ? (arr_3 [i_0]) : (arr_2 [i_0]))))));
        arr_4 [i_0] [i_0] |= var_5;
        var_13 -= ((var_8 ? (arr_1 [i_0]) : (((arr_2 [i_0]) ? var_0 : var_6))));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 16;i_3 += 1)
            {
                {
                    var_14 = (min(var_14, (!var_4)));
                    var_15 -= ((~(arr_0 [i_3 - 1])));
                    arr_11 [i_2] [i_2 + 1] [10] [i_1] = 5232;
                }
            }
        }
        var_16 = ((-1 ? (arr_2 [i_1]) : 128));
        var_17 = var_5;
    }
    var_18 *= -1;
    #pragma endscop
}
