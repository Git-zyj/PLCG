/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 = (min(var_11, (arr_2 [i_1])));
                var_12 |= ((var_10 | ((((!(arr_2 [i_0 - 1]))) ? (arr_6 [i_0] [7] [i_0 + 1]) : (((2057 ? 2054 : 160)))))));
                arr_8 [i_0 - 1] [i_1] [i_0] = (i_0 % 2 == zero) ? (((max(var_5, ((0 << (((arr_1 [i_0] [i_0]) - 1494948408)))))))) : (((max(var_5, ((0 << (((((arr_1 [i_0] [i_0]) - 1494948408)) + 1982798999))))))));
                var_13 = ((var_8 ? ((18446744073709551615 ? (arr_3 [i_0]) : 31124)) : (arr_4 [i_0] [4] [i_0])));
                var_14 *= (arr_7 [1] [i_1] [1]);
            }
        }
    }
    var_15 = var_3;
    #pragma endscop
}
