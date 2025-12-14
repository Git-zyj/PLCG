/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_8 [16] [1] [15] = ((56550 ? 236 : 8960));
                    var_12 = (((((min(8986, 8986)))) ^ (arr_4 [i_2] [12])));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    arr_12 [i_0] [i_1] [i_1] |= (((1 != var_11) % 11));
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_13 ^= (((arr_18 [i_0] [i_0] [i_1] [i_3] [i_0] [5]) ? var_7 : (arr_3 [i_4])));
                                var_14 = (arr_1 [i_4 + 2]);
                                var_15 = ((0 ? 8973 : 1));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 18;i_7 += 1)
                    {
                        {
                            var_16 = ((((((arr_23 [i_7] [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 + 1]) ? (arr_23 [i_7] [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7 + 1] [i_7 - 1]) : 1))) ? (max(var_11, (arr_23 [i_7] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 - 1]))) : (min((arr_23 [i_7] [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_7 - 1]), (arr_23 [i_7] [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7 + 1] [i_7])))));

                            for (int i_8 = 0; i_8 < 19;i_8 += 1)
                            {
                                var_17 ^= ((min(-123, (arr_15 [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7 + 1] [1] [i_7 + 1]))));
                                var_18 += 108;
                                var_19 = ((arr_10 [i_7 - 1]) ? (~-94) : ((max((arr_10 [i_7 + 1]), (arr_10 [i_7 - 1])))));
                            }
                            for (int i_9 = 0; i_9 < 1;i_9 += 1)
                            {
                                arr_28 [i_0] [i_0] [i_0] [0] [i_0] = (((((2861326089 * (!var_8)))) > (((122 * var_1) ? (arr_22 [i_9] [i_9] [i_9] [i_7 - 1]) : (arr_1 [i_6])))));
                                var_20 -= min((((((var_8 ? -8718165713196064922 : var_8)) < (!var_2)))), 0);
                            }
                        }
                    }
                }
                var_21 ^= ((((((((-83 ? var_5 : (arr_0 [i_0] [7])))) ? (arr_16 [i_0] [i_0] [i_0]) : ((1 ? var_9 : var_4))))) != (max(((min(49, 9006))), 3778071506150670958))));
            }
        }
    }

    for (int i_10 = 0; i_10 < 20;i_10 += 1)
    {
        var_22 = ((-((var_2 ? (arr_29 [i_10] [i_10]) : 94))));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 20;i_12 += 1)
            {
                {
                    var_23 = (min(76, 90));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 20;i_14 += 1)
                        {
                            {
                                var_24 = ((min(-123, 153)));
                                var_25 = ((((~(arr_29 [i_10] [i_11])))) ? ((~(arr_40 [i_10] [i_11] [1] [i_13] [i_14]))) : ((~((1 ? -1480729324 : 1)))));
                            }
                        }
                    }
                }
            }
        }
        arr_42 [i_10] [i_10] = 82;
        var_26 += ((-204 != ((1 ? 17353558136195515777 : 0))));
    }
    #pragma endscop
}
