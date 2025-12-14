/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_15 += ((var_5 || (arr_2 [8])));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_16 *= var_8;
            /* LoopNest 2 */
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_17 += (arr_1 [i_0 - 1]);
                        arr_11 [i_0] [i_0 + 1] [i_0] = (arr_10 [12] [12] [i_2] [12] [i_2]);
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 4; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        {
                            var_18 = (min(var_18, ((((arr_9 [i_0 - 2] [i_5 - 2]) ? var_14 : var_12)))));
                            var_19 ^= (arr_6 [i_1] [i_0 - 2] [i_0 - 2] [i_5 + 1]);
                        }
                    }
                }
            }
        }
        for (int i_7 = 3; i_7 < 20;i_7 += 1)
        {
            var_20 = (min(var_20, var_3));
            arr_23 [i_0] [i_0] = (32750 <= 32755);
            var_21 = ((((((arr_2 [6]) << (((arr_2 [10]) - 253216108))))) ? (((arr_9 [8] [i_7]) | (arr_7 [i_0] [10]))) : var_5));

            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                arr_27 [i_0] [i_7] [i_8] = (arr_6 [i_0] [i_7] [i_7 + 2] [14]);
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        {
                            var_22 = var_2;
                            var_23 += (!var_3);
                            arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_21 [i_0]);
                        }
                    }
                }
                var_24 = ((var_7 - (arr_3 [i_0])));

                for (int i_11 = 1; i_11 < 22;i_11 += 1)
                {
                    var_25 = (max(var_25, (arr_9 [i_11 - 1] [i_0 + 1])));
                    arr_38 [i_0] = 32745;
                }
            }
        }
    }
    var_26 = (max(var_26, ((((min(32749, 2816983979)) > (17 <= 32734))))));
    var_27 = (max((min(((1 ? 2816983983 : 32730)), (var_0 | 1))), var_0));
    #pragma endscop
}
