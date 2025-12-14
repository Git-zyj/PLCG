/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((var_5 ? var_16 : var_9)))) & (var_3 % var_6)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = (((arr_5 [i_0]) ^ var_3));
                var_19 -= (((((var_9 < (arr_6 [i_0 - 1])))) < (arr_2 [i_0 - 1])));
                var_20 += ((var_7 & (((var_1 | var_4) | ((((var_2 + 2147483647) << (((arr_3 [16]) - 17480)))))))));
                var_21 = (min((var_9 <= var_9), 4196660295083540187));
            }
        }
    }
    var_22 = (max(var_22, ((((((~(var_16 > var_10)))) ? (((((min(var_8, var_11)) < ((min(-19025, -4196660295083540191))))))) : ((~((var_10 ? var_13 : var_11)))))))));
    #pragma endscop
}
