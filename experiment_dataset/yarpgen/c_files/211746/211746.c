/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= var_4;
    var_11 &= ((-959002434 <= ((var_4 ? (~63) : ((max(var_2, 184)))))));
    var_12 = var_5;
    var_13 = (min(var_3, (((var_3 >> (-1477939130 + 1477939133))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = ((-25041 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])));
        var_14 = (((((var_2 ? (arr_0 [i_0] [i_0]) : 14987))) ? -var_0 : 0));
        var_15 = var_6;
        var_16 ^= 227;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_5 [i_1] = arr_3 [i_1];
        arr_6 [i_1] = (((arr_4 [i_1]) / 2112706776));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 8;i_4 += 1)
            {
                {
                    arr_14 [i_3] [i_3] [i_3] [i_3] = (arr_9 [i_4 - 3] [i_3]);
                    arr_15 [i_3] [i_3] [i_3] = (min((--54), ((((max(131071, 959002434))) ? (((arr_10 [i_3] [i_3]) ? var_2 : var_2)) : -80))));
                }
            }
        }
        arr_16 [i_2] = (((((arr_9 [i_2] [i_2]) + (arr_9 [i_2] [i_2]))) - (-14989 + var_7)));
        var_17 -= ((-1 ? (((arr_9 [i_2] [i_2]) ^ var_3)) : (((-(arr_1 [i_2] [i_2]))))));
        var_18 = (((((7340998809690962859 ? -var_3 : ((-959002435 ? var_1 : 124))))) ? -959002426 : (253 > -697493095)));
        var_19 = ((var_8 ? ((~(-9223372036854775807 - 1))) : (((var_3 % (arr_8 [3]))))));
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        var_20 = (arr_17 [i_5]);
        arr_19 [i_5] [i_5] = ((~(((124 || (arr_18 [i_5]))))));
    }
    #pragma endscop
}
