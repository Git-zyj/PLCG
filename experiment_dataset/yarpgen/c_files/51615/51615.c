/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-24644 ? 56 : 0));
    var_15 = 18446744073709551591;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 = (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])));
        arr_2 [i_0] [i_0] = var_10;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_17 = var_13;
                        var_18 = var_1;
                        arr_10 [i_0] [i_2] [i_0] [i_3] [i_2] [i_0] = 1;
                        var_19 -= 3559507268342408825;
                    }
                }
            }
        }
    }
    var_20 = ((-(min(var_2, ((24644 ? var_13 : var_1))))));
    #pragma endscop
}
