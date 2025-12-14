/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((var_4 || ((max(var_10, var_4))))) ? (((((!var_0) || ((min(0, var_6))))))) : var_7));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_12 += (var_4 ? ((((min((arr_4 [i_0 + 1] [i_0 + 2]), (arr_0 [i_0])))) ? (min(var_6, 5537387405247116611)) : (min(26, 18446744073709551597)))) : (-127 - 1));
                arr_5 [i_0] = (max((((!(arr_2 [i_1])))), var_10));
            }
        }
    }
    #pragma endscop
}
