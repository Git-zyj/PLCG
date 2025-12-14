/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = min(7406249305569989420, ((min((~var_1), 1))));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    arr_9 [i_2] [i_2] [i_2] = 18446744073709551611;
                    var_11 = (var_7 ? -21513 : ((112 ? 252 : 2047)));
                    arr_10 [i_2] = 3357285383907958198;

                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        arr_14 [i_0] [i_2] [i_3] [i_3 - 1] = 19769;
                        arr_15 [i_2] [i_1] [i_1] [i_1] = 65521;
                    }
                }
            }
        }
    }
    var_12 = (min(var_12, ((((~-2048) ? var_8 : var_10)))));
    var_13 = var_8;
    var_14 = var_0;
    #pragma endscop
}
