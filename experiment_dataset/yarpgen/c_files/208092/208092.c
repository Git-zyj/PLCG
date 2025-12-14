/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                var_20 += ((~(~var_4)));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        {
                            arr_15 [i_0] [i_1] [i_2 + 2] [i_3] [i_0] [i_0] [i_3] = 2787;
                            arr_16 [i_1] [i_1] = (arr_10 [7] [1] [5] [7]);
                        }
                    }
                }
            }
            var_21 = (max(var_21, ((~(arr_9 [i_0] [i_0 + 2] [i_0])))));
            var_22 -= var_3;
        }
        arr_17 [i_0] = (arr_0 [0]);
        var_23 = (max(var_23, (arr_8 [2] [0] [2] [2])));
    }
    var_24 = var_16;
    #pragma endscop
}
