/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_10 |= (((arr_0 [i_1]) ? (min(var_0, ((~(arr_4 [i_0 + 3] [i_1] [i_0]))))) : (-3 == 31776)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_11 = ((((max(-3, 7635552325686440205))) ? ((min((arr_8 [i_3] [i_1] [i_3] [i_3]), (((arr_6 [i_3]) ? (arr_0 [i_0]) : (arr_1 [i_0 - 1] [i_0 - 1])))))) : ((~(max((arr_3 [i_0 + 1] [i_1]), -31))))));
                            arr_11 [i_1] = (((((!(arr_0 [i_2])) && 17462311365090905967))));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 19;i_4 += 1)
                            {
                                var_12 = (!((((arr_13 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) ? (arr_5 [i_1] [i_1] [i_1]) : (arr_1 [i_2] [i_1])))));
                                var_13 = (max(var_13, var_3));
                            }
                            arr_14 [i_0] [i_1] [i_2] [i_2] [i_1] [i_3] = (((arr_1 [17] [i_2]) ? ((max(var_1, 0))) : (min((arr_5 [i_0 + 1] [i_0 + 3] [i_0 + 3]), (arr_13 [i_0 + 3] [i_3] [i_2] [i_3] [i_2] [i_0 + 2] [i_0 + 2])))));
                        }
                    }
                }
            }
        }
    }
    var_14 |= var_1;
    var_15 += (((~var_8) ? var_0 : var_5));
    #pragma endscop
}
