/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((!var_6), 121));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = var_5;
                arr_7 [i_0] [i_0] [i_0] = ((((((4294967295 ? -121 : (arr_1 [i_1]))))) ? 22678 : ((120 ? -32179 : var_1))));
            }
        }
    }
    var_14 = var_10;
    var_15 = ((-(((((max(var_11, var_4))) && var_6)))));
    #pragma endscop
}
