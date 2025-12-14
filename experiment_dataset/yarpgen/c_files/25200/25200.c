/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((max(var_1, -var_0)));
    var_18 = -6664;

    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        var_19 = ((~(max((max(var_12, (arr_1 [i_0] [i_0]))), (var_11 & var_0)))));
        var_20 -= (~var_10);
    }
    var_21 = ((~(var_11 > var_10)));
    /* LoopNest 3 */
    for (int i_1 = 3; i_1 < 21;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 20;i_3 += 1)
            {
                {
                    arr_10 [i_3] = (~29936);
                    var_22 = (max(10206173433527997090, 61779));
                    var_23 *= (~var_15);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            {
                                var_24 ^= var_14;
                                var_25 = (max((((~(arr_9 [i_5] [i_5] [i_5] [i_5])))), var_15));
                                var_26 = var_15;
                                var_27 = (~-4957687762086498444);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
