/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 29;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_13 ^= (((15897663 ^ 12330) << (((((((var_10 != (arr_8 [i_0] [i_1] [i_2] [i_3]))))) < -9223372036854775807)))));
                                var_14 = (max(var_14, ((((~1) <= ((((arr_1 [i_0]) <= (arr_1 [i_0])))))))));
                                arr_15 [i_0] [13] [6] [i_4] = var_11;
                            }
                        }
                    }
                    var_15 = (max((438793057 < 15897663), ((+((min((arr_7 [i_0] [i_1] [i_0]), 3)))))));
                }
            }
        }
    }
    #pragma endscop
}
