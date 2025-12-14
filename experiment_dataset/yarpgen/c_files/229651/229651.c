/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    var_11 = (((((((var_1 ? var_8 : 9007824963430755891))) ? var_1 : (!var_3))) - (max(var_3, 129682940))));
    var_12 = (!var_6);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_13 = (max(-9007824963430755896, 248));
                var_14 += (((((arr_1 [i_0 - 3]) && var_6)) ? (arr_0 [i_1 + 2]) : 36));
            }
        }
    }
    #pragma endscop
}
