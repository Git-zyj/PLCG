/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, ((min(var_16, (arr_7 [i_0] [i_2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_20 = (((-(arr_2 [i_0] [i_1] [i_2]))));
                                var_21 = (min(var_21, (((-778390867 ? ((((((arr_13 [i_2] [i_3] [i_3] [i_2] [i_1] [i_0]) ? 778390866 : var_10))) ? -90213321 : 778390876)) : (~var_8))))));
                                var_22 = (min(var_22, 89));
                                arr_15 [i_0] [i_4] [i_2] [i_4] [i_4 + 1] = (~var_13);
                            }
                        }
                    }
                    arr_16 [i_0] [i_1] [i_2] = (min(((min(-12258, -49))), (((arr_13 [i_0] [i_0] [i_1] [i_0] [i_0] [i_2]) + (~778390867)))));
                    arr_17 [i_0] [i_0] [i_0] [i_0] = (arr_2 [i_2] [11] [i_2]);
                    var_23 |= -10489;
                }
            }
        }
    }
    var_24 *= 17930;
    var_25 = var_16;
    var_26 = (max(var_26, var_10));
    #pragma endscop
}
