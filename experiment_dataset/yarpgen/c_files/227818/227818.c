/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(((3726733669 ? var_8 : (20 & var_9))), var_13));
    var_16 ^= (((~var_5) ? 6973 : var_0));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_17 = ((var_2 ? ((-((min(var_9, 6968))))) : ((-(arr_4 [i_0 + 3])))));
                var_18 = ((((((arr_4 [i_0]) ? (arr_3 [i_0] [1]) : (~6973)))) ? ((min((-1607494840 / 6976), -32170))) : (((((arr_2 [i_0]) >= 2076)) ? 2040957814 : ((45763 ? 14510 : -6814629722819144311))))));
                var_19 = (max(var_19, ((((((~(((-32171 == (arr_3 [i_0] [i_0 + 3]))))))) ? (max((((-(arr_1 [i_0])))), (max(17451903489387337780, -6977)))) : (arr_2 [i_0 + 2]))))));
                var_20 = ((-(min((arr_0 [i_0 - 1]), (arr_0 [i_0 + 4])))));
            }
        }
    }
    var_21 = ((-((var_5 + (29847 != -32171)))));
    #pragma endscop
}
