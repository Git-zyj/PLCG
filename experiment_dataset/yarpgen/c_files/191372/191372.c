/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_15 = var_13;
                    var_16 -= (((((var_4 ? (~12802320979787705904) : (((0 ? var_0 : 44539)))))) ? (max((arr_5 [i_0 - 1] [i_1 + 2] [i_0 - 1] [i_1 - 1]), (arr_2 [i_0 + 2] [i_0 + 1] [i_1 - 1]))) : var_3));
                    var_17 = 9223372036854775807;
                }
            }
        }
    }
    #pragma endscop
}
