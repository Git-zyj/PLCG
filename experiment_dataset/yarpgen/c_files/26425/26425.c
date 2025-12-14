/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [11] [i_1] = ((((46 / (arr_3 [i_0])))) ? ((-(192 * var_11))) : ((((var_12 ? var_10 : var_14)))));
                arr_6 [i_0] = ((((min((arr_4 [i_0] [i_0]), var_2))) ? -var_14 : (((((((32763 ? 0 : 7290))) || ((min(var_1, var_17)))))))));
                arr_7 [i_0] [i_0] = ((var_7 ? (max((arr_1 [i_0] [i_1]), var_4)) : ((var_2 ? (arr_1 [i_0] [i_0]) : var_7))));
            }
        }
    }
    var_18 = ((((((min(var_6, 62))) ? (min(var_0, 0)) : (((var_7 << (var_15 + 96)))))) << (-var_11 - 3956970067)));
    var_19 = ((var_11 > (min(62, (min(-32759, var_0))))));
    #pragma endscop
}
