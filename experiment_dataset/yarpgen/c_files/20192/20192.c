/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((var_10 ? var_12 : 26495))));
    var_14 ^= var_6;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_0] = (((((((!(arr_1 [i_0] [i_0]))) >= -18540)))));
                var_15 = (min(var_15, (18446744073709551615 | var_3)));
                var_16 = (min((arr_0 [i_0 - 3]), ((((!var_0) * -18540)))));
            }
        }
    }
    var_17 = (max(var_17, (((!(((var_4 ? (var_0 && var_11) : (1 * 1)))))))));
    #pragma endscop
}
