/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                var_11 = 24778;
                var_12 *= -42;
                var_13 += ((((((arr_2 [i_1 - 1] [i_1 - 1]) ? 8763740076144728614 : 2032))) ? (arr_4 [i_1]) : var_6));
            }
        }
    }
    var_14 = var_2;
    var_15 = var_4;
    /* LoopNest 3 */
    for (int i_2 = 4; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 11;i_4 += 1)
            {
                {
                    var_16 = ((var_10 < ((max((1016 - 2032), 4294967293)))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_17 += (arr_16 [i_5] [i_6 + 1]);
                                var_18 = -42;
                            }
                        }
                    }
                    var_19 *= var_8;
                }
            }
        }
    }
    var_20 *= var_5;
    #pragma endscop
}
