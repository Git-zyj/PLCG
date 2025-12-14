/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += -var_13;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_16 = (min(var_16, ((((((((var_11 ? (arr_0 [13] [i_0]) : (arr_2 [i_0]))) / (((arr_2 [i_0]) ? (arr_3 [i_0]) : (arr_0 [i_0] [6])))))) ? -31392 : ((((arr_1 [i_0]) <= ((max(321255140, 321255140)))))))))));
        var_17 = (min(var_17, 321255145));
        arr_4 [i_0] |= (((~321255140) ? 18338635350087059738 : 321255140));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 17;i_3 += 1)
            {
                {
                    var_18 += (arr_6 [i_3 + 1] [i_3 + 1]);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            {
                                arr_16 [i_5] [i_3 - 1] [i_5] [i_5] [i_2 + 1] [i_1] = var_0;
                                var_19 = (((arr_8 [i_4]) & (arr_13 [i_1] [i_2] [i_3] [15])));
                            }
                        }
                    }
                }
            }
        }
        var_20 ^= ((var_12 ? (((((min(321255158, -6))) && (((~(arr_9 [i_1]))))))) : (!12983805495827141953)));
    }
    var_21 = (max((min(var_9, ((var_10 ? -321255137 : 0)))), 2147483647));
    #pragma endscop
}
