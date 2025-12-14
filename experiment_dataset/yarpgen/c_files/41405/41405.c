/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_10 [i_0] [i_3] [i_2] [i_3] [i_0] = (((arr_3 [12] [12]) - (((min((arr_5 [i_0] [1] [i_0] [3]), var_13)) - (((max((arr_1 [i_0]), var_11))))))));
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] [5] = var_4;
                                var_15 *= (arr_5 [i_0] [i_2] [i_0] [i_4]);
                            }
                        }
                    }
                    arr_12 [18] [i_0] [i_0] = (min((((arr_2 [5] [i_1] [i_2]) >> (((arr_6 [i_2] [i_2] [18] [i_2] [i_0]) + 42)))), (max((((((arr_6 [i_2] [i_2] [i_0] [i_2] [i_0]) + 2147483647)) >> (((arr_8 [i_0] [i_1] [i_0] [i_0] [15] [i_0]) - 193)))), (var_4 ^ var_8)))));
                }
            }
        }
    }
    #pragma endscop
}
