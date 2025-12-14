/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(20357, (((-32765 ^ 17668632515158902344) ? var_15 : (min(21657, var_6))))));
    var_18 |= (((max((var_10 >= var_6), (61532 && var_3))) ? (((((min(var_6, 32765)) + 9223372036854775807)) >> (((min(var_1, var_15)) + 1460007517)))) : var_15));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    var_19 = (((arr_3 [i_2] [i_1]) ? (((var_8 ? var_12 : var_0))) : (((var_13 >> (var_16 + 119))))));
                    var_20 = var_12;
                }
            }
        }
        arr_7 [i_0] [i_0] = 32744;
    }
    var_21 = var_1;
    var_22 = (((((min(var_4, var_15))) ? var_1 : (min(var_10, var_1)))) - ((var_10 ^ (((min(var_12, var_13)))))));
    #pragma endscop
}
