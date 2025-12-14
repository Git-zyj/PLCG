/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((min(var_11, var_10))) ? (~2683037982) : (((11947 ? 65535 : var_3))))) < ((max(var_1, 65535)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_13 = ((32599 >> (((max(((var_9 ? (arr_6 [i_1 + 2]) : (arr_2 [i_1] [10]))), ((min(47159, var_11))))) - 5480406949973729165))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = (max((((arr_0 [i_1 + 2] [i_0]) << (453458835 - 453458827))), ((32327 ? 32767 : var_6))));
                    var_14 -= (arr_3 [i_0] [i_1] [i_2]);
                }
            }
        }
    }
    var_15 = ((((((((var_1 << (453458835 - 453458833)))) ? (max(var_5, var_7)) : var_9))) ? (18376 >= 189) : ((var_7 << ((min(166, 1)))))));
    var_16 = ((-127 - 1) ? var_1 : -109);
    #pragma endscop
}
