/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 = (max(((((arr_0 [i_0]) && (((-38 ? (arr_1 [0] [0]) : var_12)))))), (max((arr_0 [i_0]), (arr_1 [i_0] [i_0])))));
        arr_2 [i_0] = (((((-38 ? -122 : -2476800176545219932))) && ((((!var_1) ? (((min(var_6, var_8)))) : (arr_1 [4] [i_0]))))));
        var_21 = ((!var_9) ? ((min((~var_15), 1))) : (max(((((((arr_0 [i_0]) + 2147483647)) << (((((arr_0 [i_0]) + 102)) - 16))))), (max(43781, (arr_1 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_22 = (min(var_22, var_3));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_23 = ((min((min(849, var_15)), ((((arr_3 [i_1]) > (arr_11 [7] [i_1] [i_1] [7] [i_4])))))));
                                var_24 = (arr_11 [i_0] [i_1 - 3] [1] [1] [i_4]);
                                var_25 = (arr_6 [i_1 + 3] [i_1 + 3]);
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_20 [i_5] = (arr_16 [i_5] [6] [i_5] [12] [i_5] [i_5]);
        var_26 = (((((((min(var_4, (arr_18 [i_5])))) ? (arr_0 [i_5]) : (min((arr_11 [i_5] [i_5] [i_5] [i_5] [i_5]), (arr_11 [i_5] [i_5] [i_5] [i_5] [i_5])))))) ? (var_10 ^ var_4) : ((((((arr_5 [i_5] [i_5] [i_5]) ? (arr_5 [i_5] [i_5] [i_5]) : (arr_19 [i_5])))) ? var_19 : (((min((arr_4 [i_5] [i_5]), var_8))))))));
    }
    var_27 = (((-var_13 || (((var_5 ? var_5 : var_19))))));
    var_28 = (max(((max(var_15, (var_19 >= var_19)))), ((min(var_6, var_3)))));
    #pragma endscop
}
