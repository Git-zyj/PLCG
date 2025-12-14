/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    var_11 += (max((((~var_4) ? var_2 : ((var_6 ? 1 : var_5)))), ((var_8 >> (((var_0 | var_8) - 2120344162))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_12 = var_0;
            var_13 = 1;

            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                var_14 = (max(((124 ^ (~2147483647))), (~var_4)));
                var_15 += (arr_6 [i_0] [i_2 - 1] [i_2]);
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_16 = (arr_1 [i_1]);
                var_17 = ((2147483625 ? (((var_9 <= (arr_2 [5] [i_0])))) : var_8));
            }
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                var_18 = (((~(arr_10 [i_0] [1] [i_0]))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        {
                            var_19 = ((~((((((~(arr_3 [i_0])))) && (arr_15 [i_1] [i_1]))))));
                            var_20 ^= -2147483625;
                        }
                    }
                }
                var_21 = (arr_12 [i_0] [i_1] [i_1] [i_4] [i_4] [i_4]);
                var_22 = ((var_6 >> ((((~(arr_4 [i_0] [i_1]))) + 22022))));
                var_23 = (max(var_2, (max(var_2, var_5))));
            }
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                var_24 = ((((max((max(var_6, (arr_1 [i_1]))), (2147483627 / 19)))) ? ((-(var_3 * var_8))) : var_5));
                var_25 &= var_1;
            }
            var_26 = (max((2147483629 - var_5), (+-2147483625)));
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_27 = (((arr_15 [i_0] [i_8]) >= ((max((arr_17 [i_0] [i_0] [i_0] [i_0]), var_8)))));
            var_28 = (max(var_28, (max((arr_5 [i_8] [i_0]), ((((var_3 + var_2) != (arr_15 [i_0] [10]))))))));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    {
                        var_29 = ((~((-2147483619 * (7023 <= 5)))));
                        var_30 = var_0;
                    }
                }
            }
            var_31 = (~var_7);
        }
        var_32 = (max(var_32, (max(-1, ((122 ? 2147483647 : (max((arr_10 [i_0] [i_0] [i_0]), var_3))))))));
        var_33 = ((((((arr_3 [i_0]) ? (arr_17 [i_0] [i_0] [20] [i_0]) : (arr_20 [4] [i_0])))) + (var_7 & -8666944752359009009)));
    }
    #pragma endscop
}
