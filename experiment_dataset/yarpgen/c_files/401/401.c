/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_20 = var_10;
        arr_2 [i_0] [7] = ((-503592857 ? (0 == 107) : var_7));
        arr_3 [5] = 109;
        arr_4 [i_0] = var_8;
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 11;i_3 += 1)
                {
                    {
                        var_21 = (~var_17);
                        arr_13 [i_0] [8] [i_2] [i_2] &= (!var_5);
                        var_22 = (((((arr_11 [i_0] [i_0] [i_0]) > -8002)) ? 127 : (arr_0 [i_2 - 1] [i_1 + 1])));
                    }
                }
            }
        }
    }
    var_23 = (max(var_1, (12333722871505145122 & var_18)));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            {
                arr_20 [i_4] [i_5] [i_5] = (~7985);
                var_24 = ((max(((var_14 | (arr_16 [i_4] [i_5]))), 107)));
                var_25 = (max((((((1 ? (arr_18 [19] [i_5]) : 31296))) ? var_7 : ((6113021202204406493 ? var_16 : var_8)))), (((-var_11 == (var_14 ^ var_7))))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 18;i_7 += 1)
                    {
                        {
                            arr_28 [i_4] [i_4] [i_4] [i_6] [i_7 + 1] = ((var_16 ? (((max(var_2, var_6)))) : (min(var_19, (max((arr_16 [i_6] [13]), var_0))))));
                            var_26 = -var_19;
                            var_27 = ((var_19 ? (arr_17 [i_7 + 1] [i_7 + 2]) : (!8001)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
