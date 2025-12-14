/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_10 = (max(var_10, (((var_4 ? var_5 : 157)))));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_4 [i_0] [i_1] [i_0] = (155 * 1024);
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 21;i_4 += 1)
                    {
                        {
                            var_11 += (187 / 1);
                            arr_15 [1] [i_4 + 1] [i_4] &= (((arr_0 [1]) ? (arr_13 [12] [i_4 - 2] [i_4] [0] [i_4] [i_4]) : (~1)));
                        }
                    }
                }
            }
            var_12 = (((((~(arr_8 [i_0] [5] [i_1] [i_1])))) ? (arr_10 [i_0 - 2] [i_1] [i_0 - 2] [i_1]) : ((((var_8 || (arr_8 [11] [i_1] [i_0] [i_1])))))));
            var_13 *= (!1455465469);
        }
    }
    var_14 = (max(var_14, ((~((~(var_3 | var_2)))))));
    var_15 = var_4;
    #pragma endscop
}
