/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~var_14);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_20 = ((-(arr_5 [i_3] [i_2] [i_0])));
                                var_21 = (min(var_21, ((((arr_5 [i_2] [21] [i_0]) ? (arr_3 [i_0]) : (arr_9 [i_0] [i_0] [i_0] [i_0]))))));
                                var_22 = (arr_1 [i_1]);
                                var_23 = ((~(arr_0 [i_0] [i_1])));
                                var_24 |= (arr_2 [i_3]);
                            }
                        }
                    }
                    var_25 = 0;
                    var_26 = (min(var_26, -182));
                }
            }
        }
        var_27 *= ((((168 ? (arr_10 [i_0] [i_0]) : 0)) & ((-(arr_3 [i_0])))));
    }
    #pragma endscop
}
