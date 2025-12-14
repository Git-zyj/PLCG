/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_0] = ((((((arr_9 [i_0 - 3] [i_1] [8] [9]) ? var_10 : var_8))) ? ((-(((arr_9 [1] [9] [1] [i_1]) * 246)))) : ((((arr_9 [i_0 - 2] [i_1] [i_2] [i_3]) || (((-9223372036854775798 ? -9223372036854775787 : var_0))))))));
                        var_14 = (min(var_14, ((((~-9157361639835049346) & ((((((arr_11 [i_0 - 2]) + 2147483647)) >> (((arr_11 [i_0 - 1]) + 11069))))))))));
                        arr_13 [16] [i_0] [i_3] = (arr_1 [i_2]);
                        var_15 = (max(var_15, 9223372036854775760));
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        arr_18 [i_0] [5] [i_1] [i_0] = (~var_3);
                        arr_19 [i_1] [i_1] [i_1] [i_4] |= ((7 ? (min(254, 18446744073709551611)) : (((max(11, (arr_8 [i_1])))))));
                    }
                    var_16 = ((~(min((arr_2 [i_0 + 1] [i_1]), (arr_16 [i_1] [i_0 - 1] [i_0 + 1] [i_0 - 1])))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        var_17 = 8646911284551352320;
        var_18 = ((!(arr_21 [i_5])));
        var_19 *= -var_7;
        var_20 ^= ((~(arr_8 [i_5])));
        var_21 = (max(var_21, (arr_0 [i_5])));
    }
    #pragma endscop
}
