/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_1] = (((arr_2 [i_1]) ^ (max(2514555029, (-2147483647 - 1)))));
                var_18 = (max(var_18, (((var_9 ^ ((min(67, 176))))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {

                            for (int i_4 = 2; i_4 < 17;i_4 += 1)
                            {
                                var_19 = (arr_9 [i_0] [i_4 - 1] [2] [i_3 + 2]);
                                arr_13 [i_0] [0] [i_2] [i_2] [i_1] [i_0] &= (arr_8 [i_0] [i_1] [i_3 + 4] [i_4 - 2]);
                                arr_14 [i_4] [i_1] [i_2] [i_1] [i_0] = (+((min((arr_10 [i_1] [i_2 - 1] [i_3] [i_4 - 1] [i_4]), (arr_10 [i_1] [i_2 - 1] [i_2] [i_4 - 1] [i_1])))));
                                arr_15 [i_1] [1] = var_14;
                            }
                            var_20 = (((~2147483647) ? (((arr_6 [i_2 - 1] [i_1]) ? var_3 : (arr_6 [i_2 - 1] [i_1]))) : (arr_4 [i_0])));
                            arr_16 [i_3] [i_2] [i_1] [i_1] [i_0] = var_8;
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 2; i_5 < 19;i_5 += 1)
    {

        /* vectorizable */
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            arr_23 [i_6] [i_5 + 1] = (arr_21 [i_5] [i_6]);
            arr_24 [5] [i_5 + 1] = (arr_20 [i_5 - 1]);
        }
        var_21 = ((((((var_11 ? 3422140185 : (arr_18 [i_5 - 2])))) || -var_11)));
    }
    #pragma endscop
}
