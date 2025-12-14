/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_10 = (((((var_3 / 10) / ((3197 ? 18446744073709551605 : var_5)))) * ((min((~var_1), (arr_12 [i_4 - 1] [i_1 - 1] [i_2 + 1]))))));
                                var_11 -= arr_9 [i_2] [i_2];
                            }
                        }
                    }
                }
                arr_15 [i_0] = ((~(max((arr_4 [i_1 + 1] [i_1 + 2]), (~4824888290825148690)))));
                arr_16 [i_0] = (max(((((~-3195) * (((15323 <= (arr_11 [i_1] [i_1] [i_1] [3] [1] [11]))))))), (((((var_6 / (arr_3 [i_0])))) ? (min(1535898290, 9223372036854775807)) : ((((arr_3 [i_0]) + -3200)))))));
            }
        }
    }
    var_12 = (min(var_12, (((-(min(var_4, var_8)))))));
    #pragma endscop
}
