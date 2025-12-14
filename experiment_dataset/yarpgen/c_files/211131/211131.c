/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((((75 ? (1 - var_7) : (var_12 - var_9)))), (var_14 - 54)));

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_21 *= (arr_1 [i_0] [17]);
        var_22 = (min(var_22, var_17));
        var_23 = 54;
        var_24 = (min(var_24, 582370983720987329));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_25 = (min((((~(1 ^ 1)))), (((arr_3 [i_1]) ? ((17864373089988564286 ^ (arr_0 [i_1]))) : (33 ^ var_18)))));
        var_26 = 17864373089988564285;
        var_27 = (max((!1), var_12));
        var_28 = (54 / (((arr_0 [i_1]) ^ ((1896414506 ? 1 : -4948134938899890537)))));
        var_29 = (!180);
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {
                var_30 = 1725817251;
                var_31 = (max((~33554432), var_19));
                var_32 = ((17364 ? ((((arr_8 [i_2 - 2]) ? var_15 : 1))) : (((arr_2 [i_2 - 2]) / (arr_0 [i_2 + 1])))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_33 += (arr_13 [i_4]);
                            arr_17 [i_2] [i_3] [i_2] [i_5] [i_3] [i_5] |= ((!((((~var_2) ? (((arr_9 [i_4] [i_3] [i_2]) ^ (arr_14 [i_2]))) : 1)))));
                            var_34 = (max(var_34, (((-(arr_1 [i_2 - 2] [i_2 - 2]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
