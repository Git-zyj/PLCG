/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((max(11769, 20908))) ? var_4 : ((((var_6 % 2525711415033147690) != (((max(7457, -8005)))))))));
    var_19 = max((((var_15 ? var_0 : (24679 ^ var_9)))), var_12);

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_20 -= arr_1 [i_0];
        arr_2 [2] |= ((((((((1611264837 ? 20914 : 32510))) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 1])))) ? (((arr_1 [9]) ? ((-94 ? 64013 : 3323075893496786477)) : (arr_1 [i_0]))) : (arr_1 [i_0 + 1])));
        var_21 = (max(var_21, ((((44630 != 32510) != ((max((arr_0 [i_0]), 1))))))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_6 [i_1] = 18446744073709551615;
        arr_7 [i_1] [7] = min((((arr_5 [i_1]) ? (arr_5 [i_1]) : 1497329310)), (arr_3 [i_1]));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_22 *= (arr_5 [i_2]);
        var_23 ^= 18446744073709551615;
        arr_11 [i_2] = (((arr_10 [i_2] [i_2]) % (arr_10 [i_2] [i_2])));

        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            arr_14 [i_2] [i_2] |= (arr_3 [i_3]);
            var_24 = (max(var_24, (arr_9 [i_2] [i_2])));
            arr_15 [i_3] = (((arr_13 [i_3]) ? -6468743863635627304 : 168));
        }
    }
    var_25 = (max(1497329320, var_7));
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            {
                var_26 = (arr_4 [7]);
                var_27 = (min(var_27, (((((((arr_4 [i_4 + 3]) ? (arr_4 [i_4 + 1]) : (arr_4 [i_4 - 1])))) ? (arr_18 [i_5] [i_5]) : (((arr_3 [i_4 + 3]) / (arr_16 [18]))))))));

                /* vectorizable */
                for (int i_6 = 4; i_6 < 16;i_6 += 1)
                {
                    var_28 = (arr_18 [i_6] [i_5]);
                    var_29 = 65535;
                    arr_23 [i_4] [i_4] [3] [6] = (((((arr_20 [i_4 + 2] [i_5] [i_6 + 2]) && 64001)) ? -17897 : ((((arr_18 [i_5] [i_5]) && 20919)))));
                    var_30 |= ((16383 ? 45261 : ((255 ? 33025 : (arr_17 [i_6])))));
                }
                var_31 -= max(0, 51);
            }
        }
    }
    #pragma endscop
}
