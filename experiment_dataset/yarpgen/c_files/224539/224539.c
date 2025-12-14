/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((~var_0) ? var_13 : 95))) ? var_4 : ((var_10 % (var_4 * var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    arr_6 [i_2] = (arr_2 [i_0] [i_0]);
                    var_18 = (arr_2 [3] [i_2 + 3]);
                    var_19 += ((var_11 ? -9223372036854775799 : (arr_5 [11] [i_1] [11])));
                }
                /* LoopNest 3 */
                for (int i_3 = 3; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_20 = (i_3 % 2 == zero) ? ((((((var_6 ? (arr_8 [i_0] [i_1]) : (arr_3 [1]))) >> (((arr_9 [i_3] [i_3 - 2] [i_4 + 2]) - 2286899238)))) - ((max((arr_11 [i_0] [i_1] [12] [13] [4] [i_5]), (((arr_11 [i_0] [i_0] [i_3] [i_4] [i_4] [i_3]) > var_11))))))) : ((((((var_6 ? (arr_8 [i_0] [i_1]) : (arr_3 [1]))) >> (((((arr_9 [i_3] [i_3 - 2] [i_4 + 2]) - 2286899238)) - 4053148438)))) - ((max((arr_11 [i_0] [i_1] [12] [13] [4] [i_5]), (((arr_11 [i_0] [i_0] [i_3] [i_4] [i_4] [i_3]) > var_11)))))));
                                arr_15 [i_0] [i_1] [i_3] [i_3] [i_4] [i_4] [i_5] = ((~(~18014398509481983)));
                                arr_16 [i_0] [14] [i_3] [i_5] = (arr_13 [i_0]);
                            }
                        }
                    }
                }
                arr_17 [i_0] = (((-9223372036854775791 || 66060288) ? ((((var_1 ? (arr_0 [i_0] [15]) : (arr_4 [i_0] [i_1]))) + (arr_9 [i_1] [8] [i_1]))) : -var_5));
            }
        }
    }
    var_21 &= var_0;
    var_22 ^= 2191652253;
    #pragma endscop
}
