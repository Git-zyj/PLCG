/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_12 = (((18446744073709551615 & 224) | (((((var_2 ? 4294967295 : -225))) ? 8 : (0 && 21)))));
        var_13 ^= 6;

        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        {
                            var_14 = ((((((min(-225, 32746))) + 2147483647)) << (((max((arr_4 [i_0 - 1]), var_7)) - 1044005698))));
                            var_15 = (-var_1 ^ 4294967293);
                            var_16 = (((((-(arr_4 [i_0 - 1])))) ? (((arr_4 [i_0 - 1]) ? var_4 : 56)) : ((((arr_4 [i_0 - 1]) - var_1)))));
                            var_17 = ((((min((arr_11 [i_0 - 1] [i_1 + 1] [i_0]), (arr_5 [i_3] [i_2 + 1])))) ? (((arr_11 [i_0] [i_1] [i_0]) ? ((~(arr_13 [i_0] [5] [i_0] [i_0] [i_0]))) : (arr_9 [i_2 + 1] [i_2 + 1] [i_0]))) : (((~48) & (arr_8 [i_2] [i_2 - 2] [i_2] [i_2])))));
                        }
                    }
                }
            }
            var_18 = (((((18446744073709551610 & (arr_1 [i_0 - 1])))) ? (((arr_1 [i_0 - 1]) ? (arr_1 [i_0 - 1]) : 9)) : (((arr_0 [i_0]) ? 32756 : (-32767 - 1)))));
            var_19 ^= (((arr_7 [i_0] [i_0] [i_1] [i_1]) * ((((var_10 ? var_7 : (arr_2 [10]))) ^ (min(1, (arr_2 [i_0])))))));
            var_20 -= arr_12 [i_1];
            var_21 = var_11;
        }
        var_22 = ((~((min(32767, -205)))));
    }
    var_23 |= var_0;
    var_24 = (min((max(0, 65535)), (((-(~var_4))))));
    #pragma endscop
}
