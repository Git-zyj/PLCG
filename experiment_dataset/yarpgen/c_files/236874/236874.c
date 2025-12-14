/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((27885 == ((var_11 ? ((24667 ? -89 : 603486303924586062)) : var_14))));
    var_18 = (max(var_18, (((~(((var_0 <= var_4) + -var_0)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_19 = (min(var_19, ((((-603486303924586062 ? (!1) : 1020567734371353901))))));
                var_20 = (min(var_20, ((((!40869) << ((((((((arr_5 [i_0]) ? (arr_0 [i_0]) : (arr_5 [i_1])))) ? (arr_3 [i_0]) : (arr_0 [i_1]))) - 107187762)))))));
            }
        }
    }
    #pragma endscop
}
