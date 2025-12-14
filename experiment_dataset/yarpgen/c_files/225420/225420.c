/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, ((min((((min(80, -8432225282764590427)))), (arr_9 [9]))))));
                    var_14 = (max(var_14, ((((((arr_10 [i_0]) ? (((arr_0 [i_0]) ? var_7 : (arr_9 [9]))) : (((var_8 ? var_12 : (arr_6 [i_1]))))))) ? ((min((min((arr_10 [i_0]), var_5)), 0))) : ((2559847244 ? (((max((arr_7 [i_1] [i_2]), -46)))) : (max(-97, var_1))))))));
                    arr_11 [i_0] [i_1] [i_1] = (((((var_10 ? (arr_9 [i_0 + 1]) : (max(var_12, (arr_0 [i_2])))))) ? ((126 ? 19 : 3150140119)) : ((((((-99 ? 4179191136 : var_5))) ? ((max((arr_3 [i_0 + 1]), (arr_3 [i_0 + 1])))) : ((var_9 ? 13 : (arr_7 [i_0 + 1] [i_0]))))))));
                }
            }
        }
    }
    var_15 = ((var_12 ? ((var_1 ? var_9 : 15)) : (min(var_2, 4179191136))));
    var_16 = (min(var_16, (((9 ? ((((max(var_1, var_8))) ? (((-97 ? 1 : 3))) : 0)) : (((max(27, var_12)))))))));
    var_17 += ((min(var_7, 154352746)));
    #pragma endscop
}
