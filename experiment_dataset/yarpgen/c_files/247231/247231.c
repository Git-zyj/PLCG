/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_12 + (~var_5)));
    var_20 = (!var_17);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_21 ^= (((arr_9 [i_0] [1] [1] [i_0] [i_1] [i_2 - 3]) ? (arr_9 [16] [i_3] [i_1] [i_3] [16] [i_2 - 2]) : (arr_0 [i_2 - 3])));
                        arr_10 [i_0] &= 60;

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            var_22 = (((arr_11 [i_2 - 1] [i_2] [i_2] [i_2 + 1] [i_2 + 1]) == ((var_10 << (5653 - 5651)))));
                            arr_13 [i_0] [i_0] [i_0] = 40151;
                            var_23 -= (((27397 % -32406) >= -1488343706));
                        }
                        var_24 = (max(var_24, (var_8 - var_6)));
                    }
                    arr_14 [i_2] = (max((arr_11 [i_0] [i_0] [i_1] [i_1] [i_1]), ((17491 ? 56 : var_4))));
                }
            }
        }
    }
    #pragma endscop
}
