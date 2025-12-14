/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;
    var_14 = 46;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [1] = (-32767 - 1);
                    arr_9 [i_1] [i_0] [i_0] [i_0 + 3] = ((((((-32767 - 1) ? 24604 : -1323959543))) ? -32750 : 44));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_2] [i_1] [i_0] = ((!(((~(-2147483647 - 1))))));
                                var_15 = ((var_5 ? 0 : var_6));
                                var_16 |= var_8;
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = 1;
    var_18 = 0;
    #pragma endscop
}
