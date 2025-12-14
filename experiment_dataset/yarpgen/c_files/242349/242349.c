/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;
    var_14 = var_8;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = var_4;
        arr_3 [i_0] = min(-716099751762099282, ((max(var_1, var_5))));
    }
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 23;i_2 += 1)
        {
            {
                arr_11 [i_1 - 2] [i_2 + 1] = var_4;
                arr_12 [i_2 + 1] = (((((((6855893504622957074 ? 24929 : -24942))) ? ((max((arr_4 [i_1]), var_7))) : (((arr_9 [i_1] [i_2] [i_2]) ? 28857 : 245)))) <= 4597));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 21;i_4 += 1)
                    {
                        {
                            arr_20 [17] [17] [i_3] [i_4] = var_6;
                            arr_21 [i_4] [i_4 - 2] [i_3] [22] [i_2] [i_1] = ((-28873 ? 9169954422838516523 : (((-7205727334772951077 ? (((arr_5 [i_3]) ? (arr_9 [15] [i_2] [i_1 - 1]) : (arr_16 [i_1 - 2] [i_1 - 1] [i_1 - 1]))) : ((var_2 ? var_9 : var_10)))))));
                            arr_22 [i_4 - 1] [1] [i_2 + 1] [i_1] = ((~((min(-16, 33)))));
                            var_15 = (arr_17 [i_1] [i_1] [i_3] [i_2] [i_3] [i_1 + 1]);
                        }
                    }
                }
                arr_23 [21] = 64;
            }
        }
    }
    #pragma endscop
}
