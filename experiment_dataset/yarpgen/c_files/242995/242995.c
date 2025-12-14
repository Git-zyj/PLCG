/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_17 = ((((((arr_5 [i_0] [i_0] [i_0]) + var_15))) ? (((((max(-1, var_14))) ? (~var_6) : (0 && 103)))) : ((((max(var_5, 41992))) ? (0 * var_3) : (((arr_2 [i_0]) ? 6166151063064624201 : (arr_5 [i_0] [i_1 + 1] [i_1 + 1])))))));
                var_18 = ((((((max((arr_3 [i_0]), var_15))) || (((var_7 ? (arr_1 [i_0]) : var_8))))) || ((max((max(var_16, (arr_5 [i_0] [i_0] [i_1]))), 2566826974)))));

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_19 = (~318436764);
                    var_20 = (max(var_20, ((((max((arr_6 [i_0] [12] [i_0] [i_0]), 9007199254740992)) < (((((min((arr_6 [i_0] [1] [i_2] [i_2]), (arr_0 [8])))) + 0))))))));
                }
                var_21 = ((-117 * (((arr_7 [i_0] [i_0 - 1] [i_0] [i_0]) ? (!var_1) : (min((arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0]), 216))))));
                var_22 = ((!(min((arr_6 [i_1 + 1] [i_0] [i_1 + 1] [i_1]), var_8))));
            }
        }
    }
    var_23 = (min(var_23, (((!((!(var_15 == var_10))))))));
    #pragma endscop
}
