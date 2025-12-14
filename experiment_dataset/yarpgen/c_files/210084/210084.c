/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((((min(var_14, var_1)))), (((max(var_15, var_15)) ? (48540 ^ var_7) : var_0))));
    var_21 = ((~246) != 1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_22 = (((((((~(arr_1 [i_0]))) | (var_13 | 1)))) ? ((7535427783008823202 ? -51 : (arr_1 [i_1 - 1]))) : ((~((min((arr_0 [i_0]), 255)))))));
                var_23 = ((1 ? (811218225 || 1) : (250 >= 1)));
                arr_5 [i_0] = ((+((min((arr_1 [i_1 - 1]), 1)))));
            }
        }
    }
    var_24 = var_10;
    var_25 = ((max(576460752303423488, (max(var_4, var_0)))));
    #pragma endscop
}
