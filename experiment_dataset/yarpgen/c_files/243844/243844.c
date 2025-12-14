/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= (min((min((((var_5 ? var_9 : var_8))), 16873479002385329352)), var_2));
    var_12 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_13 = (arr_6 [i_1]);
                                arr_18 [i_0] [i_1] [i_2] [i_2] [i_3] [i_1] = var_9;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_7 = 1; i_7 < 1;i_7 += 1)
                            {
                                arr_27 [i_1] [i_6] [i_5] [i_5] [10] [i_1] [i_1] = -var_6;
                                arr_28 [i_0] [i_1] [i_5] [i_1] [i_7] = (arr_11 [i_1] [i_5] [i_6] [i_7]);
                                var_14 *= ((var_7 + 9223372036854775807) << (var_2 - 76));
                                var_15 ^= var_9;
                            }
                            var_16 |= ((((min(var_7, (arr_13 [i_0] [i_1 - 1] [i_0])))) ? (arr_13 [i_0] [i_0] [i_0]) : ((((16873479002385329352 ^ (arr_13 [i_0] [0] [i_0]))) & (arr_12 [i_1 + 3] [i_1] [i_1 + 2] [i_1 + 3] [i_1 + 2] [i_1 - 1])))));
                        }
                    }
                }
                arr_29 [i_1] [i_1 + 2] = (((max(((var_8 ? 0 : 0)), var_2)) != (min(((var_7 / (arr_0 [i_0]))), (((var_9 >= (arr_13 [i_0] [13] [i_1]))))))));
                var_17 ^= (!(((-0 << (var_4 + 4211287485675534011)))));
            }
        }
    }
    #pragma endscop
}
