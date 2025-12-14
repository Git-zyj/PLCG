/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 63041;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_14 = (min(861698322, (min(var_6, -2239477678567834105))));
                var_15 += (((((var_9 ? ((861698322 ? (arr_1 [i_0]) : (arr_0 [i_0]))) : 238))) ? (~var_2) : (((!((min((arr_1 [i_0]), 5260892780850841779))))))));
            }
        }
    }
    var_16 = (max(var_16, ((((((~(min(46678, 18446744073709551615))))) ? ((1 ? var_5 : ((min(var_7, 132))))) : var_1)))));
    #pragma endscop
}
