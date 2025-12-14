/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = 1327401738;
                var_20 = 1327401738;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    var_21 = (max(var_21, ((var_5 && (1425 && 17605)))));
                    var_22 = var_6;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_19 [i_5] [i_3] [i_4] [i_5] = var_5;
                                var_23 = (1327401738 * 0);
                            }
                        }
                    }
                    var_24 = (((!var_9) ? var_8 : -19930));
                    var_25 = (min(var_25, ((((max(-0, var_18)) >> (!1327401738))))));
                }
            }
        }
    }
    #pragma endscop
}
