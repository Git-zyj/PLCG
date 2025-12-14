/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((~(max(var_6, 32743)))));
    var_14 = ((var_1 ? ((((((var_5 ? 101 : var_10))) ? var_7 : var_12))) : var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = (max(var_15, ((min(((((((arr_0 [i_0]) ? 56693 : 1582879822764402589))) ? var_2 : var_10)), (((max(var_5, var_4)) >> (var_12 - 3916212470))))))));
                var_16 += (((-var_11 ? (var_2 * var_3) : 8842)));
            }
        }
    }
    #pragma endscop
}
