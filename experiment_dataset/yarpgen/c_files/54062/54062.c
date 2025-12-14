/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = (!var_9);
        arr_4 [i_0] [i_0] = (+((var_18 ? (((arr_0 [i_0] [i_0]) ? var_7 : var_3)) : var_2)));
        arr_5 [1] = (((((var_10 ? var_12 : 2061333355))) ? (~2081084411) : (arr_2 [i_0] [i_0])));
        arr_6 [i_0] = ((~((var_16 + ((0 ? var_8 : (arr_1 [i_0])))))));
    }

    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        arr_9 [i_1] |= (var_10 % 2081084411);
        var_19 = (-707599515 >= ((((min(var_5, var_16))) ? (0 > 0) : (((1987736949 >= (arr_0 [i_1] [i_1])))))));
    }
    for (int i_2 = 2; i_2 < 17;i_2 += 1)
    {
        var_20 = (((2213882884 != 1) ^ (((-128777396 > ((var_5 ? var_5 : (arr_11 [i_2]))))))));

        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            arr_17 [i_2] [i_3] = (2307230346 == 2213882884);
            var_21 = ((!((min((((var_5 ? var_1 : var_7))), (((arr_15 [i_2] [i_2]) ? 0 : var_12)))))));
            var_22 ^= ((((max((var_15 < var_6), var_10))) ? (((5482897084808635441 == var_4) & ((var_2 ? var_12 : var_11)))) : ((-(max(var_8, -707599515))))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_22 [i_2] = ((0 ? 1576558546299763228 : -100));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 4; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_23 = ((!(arr_16 [i_2 + 2])));
                            var_24 = ((((((-9223372036854775807 - 1) / 163))) ? (arr_24 [i_2] [i_2] [i_2] [i_6]) : var_18));
                            var_25 = (min(var_25, ((((9223372036854775807 || 0) ^ 9223372036854775807)))));
                            var_26 -= ((arr_25 [i_2 + 2] [i_6 - 2]) % (arr_25 [i_2 - 1] [i_6 - 3]));
                        }
                    }
                }
            }
        }
    }
    var_27 ^= var_2;
    #pragma endscop
}
