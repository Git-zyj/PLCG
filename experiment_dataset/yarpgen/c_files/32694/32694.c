/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((min(((var_7 ? var_13 : var_2)), (var_14 != var_5)))) ? -var_10 : 62864));
    var_16 = (min(((var_8 - (min(0, var_8)))), 62864));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_17 = (min((min((2671 * var_0), var_12)), (((arr_2 [i_1 - 1] [i_1 - 1] [i_1]) ^ (arr_2 [i_1 - 1] [i_1] [i_1])))));
                var_18 = ((-(min(((min(1, (arr_1 [i_1 + 3])))), ((6727958327518364204 ? 0 : var_5))))));
            }
        }
    }
    var_19 = (max((((((min(var_14, var_9))) > (var_1 < var_14)))), (min(var_1, var_12))));
    #pragma endscop
}
