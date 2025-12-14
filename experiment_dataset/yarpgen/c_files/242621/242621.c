/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_20 -= ((-792367857680935948 ? ((15337 ? 0 : 5)) : (min(var_10, (arr_5 [i_0] [i_2] [i_2] [i_1])))));
                        var_21 = (((((((min((arr_6 [i_0]), 132))) ? (arr_4 [i_3] [i_2] [i_0]) : (min((arr_5 [i_0] [i_1] [i_2] [i_3]), 50214))))) & (((arr_0 [i_0] [i_1]) ? var_5 : ((4 ? 14134304231032058129 : 15337))))));
                        var_22 = (min(var_22, ((min(-24, 1)))));
                        var_23 -= ((((max(-68, (((arr_0 [i_2] [i_0]) ? -8724 : var_8))))) ? (-2147483647 - 1) : -1587898278));
                        arr_8 [i_0] [i_3] [i_2] [i_3] |= ((!(((560 ? 51 : -1962470182739745496)))));
                    }
                    arr_9 [i_0] = ((((max((arr_2 [i_1] [i_2]), 2239356414))) != (((arr_7 [i_0] [i_0] [i_0] [i_0] [i_2] [i_2]) ? 14134304231032058115 : var_12))));
                    var_24 = (((~1) ? ((max((arr_6 [i_0]), (arr_4 [i_0] [i_1] [i_2])))) : (((!((min(4312439842677493486, (arr_1 [i_0])))))))));
                    var_25 = (max(var_25, var_14));
                    arr_10 [i_0] = ((((max((arr_1 [i_0]), var_10))) ? (max(var_17, 4294950912)) : ((((4312439842677493487 >= 1) ? 51743 : (arr_4 [i_0] [i_1] [i_2]))))));
                }
            }
        }
    }
    var_26 = ((5631726315735109214 - ((min(var_6, -127)))));
    var_27 = var_7;
    var_28 = ((((((~1121055750683715626) ? (((max(-16066, var_7)))) : (min(1121055750683715626, 32759))))) ? (max(-2289482560944980941, ((max(var_15, 188))))) : (((var_18 ? -554 : (!15445646978312526116))))));
    #pragma endscop
}
