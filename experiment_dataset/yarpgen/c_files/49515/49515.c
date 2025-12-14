/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= (((var_16 ? -0 : 32760)) <= ((((var_9 >> 1) == var_12))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_19 &= var_8;
                arr_4 [i_0 + 1] = (((4343584705019337433 - -4343584705019337434) != var_3));
                var_20 *= (((((var_12 ? var_6 : var_12)))) ? ((((-4343584705019337434 ? 4343584705019337430 : 1909462246)))) : var_10);
            }
        }
    }
    #pragma endscop
}
