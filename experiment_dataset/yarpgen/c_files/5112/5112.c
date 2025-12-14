/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_2 [i_0] |= (!var_0);

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_13 -= (arr_1 [i_0]);
            arr_5 [i_1] [i_0 + 1] |= 0;
        }
        arr_6 [i_0] [i_0] = (+-2071920675238225003);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 10;i_4 += 1)
                {
                    {
                        var_14 |= (((var_2 ? 18446744073709551615 : (arr_3 [i_2] [i_4] [i_4 - 1]))));
                        arr_17 [i_0] = 18446744073709551610;
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 2; i_5 < 14;i_5 += 1)
    {
        arr_20 [i_5] [i_5] |= 5;
        var_15 = var_7;
        var_16 = var_3;
        var_17 = (max(var_17, (arr_19 [i_5] [i_5])));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        arr_23 [i_6] |= ((1 ? 0 : -2328756779077718348));
        var_18 = (min(var_18, ((((arr_21 [i_6]) || 18446744073709551615)))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        var_19 = (18446744073709551596 > var_7);
        var_20 &= arr_25 [i_7] [i_7];
    }
    var_21 = ((((var_1 ? (16 / 1850629059162451681) : (~-1850629059162451681))) == ((((-1850629059162451681 + 9223372036854775807) << (1850629059162451681 - 1850629059162451681))))));
    var_22 = (max(var_22, (((62823 << (var_9 - 45))))));
    var_23 = 15762598695796736;
    #pragma endscop
}
