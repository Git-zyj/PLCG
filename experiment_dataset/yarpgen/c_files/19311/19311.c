/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = -var_8;
        var_17 = (max(var_17, ((((arr_2 [i_0]) ? (~-65) : var_9)))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_18 &= (((arr_1 [i_1] [i_1]) ? (arr_4 [i_1]) : (!111)));
        arr_6 [i_1] = (arr_2 [12]);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {
                        arr_16 [19] [i_2] [i_2] [i_4] [i_3 + 2] = ((((((20217 ? 17834796022757393261 : 4903411714535281619)) >= 8738))) == 0);
                        var_19 = var_0;

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_20 = 17834796022757393261;
                            arr_20 [i_2] = (arr_9 [i_1] [i_2] [i_3] [12]);
                        }
                        var_21 = (((min(((-126 ? 17550 : -1643528308)), ((((arr_1 [i_3] [i_4]) > (arr_17 [i_1] [21] [i_3 + 1] [21] [i_2] [6]))))))) ? (((arr_0 [i_3 - 1]) + (-2147483647 - 1))) : (arr_13 [6] [i_2] [i_3 - 1]));
                    }
                }
            }
        }
        arr_21 [i_1] [0] = ((((!((!(arr_12 [i_1] [i_1]))))) ? 1 : ((min(8, 1)))));
        var_22 = (max(var_22, (((((((arr_0 [i_1]) ? (max(0, 39848)) : ((0 ? var_14 : var_6))))) ? (arr_9 [i_1] [20] [i_1] [20]) : (((~159) ? (~45325) : -45318)))))));
    }
    var_23 = 24140;
    var_24 = var_3;
    var_25 = (((((((-122 ? var_5 : var_14)) - 56778))) ? (((((var_3 ? var_4 : 112))) ? ((var_1 ? 137 : var_9)) : 122)) : var_7));
    #pragma endscop
}
