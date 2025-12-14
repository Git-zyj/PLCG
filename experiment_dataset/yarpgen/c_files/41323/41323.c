/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((-21079 ? ((var_13 ? var_8 : var_6)) : (!var_10))) % var_6));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_16 -= var_6;
                arr_6 [4] = min((((arr_4 [i_0 + 1] [i_0 + 3] [i_0]) >> (((arr_4 [i_0 + 2] [i_0 - 1] [i_1]) - 3117534890)))), (((arr_4 [i_0 + 2] [i_0 + 1] [i_0 + 1]) % -11916)));
                arr_7 [i_0] = ((var_9 ? var_1 : -var_4));
                var_17 = (min((-6453 + -21077), ((((var_6 > (arr_0 [4]))) ? var_1 : var_1))));
            }
        }
    }
    #pragma endscop
}
