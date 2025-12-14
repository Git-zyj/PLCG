/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((((!(var_3 == 343592954)))), (((((12 << (32 - 27)))) ? (min(var_3, var_9)) : var_9))));
    var_13 = (((((1 ? 1377201136 : 1))) ? ((((!var_4) < (max(var_7, 1131524334))))) : (((((var_3 ? var_4 : var_2))) ? var_0 : (!1377201106)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_14 = (-32 & 71);
        var_15 = (((arr_2 [i_0] [i_0]) ? ((((arr_0 [i_0] [i_0]) / var_3))) : (~6298672644102312731)));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_16 -= ((-(((((15164683525348720151 ? var_9 : (arr_3 [i_1] [i_1])))) + (max((arr_3 [i_1] [i_1]), var_5))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 11;i_4 += 1)
                {
                    {
                        var_17 = (max(-35, (((arr_13 [i_4] [i_3] [i_3] [i_3] [i_1] [i_1]) ? (arr_6 [i_1]) : (arr_13 [i_1] [i_1] [i_1] [5] [1] [i_1])))));
                        var_18 = var_7;
                    }
                }
            }
        }
        var_19 = (max(var_19, ((min((min(var_5, 3163442954)), ((1 ? -9223372036854775785 : (arr_8 [i_1] [i_1]))))))));
    }
    #pragma endscop
}
