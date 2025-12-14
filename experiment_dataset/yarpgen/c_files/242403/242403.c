/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] [12] [i_0] = ((((var_11 ? ((var_18 ? var_10 : var_1)) : (((var_2 ? var_1 : var_14)))))) ? ((max(780803127, var_6))) : (min((min(var_12, var_3)), var_13)));
                            var_21 &= (min((min(-var_16, ((0 ? 5202183325418568263 : 1)))), ((var_3 ? var_11 : var_0))));
                            arr_12 [i_0] [i_0] [3] [i_0] = ((-var_9 ? -var_11 : ((-var_17 ? (((min(var_2, var_6)))) : ((var_6 ? var_4 : var_11))))));
                        }
                    }
                }
                var_22 = (max(var_22, ((min((max((min(-1, var_15)), ((-32 ? 1 : 8169029561906708374)))), ((((((-8169029561906708375 ? -1 : 0))) ? ((var_8 ? var_9 : var_6)) : (((var_8 ? var_1 : var_17)))))))))));
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_23 = (max(var_23, var_2));
                                var_24 = (max(var_24, ((((((((var_9 ? var_0 : var_17))) ? var_12 : var_19))) ? (((min(var_16, var_16)) ? var_13 : ((7832338221305250753 ? 0 : 0)))) : -var_14))));
                                arr_21 [i_0] [i_0] [i_4] [i_5] = ((-(max(var_11, var_0))));
                                var_25 += (min(((-(min(var_0, var_18)))), ((((max(98, var_16))) ? (((var_0 ? var_2 : var_16))) : var_11))));
                                arr_22 [1] [i_4] [i_0] [i_5] [i_6] = (var_7 ? ((var_4 ? (((var_10 ? var_6 : var_1))) : ((var_10 ? var_5 : var_11)))) : (((-((var_1 ? var_1 : var_7))))));
                            }
                        }
                    }
                }
                var_26 = var_2;
            }
        }
    }
    #pragma endscop
}
