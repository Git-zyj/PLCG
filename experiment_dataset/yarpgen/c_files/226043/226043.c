/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((min((max(var_11, 16777215)), ((255 ? 1 : 1401632256)))), var_0));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = ((1 ? 2086504317 : (var_5 + var_1)));
        var_13 = (((((var_10 ? 4294967295 : 11217774262361934720))) ? (max(2147483647, 47)) : (var_3 || 121375459)));
        arr_3 [i_0] = ((932418599 >> ((((3490781262 ? var_11 : var_8)) - 24509))));
        var_14 = (min((((arr_1 [i_0]) ? (arr_1 [i_0]) : var_2)), var_5));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_6 [i_1] = (max(13389502549960856414, -121375436));
        var_15 = ((~(max((arr_4 [i_1] [i_1]), 6144))));
        var_16 = (min(var_16, (((var_3 ? (((var_10 ? 831250198 : var_1))) : (max(var_4, (((arr_4 [i_1] [0]) & -84)))))))));
        var_17 = (((((var_11 ? var_8 : (max((-9223372036854775807 - 1), 6730115113687103959))))) ? (((-((max(114, 717)))))) : 4294967294));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        arr_11 [i_2] = (arr_1 [i_2]);

        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            arr_14 [i_2] [i_2] |= (arr_1 [14]);
            var_18 &= (((52 ? 3362548722 : -1540553786)));
        }
        /* LoopNest 3 */
        for (int i_4 = 3; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    {
                        arr_23 [i_4] = ((-213650433110979705 ? var_1 : var_11));
                        var_19 *= (arr_13 [i_2 - 1]);
                        var_20 ^= (var_0 & var_6);
                        var_21 = (((~(arr_22 [10] [i_4] [i_4] [i_4] [i_4]))));
                    }
                }
            }
        }
        var_22 = (((arr_5 [i_2] [i_2 + 1]) ? 176 : ((-(-127 - 1)))));
    }
    #pragma endscop
}
