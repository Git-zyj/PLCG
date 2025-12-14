/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= var_4;
    var_11 *= var_2;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_12 = (arr_1 [i_0]);
        var_13 |= (arr_1 [i_0]);
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 3; i_2 < 13;i_2 += 1) /* same iter space */
        {
            arr_8 [i_1] [i_2] = (arr_6 [i_1 - 2] [1]);
            var_14 = (arr_6 [4] [i_2]);
            var_15 *= (arr_7 [i_2]);
            arr_9 [i_2] = arr_7 [i_2];
        }
        for (int i_3 = 3; i_3 < 13;i_3 += 1) /* same iter space */
        {
            var_16 = (arr_11 [i_1]);
            var_17 = arr_10 [4] [4] [i_3];
        }
        for (int i_4 = 2; i_4 < 15;i_4 += 1)
        {
            var_18 = (arr_14 [i_1] [i_1 - 1] [i_1]);
            var_19 = arr_11 [i_4];
            /* LoopNest 2 */
            for (int i_5 = 3; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 13;i_6 += 1)
                {
                    {
                        var_20 = (arr_22 [i_1] [i_1] [i_1] [11] [i_1] [i_1]);
                        var_21 = (min(var_21, (arr_16 [i_5] [i_5 - 1] [i_5])));
                    }
                }
            }

            /* vectorizable */
            for (int i_7 = 4; i_7 < 14;i_7 += 1)
            {
                var_22 = (max(var_22, (arr_11 [i_1])));
                var_23 = (arr_13 [i_1] [i_1]);
            }
            var_24 *= (arr_22 [i_1] [15] [i_1] [i_4] [i_4] [i_4]);
        }
        var_25 = (arr_5 [i_1] [14]);
    }
    var_26 = var_4;
    #pragma endscop
}
