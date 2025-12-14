/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [1] [i_1] [i_0] = ((~(((~(arr_3 [i_0]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_14 -= ((-(arr_0 [i_3])));

                            for (int i_4 = 1; i_4 < 21;i_4 += 1)
                            {
                                var_15 = ((-((((arr_10 [i_0] [i_1] [i_2] [i_3] [i_4 - 1] [i_0]) <= (arr_1 [17]))))));
                                var_16 |= (((((((-(arr_0 [i_4])))) - ((43002 - (arr_10 [1] [i_1] [i_1] [i_2] [20] [i_1]))))) < (~1270281070)));
                                var_17 = (~1802684401);
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = (((((~(1270281070 - 83)))) >= (((~(arr_2 [i_0]))))));
                                arr_14 [i_0] [9] [i_0] [9] [3] = (((44367 > (((-83 + 2147483647) << (84 - 84))))));
                            }
                        }
                    }
                }
                var_18 = 18;
                var_19 = (10863969470179289133 < 21169);
            }
        }
    }
    var_20 -= (var_11 <= 242);
    var_21 = (42 * var_11);
    #pragma endscop
}
