/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((~(((!(((var_11 ? 10344 : var_8))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_15 = var_9;
        var_16 = (!var_5);
        arr_3 [i_0] = ((var_13 - (~var_1)));
        arr_4 [i_0] [i_0] = (((var_7 && var_6) ? var_2 : var_3));
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        var_17 = (~0);
        arr_7 [i_1] = (((var_1 | (var_1 - 2582990738142789609))));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            arr_14 [i_2] [i_3] = ((255 ? ((max((var_7 && 10344), var_5))) : ((min(54514, var_4)))));
            var_18 = ((var_4 ? (((max(var_8, var_6)))) : (((((var_0 ? 0 : var_11))) + (min(var_3, 0))))));
            arr_15 [i_3] = ((((((((var_7 ? var_4 : 106))) ? (!var_1) : 81))) ? 1384819103 : ((var_1 ? var_12 : var_13))));
            var_19 = ((65528 ? 1 : -22122));
        }
        arr_16 [1] [1] = (min((((-(var_9 < var_2)))), (((((10 ? 6811413850451219188 : 13255654881284506071))) ? (min(var_7, 1)) : (max(var_3, var_7))))));
    }
    #pragma endscop
}
