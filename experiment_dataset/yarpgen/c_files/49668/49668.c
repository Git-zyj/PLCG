/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    var_16 = var_5;
    var_17 = (max((((((var_9 ? var_0 : 73))) ? (3049623768430079355 - 39902) : (max(var_13, var_4)))), ((max(196, var_12)))));

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_18 = ((~((((((arr_3 [4]) ? -1111781160 : (arr_1 [14])))) ? var_0 : ((((arr_0 [i_0]) && var_13)))))));
        var_19 -= ((~(max((arr_0 [i_0 - 1]), (arr_3 [i_0])))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
        {
            var_20 = (((arr_2 [i_1] [8]) == 9));
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_21 = (min(var_21, -1));
                        var_22 &= var_7;
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 23;i_7 += 1)
                    {
                        {
                            var_23 = (min(var_23, (((~(min((~114), (((arr_7 [i_6] [12] [12]) >> (((arr_12 [i_6] [i_6] [23]) + 5027370650325373631)))))))))));
                            var_24 = (!var_10);
                        }
                    }
                }
            }

            /* vectorizable */
            for (int i_8 = 1; i_8 < 22;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 24;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        {
                            var_25 ^= ((((((((arr_11 [i_9] [i_10]) + 2147483647)) >> (((arr_16 [1] [i_8] [i_4] [1]) - 6429907574086102948))))) ? (~-2106824069) : ((var_11 | (arr_15 [1] [i_9 + 1] [i_8 + 2])))));
                            var_26 = ((~(((var_13 == (arr_2 [i_8] [i_8]))))));
                            var_27 = (((arr_12 [i_8 - 1] [i_8 + 2] [i_8 - 1]) + 28));
                            var_28 = ((arr_20 [i_9] [i_9] [i_9 - 1] [i_4] [i_9] [i_9 - 1]) && (arr_20 [i_9] [i_9 - 1] [i_9 + 1] [i_4] [i_9] [i_9 + 1]));
                            var_29 = -1111781160;
                        }
                    }
                }
                var_30 |= ((((var_12 * (arr_21 [i_0] [2]))) - -61));
            }
        }
        for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
        {
            var_31 = 4294967287;
            var_32 = (((((((max(1111781177, var_5))) ? (arr_9 [i_0] [i_11]) : (~var_5)))) == ((-(arr_28 [i_0] [i_0 + 2] [15] [i_0] [i_0 + 2] [i_0 - 3] [i_0 - 1])))));
            var_33 &= max((((((var_5 ? (arr_24 [20] [16] [i_0 + 3] [0]) : (arr_27 [i_11] [3] [i_0])))) ? (((~(arr_4 [17])))) : (max((arr_12 [i_0] [i_0] [i_0]), var_0)))), 9223372036854775807);
            var_34 ^= (arr_22 [i_0 - 1] [i_0] [11]);
        }
    }
    var_35 = var_4;
    #pragma endscop
}
