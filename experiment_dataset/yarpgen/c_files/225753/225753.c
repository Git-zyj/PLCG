/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((((((var_7 ? var_0 : var_13))) ? (42 != var_0) : (max(18446744073709551604, 17)))), -56));
    var_15 += 3474936026;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (((((arr_1 [i_0]) + (arr_4 [i_0] [i_0 + 2] [i_1 + 1])))))));
                var_17 = (((((max(14336, var_13))) || (!var_2))));
            }
        }
    }
    #pragma endscop
}
