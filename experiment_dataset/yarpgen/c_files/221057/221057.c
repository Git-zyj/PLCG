/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_9));
    var_19 += ((-(((((max(255, 873801397))) && (var_3 && var_0))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_20 *= (((arr_4 [i_1] [10] [i_1 + 1]) ? (((((min(1, var_10)))) - (arr_5 [i_1 + 3]))) : ((((!((max((arr_4 [i_0] [14] [8]), (arr_0 [i_1]))))))))));
                var_21 = ((-2047479677 ? 2311704240 : -1));
            }
        }
    }
    #pragma endscop
}
