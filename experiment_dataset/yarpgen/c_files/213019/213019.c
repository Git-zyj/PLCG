/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = var_0;
        var_18 *= (arr_1 [i_0]);
        var_19 += (-171 % -var_8);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_20 *= (~1);
            var_21 = (max(var_21, (arr_1 [i_0])));
            /* LoopNest 3 */
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 4; i_4 < 12;i_4 += 1)
                    {
                        {
                            arr_13 [i_4] [i_1] = arr_11 [i_1] [i_1] [i_1];
                            var_22 -= (987056154 < (arr_12 [i_4] [i_4] [i_4 - 2] [i_4 - 2] [i_4 - 3] [i_4 - 2]));
                        }
                    }
                }
            }
        }
        arr_14 [0] [i_0] = var_13;
    }
    var_23 = var_4;
    #pragma endscop
}
