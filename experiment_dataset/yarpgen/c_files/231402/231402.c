/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((~((var_11 ? var_10 : var_4)))));
    var_16 = ((-var_0 ? var_7 : (((max(13539712589793056915, 106))))));
    var_17 = (min(var_17, (((((max(1969574129, var_9))) && -var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_18 &= ((!(17592186044415 < 255)));
                var_19 = (max(((min((arr_0 [i_0 + 2]), (arr_0 [i_0 + 2])))), ((var_13 ? (arr_0 [i_0 + 2]) : 1))));
            }
        }
    }
    #pragma endscop
}
