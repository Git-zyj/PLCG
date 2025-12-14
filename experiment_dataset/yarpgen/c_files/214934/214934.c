/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 = (min(var_15, (((((max((1843853357 + 0), (max(1048575, 16383))))) || (((var_4 - 16482765747613273642) && 49141)))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_12 [i_1] [i_2] [i_2] = (max(49153, -1));
                        var_16 = (min(var_16, (((1957626221 && (((-26934 ? ((-1957626222 ? 16391 : 9533127153080192327)) : (~4095)))))))));
                        arr_13 [i_0] [i_1] [i_0] [i_3] = ((-((((max(8191, -26934))) ? 16385 : (-1 > var_10)))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        var_17 = 1957626221;
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 0;i_6 += 1)
            {
                {
                    var_18 = (min(var_18, 24377));
                    var_19 = ((!(arr_11 [2] [i_5] [i_5] [i_6 + 1] [i_6 + 1])));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 9;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 7;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 9;i_9 += 1)
                {
                    {
                        arr_30 [1] [i_7] [i_7] [i_9] = 4294901760;
                        var_20 ^= (((3326838206 ? -707 : var_8)));
                    }
                }
            }
        }
    }
    for (int i_10 = 1; i_10 < 1;i_10 += 1)
    {
        var_21 = (min(var_21, (((var_14 ? -1957626226 : 82)))));
        arr_33 [i_10] = (arr_31 [i_10]);
        arr_34 [i_10] [i_10] = -1;
        var_22 = (~4503530907893760);
    }
    var_23 = ((((min((max(-206654234209061442, 325092036)), (((21231 >> (-1 + 8))))))) ? (((~1005443339) ? 38821 : ((2324272776 ? 10 : 16777216)))) : 112));
    #pragma endscop
}
