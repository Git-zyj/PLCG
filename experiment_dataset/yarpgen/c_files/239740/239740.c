/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_12 = (max((((((var_7 ? -2809061507448830941 : (arr_4 [i_0] [i_1 - 1] [i_0])))) - var_7)), ((min(2809061507448830940, -8)))));
                arr_5 [i_0] [i_1 - 1] [i_1 - 1] = (max(((((max(18446744073709551615, (arr_0 [i_0] [i_1 + 1])))) ? ((-22 ? 8186658028629433096 : -517258390)) : 8186658028629433083)), ((max(8, (((!(arr_0 [i_0] [2])))))))));
            }
        }
    }
    var_13 &= (((min(-2147483647, ((9223372036854775807 ? 9223372036854775799 : var_7)))) < (max(((958787853 ? var_11 : var_1)), (~var_8)))));
    var_14 = (((~var_5) | ((var_3 ? (((8186658028629433106 ? var_6 : -1))) : var_7))));
    #pragma endscop
}
