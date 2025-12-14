/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-3602764814612042537 ? -838765993 : -32417));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 -= ((~((var_16 ? (((min(var_6, var_16)))) : ((var_15 ? var_10 : var_11))))));
                    arr_8 [i_2] [i_0] [i_2] [i_0] = (((max(var_3, ((var_14 ? 13174 : var_8)))) > ((((9223372036854775807 == var_11) ? -var_5 : (3856929839580369544 - var_5))))));
                }
            }
        }
    }
    var_19 = (((min(1, 3856929839580369553)) < ((-((var_15 ? var_9 : 9223372036854775807))))));
    #pragma endscop
}
