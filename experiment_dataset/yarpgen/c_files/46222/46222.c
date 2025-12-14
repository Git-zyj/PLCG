/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_6));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                var_13 = ((-(arr_1 [17] [i_1])));
                var_14 = ((!(((~(((arr_0 [i_0 - 2] [i_1]) | var_4)))))));
                var_15 = (max(var_15, (((~(((!(arr_0 [i_0 - 3] [i_0 + 1])))))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_16 = ((~(-9223372036854775807 - 1)));
        var_17 *= (arr_4 [i_2] [i_2]);
        var_18 = (((-30020 + 2147483647) >> (((((var_6 ? (arr_4 [i_2] [i_2]) : -1)) > (min(1, -2817586456506084895)))))));
    }
    for (int i_3 = 2; i_3 < 22;i_3 += 1) /* same iter space */
    {
        var_19 = (max(var_19, (((1225442727 ? (~var_9) : (!14))))));
        var_20 = ((-(arr_2 [i_3])));
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 22;i_4 += 1) /* same iter space */
    {
        var_21 = (!12512);
        var_22 = (~-1225442727);
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_23 ^= ((((~(3461417429 ^ 1225442736))) | (arr_2 [1])));

        /* vectorizable */
        for (int i_6 = 2; i_6 < 7;i_6 += 1)
        {
            var_24 ^= (arr_13 [i_5] [i_6 + 4]);
            arr_19 [0] [i_6 - 2] = 0;
            var_25 &= (+(((arr_9 [9]) - 1225442726)));
            var_26 = (min(var_26, (~var_0)));
        }
        for (int i_7 = 2; i_7 < 10;i_7 += 1)
        {
            var_27 += (min(4294967295, -12512));
            var_28 = 1225442727;
        }
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            arr_25 [1] [5] = (max(-1225442728, ((-(arr_5 [i_5])))));
            var_29 ^= (((~(arr_9 [i_8]))));
            var_30 = ((var_0 ^ ((~(((!(arr_17 [i_5]))))))));
            arr_26 [i_8] [i_8] = var_9;
            var_31 ^= -80;
        }
        var_32 = (~3461417411);
    }
    #pragma endscop
}
