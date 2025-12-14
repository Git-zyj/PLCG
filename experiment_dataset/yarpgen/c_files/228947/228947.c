/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_20 += (arr_1 [i_0 + 1]);
        var_21 ^= ((-(arr_1 [i_0 + 1])));

        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            var_22 ^= (!var_1);

            for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
            {
                var_23 = (arr_5 [i_0]);

                for (int i_3 = 2; i_3 < 14;i_3 += 1)
                {
                    arr_10 [i_0] [i_0 - 3] [i_1] [i_1] [i_0] [i_3 - 2] = (arr_7 [i_2] [i_0 - 1]);
                    var_24 += (((arr_9 [i_0 - 2] [i_1] [i_3 - 2] [i_1] [i_3 - 1]) << (((arr_9 [3] [i_1] [i_3 + 2] [i_3 - 2] [i_3 + 2]) - 65078))));
                    var_25 = var_6;
                    var_26 = var_4;
                }
                arr_11 [2] = ((!(arr_6 [i_0 - 3] [i_1 + 1] [i_1 - 1])));
            }
            for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        {
                            arr_20 [i_5] [i_5 + 2] [i_4] [i_5] [14] [i_5] = ((!(arr_14 [i_4] [i_5 + 1])));
                            arr_21 [i_5] = (arr_14 [i_6 + 1] [i_5 - 1]);
                        }
                    }
                }
                arr_22 [i_0 - 3] [i_4] |= -var_9;
            }
            arr_23 [1] [i_1 + 1] = (((arr_0 [i_0 + 2] [i_1 - 3]) | (arr_7 [i_0 + 1] [i_1 - 3])));
            var_27 = (max(var_27, (arr_3 [i_0 - 2] [i_1 - 3])));
        }
        var_28 = (min(var_28, var_10));
    }
    var_29 = var_2;
    #pragma endscop
}
