/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((var_3 ? ((var_14 ? 8568831846828568799 : var_1)) : ((((-2147483647 - 1) ? 0 : (-2147483647 - 1))))))) ? (((((var_10 && var_12) || (((110 ? 24813 : 2147483643))))))) : (((128 / 144106391982833664) ? (9223372036854775797 | 1) : (((var_18 ? var_18 : var_3)))))));
    var_20 = ((var_14 ? (((((var_0 ? var_3 : 2077433533))) ? (128 != 65527) : (var_5 > 1))) : var_2));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_21 += ((((4528276527170136599 ? (arr_0 [i_0 - 1] [i_0 - 1]) : 1188177400)) / ((((1943384918 / var_0) ? var_0 : (((arr_3 [i_0] [i_0]) ? var_2 : (arr_5 [i_0] [i_0]))))))));
                var_22 = (((65527 || var_5) ? ((var_4 ? (arr_2 [i_0 + 4] [i_0 - 1]) : (arr_2 [i_0 + 3] [i_0 + 3]))) : ((7002838925084561298 ? 60 : 459911075))));
            }
        }
    }
    var_23 = ((((((var_9 ? var_0 : var_7)) < var_10)) ? (((((-9223372036854775807 - 1) * 11443905148624990314)) / (((var_18 ? 347400413 : 2001857349))))) : var_17));
    var_24 = ((((0 ? 60 : 128))) ? ((var_15 ? var_17 : (2574282727 && var_18))) : var_3);
    #pragma endscop
}
