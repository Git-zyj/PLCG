/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_15 = (min(var_15, (((~((8567041442267882459 | (arr_5 [i_1]))))))));
                arr_6 [i_0] = (max(-319901826, -515215876));
            }
        }
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_9 [i_2] = (((((((arr_5 [i_2]) + 9223372036854775807)) >> ((((319901807 >> (var_11 - 1234139750))) - 2499222)))) <= -319901825));
        var_16 ^= ((((!((min(4294967271, 319901826))))) ? (-319901807 == 9807) : (arr_7 [i_2])));
    }
    for (int i_3 = 3; i_3 < 21;i_3 += 1)
    {
        arr_13 [i_3] = (((((((arr_10 [i_3 - 2]) == ((max(var_6, 2147483647))))))) <= var_11));
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 19;i_5 += 1)
            {
                {
                    arr_19 [i_5 - 3] [i_3] [i_3] = ((max((min((arr_12 [i_4 - 2] [i_3 - 3]), 319901790)), ((min(1, -103))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_17 = (~(((10 <= -1073741824) ? (arr_4 [i_3 - 2] [i_4 + 2] [i_7 - 1]) : (min(1, 70368744112128)))));
                                arr_24 [i_3] [i_4] [i_3] [i_4 - 2] [i_7] [i_6] [12] |= (((((~(arr_2 [i_3 - 3] [i_4 - 2])))) ? 1 : ((min((((arr_3 [i_4]) ? 1 : 1)), ((-103 ? var_3 : (arr_2 [1] [i_3]))))))));
                            }
                        }
                    }
                    var_18 *= 1;
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        arr_29 [i_8] [i_8] = (arr_26 [i_8]);
        arr_30 [i_8] [6] = ((((max(8191, ((max(-16467, 255)))))) | ((~((-1 ? -319901824 : 16497))))));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 14;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 13;i_11 += 1)
                {
                    {
                        arr_39 [i_11] = (arr_18 [i_8] [i_9]);
                        var_19 = max(((48 ? 87 : 0)), (((((min(var_10, (arr_33 [i_9])))) <= (((arr_36 [i_9] [i_10] [i_11 + 1]) ? (arr_7 [i_11]) : 18446673704965439488))))));
                    }
                }
            }
        }
    }
    var_20 = ((((max((~319901810), (var_9 | var_6)))) ? var_7 : ((var_8 | (var_6 ^ var_0)))));
    var_21 ^= (max(((((!1180793559) >> var_6))), (((-6014459464135326655 + 9223372036854775807) >> ((((min(-103, var_7))) + 13218))))));
    var_22 = (~var_11);
    #pragma endscop
}
