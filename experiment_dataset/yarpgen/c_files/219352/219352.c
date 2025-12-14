/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -var_13;
    var_20 = (7512259273234429054 >> 0);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_21 = (var_0 ^ 7512259273234429070);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_12 [i_3] [i_3] [i_2] [i_2] [i_3] [6] = var_12;
                                var_22 = ((+(((5 && -16384) / (-9223372036854775807 - 1)))));
                            }
                        }
                    }
                    var_23 -= ((-((127 >> (9223372036854775807 - 9223372036854775783)))));
                    var_24 = (((~(var_2 % var_7))) << ((-var_18 ? (120 % 1) : 3355838777176326727)));
                }
            }
        }
    }
    #pragma endscop
}
