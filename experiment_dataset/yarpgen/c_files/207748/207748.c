/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_17 ^= (((max((arr_5 [14] [i_1] [i_0] [i_0]), var_0)) >> (((max((arr_3 [i_1]), ((11702375125416825419 - (arr_4 [i_0] [i_1] [i_1]))))) - 4693389747009095091))));
                    var_18 = (max(var_18, (((!(((var_7 - ((var_14 ? var_12 : 32748))))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_19 ^= max(-123, -126);
                                var_20 -= (((arr_7 [i_4 + 2] [i_4 + 2] [i_4 - 2] [i_4 + 1] [i_4 + 1] [i_4 + 1]) | (((var_11 + 2147483647) >> (((arr_7 [i_4 + 2] [i_4 - 1] [i_4 - 1] [i_4 + 2] [i_4 + 2] [i_4 + 2]) - 115))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 ^= (var_13 ^ var_0);
    #pragma endscop
}
