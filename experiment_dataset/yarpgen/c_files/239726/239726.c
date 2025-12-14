/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [2] [i_3] [i_3] |= 29;
                                var_14 = (min(((var_7 ? ((210 ? (arr_8 [i_2] [i_2]) : -3097523104501961277)) : -5236898900407232430)), (max(var_5, (!var_10)))));
                                var_15 = (~((~(min(var_9, 119)))));
                            }
                        }
                    }
                    arr_16 [i_0] [i_0] [i_0] = (!0);
                    var_16 = (max(var_16, (((min(((min(-22, var_6))), 255))))));
                }
            }
        }
    }
    var_17 = var_6;
    #pragma endscop
}
