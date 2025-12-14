/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] = var_1;
                var_14 = 7;
                arr_7 [i_0] = ((((min((arr_2 [i_1] [i_1] [1]), -17050))) == 7));
            }
        }
    }
    var_15 = (max(((var_0 * (-7 * var_13))), (((((max(var_5, var_7))) || -var_0)))));
    var_16 = (min((max((min(var_12, var_4)), 65535)), (((3 * 243) + -67))));
    var_17 = ((0 << ((max(-1, (-7912977246343173081 || 229))))));
    #pragma endscop
}
