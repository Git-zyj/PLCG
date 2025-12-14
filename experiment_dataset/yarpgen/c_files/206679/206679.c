/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= 127;
    var_13 = var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_14 = (~(arr_1 [i_0]));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_15 = var_1;

            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 12;i_4 += 1)
                    {
                        {
                            var_16 = (max(var_16, ((((-2147483647 - 1) == 2147483647)))));
                            arr_11 [3] [3] [i_2] [i_3] = (((((arr_6 [3] [2] [i_2] [i_3]) / var_10)) ^ (arr_1 [i_3 - 1])));
                            arr_12 [i_2] [i_4] [12] = (((-8527664898006040009 + 9223372036854775807) >> (-5 + 29)));
                            var_17 = (10363 & var_9);
                            var_18 = 16384;
                        }
                    }
                }
                var_19 = (max(var_19, (arr_2 [i_0] [i_1] [i_0])));
                var_20 = var_4;
            }
        }
    }
    #pragma endscop
}
