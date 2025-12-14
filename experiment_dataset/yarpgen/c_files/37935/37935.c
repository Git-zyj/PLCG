/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_0] [i_0] = (arr_5 [i_0] [i_0]);

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_15 = ((max((1392707601 ^ 64), (~-702143788))));

                        /* vectorizable */
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            var_16 = ((-(((arr_4 [i_1] [i_1] [i_2] [i_1]) ? (arr_9 [i_0] [i_4] [i_2] [i_0]) : (arr_11 [i_0] [i_0] [i_2] [i_3] [i_3])))));
                            var_17 ^= (var_3 ? ((~(arr_4 [i_0] [i_1] [i_2] [i_0]))) : 1);
                        }
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            var_18 ^= ((!((((arr_9 [i_0] [i_3] [i_1] [i_0]) | (arr_9 [i_0] [0] [i_2] [0]))))));
                            arr_15 [i_0] [i_0] [3] [10] [i_5] = ((~(max((arr_13 [i_0] [i_2] [6] [i_5]), -639618665))));
                        }
                        var_19 ^= ((((((arr_8 [i_3]) ? var_7 : (arr_1 [i_0] [i_3])))) ? var_13 : (min((arr_2 [i_3] [i_2]), (arr_0 [i_2])))));
                    }
                }
            }
        }
    }
    var_20 = 977533206;
    #pragma endscop
}
