/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= (min((min(-5, var_5)), ((var_11 ? 2 : -4))));
    var_15 = (min(var_15, (((+(((!var_8) << ((((var_2 ? var_11 : -16)) - 1921538284)))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_16 = ((-(arr_0 [i_0 - 1])));
                var_17 |= (arr_1 [i_0 - 1]);
                arr_4 [i_0] [i_0] [i_0] = (((((-37 ? 0 : (arr_0 [i_1])))) ? (((((arr_1 [i_0]) | (arr_0 [i_0 + 2]))) | (arr_0 [i_0 + 1]))) : (((var_5 ^ ((4503599610593280 ? 822817280 : 28)))))));
            }
        }
    }
    var_18 = ((38391 ? (var_0 && var_5) : var_0));
    var_19 = (min(var_19, (((((((-14 <= var_12) ? var_12 : var_7))) ? var_0 : ((min((var_10 > var_4), (max(4, var_5))))))))));
    #pragma endscop
}
