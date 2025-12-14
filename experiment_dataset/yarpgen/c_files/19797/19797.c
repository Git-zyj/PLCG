/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 &= (((((var_5 ? var_11 : var_10)))));
                arr_6 [i_1] = (!var_12);
            }
        }
    }
    var_17 &= (var_8 + var_2);

    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_18 = (max((((var_9 + 9223372036854775807) << ((var_5 ? var_11 : var_15)))), ((((var_11 || var_5) || (!var_5))))));
        arr_10 [i_2] = ((-(((!(var_8 && var_11))))));
        var_19 |= ((-((var_1 ? ((var_2 ? var_0 : var_12)) : ((var_3 ? var_5 : var_4))))));
    }
    for (int i_3 = 2; i_3 < 12;i_3 += 1) /* same iter space */
    {
        var_20 = var_7;
        arr_13 [i_3] = 9149192927963733292;
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 12;i_4 += 1) /* same iter space */
    {
        arr_17 [i_4] = (!1);
        var_21 = (!var_1);
        var_22 &= var_3;
        var_23 -= ((-((var_5 << (var_12 - 181)))));
        var_24 ^= (((var_2 + var_12) ? ((var_2 ? var_11 : var_12)) : var_9));
    }
    var_25 |= var_1;

    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        var_26 = ((((!(var_10 < var_8)))));
        var_27 = (max((!var_0), ((var_2 ? var_4 : ((max(var_12, var_4)))))));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                {
                    var_28 = (max(var_28, (((((((!((min(var_5, var_8))))))) / ((-var_1 ? (-9223372036854775807 - 1) : var_5)))))));
                    var_29 = var_3;
                }
            }
        }
        arr_28 [i_5] = ((var_4 ? ((((max(var_6, var_11))) << (((min(var_3, var_9)) + 649596984751690839)))) : (((var_4 < (min(var_14, var_6)))))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        var_30 = (!var_11);
        arr_32 [i_8] [i_8] = (((((var_1 ? var_6 : var_9))) ? ((57817 ? 14 : 112)) : var_0));
    }
    #pragma endscop
}
