/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = min(((((4 & var_9) << (var_1 - 4136902422146420101)))), var_7);
    var_13 = var_5;
    var_14 *= (!var_9);

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        arr_3 [i_0] = ((243 ? 19 : (min(((68 ? 11695563672735245570 : 19)), (arr_1 [i_0])))));
        arr_4 [2] [i_0] = (((((((253 ? 248 : 236))) ? 7 : (arr_1 [i_0]))) + ((((((arr_0 [i_0]) + (arr_0 [i_0])))) ? (((arr_1 [i_0]) ? var_6 : (arr_1 [i_0]))) : ((254 + (arr_1 [i_0])))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    var_15 |= (arr_10 [i_3]);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_16 *= (arr_14 [i_1] [i_5 - 1] [i_3] [i_1] [i_4]);
                                var_17 = (arr_13 [13] [i_1]);
                                var_18 *= var_3;
                            }
                        }
                    }
                    arr_18 [16] [i_2] [i_1] = arr_10 [i_1];
                }
            }
        }
        var_19 = (~254);
        var_20 = ((~(arr_12 [i_1])));
    }
    #pragma endscop
}
