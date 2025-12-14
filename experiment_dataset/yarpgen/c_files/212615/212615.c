/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((((-(113 / var_14)))), 18446744073709551615));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0 - 1] [i_0 - 1] [i_1] = (((var_0 + 2147483647) >> (((max(-196167387, (arr_0 [i_0 - 1]))) + 196167413))));
                arr_5 [i_0] = var_18;

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    arr_9 [i_2] [i_1] [i_0] [i_0] = arr_3 [i_2] [i_1] [i_0];
                    var_21 = (((~(arr_0 [i_0 - 3]))));
                    arr_10 [i_0] [i_0] = ((-113 == (((arr_6 [7] [i_1] [7]) >> (1 <= 0)))));
                    arr_11 [18] [i_1] [i_2] = (min((!11249), 0));
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_22 = (arr_6 [i_1] [i_3] [i_4]);
                            arr_17 [i_0 - 2] [i_1] [i_0 + 1] [i_3] [i_0 - 1] = var_13;
                            var_23 ^= ((~((2004087273 * (!var_17)))));
                            var_24 = (arr_1 [i_0 - 1]);
                        }
                    }
                }
            }
        }
    }
    var_25 = (((((-((var_17 >> (var_7 + 9544)))))) ? ((-(var_10 + -5535293509075033965))) : ((min(var_0, var_10)))));
    var_26 = ((~(max(var_3, (var_3 + var_7)))));
    #pragma endscop
}
