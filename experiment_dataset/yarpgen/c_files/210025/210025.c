/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_14 + var_11);

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_17 = ((((((arr_5 [i_2] [i_1] [i_2] [i_2 - 2]) && (arr_5 [i_0] [i_1] [i_1] [i_2 + 4])))) <= (8309446923442237672 > 27838)));
                    arr_8 [i_2] [i_1] [i_0] = ((((min((arr_6 [i_0] [i_1] [i_2]), 2173452053453569697))) ? var_5 : ((var_15 ? (arr_1 [i_2] [i_2 + 3]) : var_4))));
                }
            }
        }
        arr_9 [i_0] = -119;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_18 = ((((((-2 + 2147483647) << (((-4718 + 4746) - 28))))) ? (arr_11 [i_3] [i_3]) : (var_11 + var_11)));

        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            var_19 = (arr_10 [i_3]);

            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                var_20 = var_11;
                arr_18 [i_5] [i_3] [i_5] &= arr_12 [i_5] [i_5] [6];
                arr_19 [i_3] = -1;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        {
                            arr_25 [i_3] [i_3] [i_5] [i_3] = (arr_24 [i_3] [i_4] [i_5] [i_6] [i_7] [i_3] [i_3]);
                            var_21 = (((var_9 / var_5) <= (arr_10 [i_3])));
                            var_22 += (((arr_21 [15] [i_6] [i_5]) < (arr_21 [i_4] [i_6] [i_7])));
                            var_23 = 27848;
                            var_24 = arr_10 [i_3];
                        }
                    }
                }
                var_25 = ((-119 ? (arr_20 [i_3] [i_3] [i_5] [i_3] [i_3] [i_4]) : (arr_20 [i_3] [12] [i_5] [i_5] [i_5] [i_5])));
            }
        }
    }
    #pragma endscop
}
