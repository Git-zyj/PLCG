/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += ((var_5 ? var_8 : ((((((13758283528371670293 ? 9223372036854775807 : var_15))) ? var_2 : 65527)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = (((!31) & ((min((18446744073709551609 <= var_7), 59347)))));
                arr_4 [i_0 - 1] = (min(9223372036854775803, ((max((arr_3 [i_0] [i_0]), var_2)))));
                var_22 = (var_10 ? (((var_9 ? (arr_3 [i_0 - 1] [i_1]) : var_16))) : (min(var_3, var_0)));
            }
        }
    }
    var_23 = ((var_4 << (((var_1 >> var_7) >> ((((9 ? 2047 : 119)) - 2022))))));
    var_24 = 255;
    #pragma endscop
}
