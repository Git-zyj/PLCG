/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = ((11552 && (arr_1 [i_0])));
        var_19 = ((-(arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    var_20 = var_17;
                    arr_14 [i_1] [14] [i_1] = (((((~(arr_7 [i_2])))) ? 1152919305583591424 : (((arr_11 [i_1] [i_1] [i_1]) | (arr_8 [i_3] [i_2])))));
                }
            }
        }
        var_21 = (!787934071670096219);
    }
    var_22 = (max(var_22, ((((~17293824768125960193) << 0)))));
    var_23 |= ((1152919305583591397 << (216 - 155)));
    var_24 = (min((~16597922623764694408), (var_15 * var_17)));
    #pragma endscop
}
