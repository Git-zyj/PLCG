/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 4;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 = max((arr_1 [i_0] [i_0]), ((((arr_1 [i_0] [i_0]) != (arr_1 [i_0] [i_0])))));
        var_21 = var_2;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_2] = (((min(3805, 2223814234277560195)) == var_16));
                    arr_9 [i_1] = ((255 ? 39199 : 3808));
                    arr_10 [i_1] [i_1] [i_1] = ((-(((61730 << (((var_5 + 1950402893) - 15)))))));
                }
            }
        }
        arr_11 [i_0] [i_0] = (-127 - 1);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_22 = (max(var_22, (~1)));
        arr_16 [9] [i_3] = (((~(arr_13 [i_3] [i_3]))));
    }
    #pragma endscop
}
