/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                arr_7 [i_0] = 0;
                var_14 = (max(var_14, (arr_4 [i_0] [5] [i_1 + 3])));
            }
        }
    }
    var_15 = (((((((-2147483647 - 1) ? var_3 : var_4)))) ? (min((max(524160, var_13)), (!var_10))) : (min(var_6, 11505371788149909096))));
    var_16 = (min(((var_3 ^ (max(var_1, var_3)))), 18446744073709551610));
    #pragma endscop
}
