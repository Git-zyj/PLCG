/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (-var_11 - var_11);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_16 -= (arr_0 [i_0] [i_0]);
                arr_7 [i_1] = ((var_0 ? (((0 && (((0 ? 3332373087 : -1974466295)))))) : var_1));
                var_17 |= (((((~(arr_2 [i_0] [i_1 - 3])))) ? ((~(arr_6 [i_0 + 1] [i_1 - 3]))) : (~0)));
            }
        }
    }

    for (int i_2 = 2; i_2 < 12;i_2 += 1)
    {
        arr_11 [i_2] = ((!((!(!-1488281760)))));
        var_18 *= (((arr_10 [i_2 - 1]) ? (~var_2) : (-1974466294 - 112)));
        var_19 ^= ((~((((((-1974466295 + 2147483647) << 1))) ? -3332373087 : (arr_9 [i_2 - 1] [i_2 - 1])))));
    }
    for (int i_3 = 4; i_3 < 24;i_3 += 1)
    {
        arr_14 [i_3] = ((-((min((arr_12 [i_3 - 4]), (arr_12 [i_3 - 3]))))));
        var_20 *= ((~(((((-(arr_12 [i_3])))) ? ((max((arr_12 [i_3]), (arr_12 [i_3 - 2])))) : (arr_12 [i_3 - 1])))));
        arr_15 [i_3] [i_3] = (min(((((var_13 ? var_9 : 1)) == var_2)), var_12));
        var_21 &= 181;
    }
    var_22 = ((((var_11 < (((var_11 ? var_7 : var_14))))) ? (var_1 != var_2) : var_8));
    var_23 += ((((-((var_11 ? var_12 : var_14)))) * (var_13 != var_5)));
    #pragma endscop
}
