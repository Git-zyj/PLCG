/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            {
                var_11 = (min((arr_1 [i_1 + 2]), ((((((arr_3 [i_0]) ? var_10 : (arr_0 [i_1 - 1])))) ? ((((arr_1 [7]) ? (arr_1 [i_0]) : var_9))) : var_3))));
                var_12 = (((((93 << (81 - 78)))) | ((-((var_8 ? var_9 : var_9))))));
            }
        }
    }
    var_13 = (((((-9114 + 2147483647) << (((-31517 + 31538) - 21)))) >> (var_5 + 8715)));
    #pragma endscop
}
