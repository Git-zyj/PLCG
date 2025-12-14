/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 1;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (((arr_2 [i_0]) != (((max((arr_4 [i_0]), 1))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_21 += ((1 ? 1 : 1));
                            var_22 += ((1 ? 1 : (-1671162358947823142 != 1)));
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 3; i_4 < 21;i_4 += 1)
                {
                    var_23 = arr_6 [i_0] [i_1] [i_4] [i_0];
                    arr_14 [i_1] [i_0] [12] [i_1] = ((~(((9223372036854775807 != (arr_9 [i_0] [i_0] [i_1] [1] [i_1] [i_4]))))));

                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_24 = 2181;
                        arr_17 [i_0 + 1] [i_0] [i_4] [i_0] = ((arr_0 [i_0] [i_4 - 2]) != ((~(arr_0 [i_0 - 1] [i_4]))));
                        var_25 = (~1);
                    }
                }
                var_26 &= 52;
            }
        }
    }
    var_27 = (((65535 ? var_14 : 63362)));
    var_28 = ((1 ? 0 : -52));
    #pragma endscop
}
