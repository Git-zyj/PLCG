/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_13 [6] [i_2] [i_3] [i_4] = ((max((arr_5 [i_0] [i_1]), (arr_6 [i_0] [10]))));
                                var_16 = max(126, 22);
                                var_17 |= ((~(min(-745203723, (((arr_3 [i_1] [1]) ? (arr_7 [i_1]) : var_9))))));
                                var_18 = (max(var_18, ((max((arr_2 [i_0] [7]), (arr_2 [i_0] [i_3]))))));
                            }
                        }
                    }
                    var_19 *= 910364889;
                }
            }
        }
    }
    var_20 = (max(var_20, var_12));
    var_21 = var_5;
    var_22 = (max(var_6, (((~17307) ? var_11 : var_6))));
    #pragma endscop
}
