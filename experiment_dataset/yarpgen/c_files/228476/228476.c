/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_9 < ((min(((-48 ? var_5 : var_0)), var_8))));

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_11 = (max(var_11, (arr_0 [i_0])));
        var_12 = ((min((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1]))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_13 = (max((((var_5 ? 1 : (arr_2 [i_3])))), -8154431910873575325));
                                var_14 |= ((~(((arr_9 [i_4] [i_3] [i_1] [i_1]) ? (arr_6 [6]) : (~9223336852482686976)))));
                                var_15 ^= -8154431910873575325;
                            }
                        }
                    }
                    arr_13 [i_0] [i_1] [i_0] = (min((max(((min(var_7, var_9))), ((45858 ? (arr_10 [i_0] [i_0] [i_1] [i_2] [21] [i_2]) : -8154431910873575325)))), 2137300418417266153));
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_1] [1] [i_5] [24] |= (min((min((arr_1 [i_5 + 2]), (arr_1 [i_0 - 1]))), (((((((arr_14 [i_0] [i_0]) <= (arr_15 [i_5] [i_5] [i_5] [i_5] [i_6])))) == ((7 << (-8154431910873575345 + 8154431910873575350))))))));
                                var_16 = ((12334531 ? 2137300418417266153 : 1));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
