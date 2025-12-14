/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((max(var_3, (((-990117203 ? 461021434 : var_2))))) - (((((max(var_1, var_3))) ? ((var_1 ? var_5 : var_2)) : ((var_9 ? var_5 : 58191)))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_11 = ((4294967284 ? 461021427 : 2096811308626486470));
        var_12 = ((!(!var_5)));
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        var_13 = (((!9) ? 58176 : 58187));
        arr_6 [i_1] [i_1 - 2] = 235;
        var_14 ^= ((~(~var_5)));
    }
    for (int i_2 = 1; i_2 < 9;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    arr_15 [i_2] [i_3] [i_2] = (var_0 || 0);
                    var_15 = var_6;
                    arr_16 [i_2] [i_4] [i_3] [i_2] = (((551384712 / 2096811308626486495) ? (!var_8) : 6254527724897941166));
                }
            }
        }
        var_16 = ((var_8 ? var_0 : (max(var_2, var_6))));
        var_17 = 3833945870;
        arr_17 [i_2] [i_2] = 3833945861;
        arr_18 [i_2] = var_0;
    }
    for (int i_5 = 1; i_5 < 9;i_5 += 1) /* same iter space */
    {
        var_18 = ((~((-64 ? (((arr_4 [i_5]) * 59903)) : var_4))));
        arr_22 [i_5] [i_5] = var_8;
        var_19 = (((max(-2096811308626486470, var_7)) >= -76));
    }
    var_20 = ((max(((-2096811308626486478 ? var_9 : 175)), ((var_7 ? var_4 : 59914)))));
    var_21 = var_4;
    #pragma endscop
}
