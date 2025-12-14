/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    var_16 ^= (((((arr_2 [i_1 - 1] [i_1 - 1]) ? (arr_2 [i_1 + 1] [i_1 + 1]) : (arr_2 [i_1 - 1] [i_1 - 1]))) << ((((max(var_4, var_11))) - 47))));
                    arr_7 [i_1] = (((((!(((var_2 << (62 - 39))))))) << (-var_13 - 4899)));
                    arr_8 [i_1] [i_1 - 1] [i_1] [i_1 + 1] = (i_1 % 2 == 0) ? (((((((((-1 + 2147483647) << (2048 - 2048))) << (((arr_1 [i_0 + 3]) - 109))))) ? ((var_10 << (((arr_6 [i_2 - 1] [i_2 - 3] [i_1]) + 1957)))) : (((((-9 + 2147483647) << (var_6 - 221)))))))) : (((((((((-1 + 2147483647) << (2048 - 2048))) << (((arr_1 [i_0 + 3]) - 109))))) ? ((var_10 << (((((arr_6 [i_2 - 1] [i_2 - 3] [i_1]) + 1957)) - 11342)))) : (((((-9 + 2147483647) << (var_6 - 221))))))));
                    arr_9 [i_0] [i_1] [i_2] = var_11;
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_17 ^= ((min((arr_10 [i_3]), (arr_10 [i_3]))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 9;i_5 += 1)
            {
                for (int i_6 = 4; i_6 < 10;i_6 += 1)
                {
                    {
                        var_18 = var_10;
                        var_19 *= (min((((var_10 * var_0) ? ((min(120, 255))) : 21568)), ((((!(arr_19 [i_3] [10] [i_3] [i_6]))) ? ((min(var_4, (arr_12 [i_3] [i_3])))) : ((max(var_3, var_0)))))));
                    }
                }
            }
        }

        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            var_20 ^= (((((var_10 ? ((max((arr_6 [i_3] [i_3] [16]), var_8))) : ((var_15 << (var_5 - 18)))))) ? (((-var_0 + 2147483647) << ((((((8334 ? var_4 : var_0)) + 22706)) - 31)))) : ((+(((arr_16 [i_3] [i_3] [i_3]) ? (arr_20 [0] [i_7]) : var_5))))));
            var_21 = ((!(((196 ? 255 : 251)))));
            var_22 += (((-8335 + 2147483647) << (90 - 90)));
        }
    }
    #pragma endscop
}
