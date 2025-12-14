/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_10 ^ (var_0 | 24046)));
    var_12 ^= ((((max(var_0, (max(var_1, var_4))))) ? ((((max(var_9, var_1)) == var_3))) : var_5));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_13 = (arr_3 [i_1] [i_0]);
                var_14 = (((((24061 ? 24046 : 41503))) ? (((((1 ? (arr_4 [i_1]) : (arr_3 [i_0 + 3] [i_1]))) * (var_2 / 2147483647)))) : var_10));
            }
        }
    }
    #pragma endscop
}
