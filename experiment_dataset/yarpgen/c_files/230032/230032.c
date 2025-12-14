/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_19 &= (((((~(arr_1 [i_0 - 1] [i_0 - 1])))) ? (arr_0 [i_0] [4]) : (6 + -32763)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] [i_0] = (((((~(-2147483647 - 1)))) ? ((((arr_3 [i_0]) | (arr_7 [i_0 + 1])))) : (arr_6 [i_0 - 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                var_20 = (~var_1);
                                var_21 = (max(var_21, ((((((-1463139377 | -123) + 2147483647)) >> ((((1704868949 ? -7300194047435431593 : 177732773)) + 7300194047435431597)))))));
                            }
                        }
                    }
                    arr_17 [i_1] = (var_0 ? var_12 : (((!(arr_13 [i_2 + 1] [i_1] [22] [i_0] [i_0])))));
                }
            }
        }
        var_22 = (((arr_14 [i_0 - 1] [0] [9] [i_0 - 1]) ? (!250) : (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])));
    }
    var_23 = (max((~var_6), (max((~var_15), var_8))));
    #pragma endscop
}
