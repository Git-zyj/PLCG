/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_0 [i_0] [i_0]) * (arr_1 [i_0])));
        var_13 = ((((!(arr_0 [9] [i_0]))) ? (arr_0 [i_0] [i_0]) : (((arr_0 [i_0] [i_0]) - (arr_1 [i_0])))));
        var_14 ^= ((~(arr_1 [i_0])));
        arr_3 [i_0] = (arr_0 [i_0] [i_0]);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_15 ^= ((((((~(arr_4 [0]))) + 2147483647)) << ((((425133568574868124 << (((arr_4 [8]) - 34)))) - 850267137149736248))));
            var_16 ^= (arr_7 [i_0] [10] [i_0]);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_16 [i_0] = (((((arr_10 [i_0] [i_0] [i_0] [i_0]) || (arr_12 [i_0] [i_1] [i_2] [i_2]))) ? ((-(arr_11 [i_0] [i_1] [3] [i_0]))) : (arr_10 [i_0] [i_1] [i_1] [i_0])));
                        var_17 = ((15876409063769575518 ? (var_11 - 3458385962) : (arr_12 [i_1] [10] [i_1] [i_1])));
                        var_18 = (min(var_18, ((177 >> (arr_14 [i_0] [i_1] [0] [0])))));
                    }
                }
            }
        }
    }
    var_19 = 78;
    #pragma endscop
}
