/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = (max(((((arr_5 [i_1 + 1] [i_2] [2] [i_1 + 1]) ? 0 : 0))), (max(((var_6 ? var_14 : 1)), ((((arr_1 [i_0]) + var_12)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_18 -= ((((~var_3) ? (max(var_5, 8177)) : ((((arr_9 [i_1]) ? var_0 : 1))))) != 65535);
                                var_19 -= ((2143289344 ? 37 : 579390188));
                            }
                        }
                    }
                    arr_17 [i_0] [i_1 + 1] [i_0] = ((var_9 + ((((min(4294967290, 4294967295)) & (var_3 + 127))))));
                }
            }
        }
    }
    #pragma endscop
}
