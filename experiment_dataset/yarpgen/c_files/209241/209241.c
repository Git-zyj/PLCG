/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((max(0, 215)) / var_9)) & (((max(40, (var_1 == 215))))));
    var_17 = (max(var_10, (min((92036679 * 40), (41 / 1)))));
    var_18 = (min((((~((2276750034 ? var_15 : 1))))), (max(var_11, var_2))));
    var_19 = 31;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, ((((((((min(207, 40))) + (215 == 1100983824686046749)))) ? (((18 == (4819030201017704426 + 255)))) : 1)))));

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_9 [i_3] [i_2] [i_1] [i_0] = (max((((arr_0 [i_0 + 2] [i_1]) & 1)), (max(216, ((40 ? 118 : -41))))));
                        var_21 = (max(1, (min(215, -112))));
                        arr_10 [i_0] [i_1] [i_2] [i_2] = (min((arr_6 [i_0 + 2] [i_0 + 3]), ((7138693723947343546 & (((min(-10666, (arr_4 [i_0] [i_0] [i_3])))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
