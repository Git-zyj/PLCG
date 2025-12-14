/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_15 = min(((-(((arr_2 [i_0] [i_1]) ? (arr_0 [i_0 + 2]) : -4379691050112685954)))), (arr_2 [i_0] [i_1]));
            var_16 = (arr_2 [i_1] [i_0]);
            var_17 = (max(var_17, ((min(var_14, 1002121103)))));
        }
        arr_4 [i_0] = (((((var_10 ? ((var_12 ? var_3 : -127)) : 58))) ? ((-(min((arr_2 [i_0] [i_0]), var_4)))) : (min((min(var_9, (arr_0 [i_0]))), ((((arr_0 [i_0]) ? -18357 : var_10)))))));
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_18 = 4379691050112685947;
        arr_8 [2] |= arr_5 [i_2];
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 12;i_3 += 1)
    {
        arr_11 [i_3] [i_3 + 1] = (((arr_9 [i_3]) ? (arr_9 [i_3]) : (arr_9 [i_3])));
        var_19 *= (((((-18347 ? 1717433373 : (arr_9 [0])))) ? -8428146033728982617 : (arr_9 [1])));
    }
    for (int i_4 = 3; i_4 < 14;i_4 += 1)
    {
        arr_15 [i_4] = ((min(((((arr_14 [i_4]) ? 4379691050112685954 : var_8))), (min(var_13, (arr_13 [i_4]))))));
        var_20 &= var_5;
        var_21 = (min((((-var_12 * (!127)))), (min(4379691050112685956, -1011936089727659357))));
        var_22 = ((+(((~var_1) ^ var_4))));
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 8;i_5 += 1)
    {
        var_23 -= var_3;
        var_24 *= (((((var_10 ? -7210 : 1))) ? (arr_17 [i_5]) : ((15609 ? var_12 : -156179352))));
        var_25 = ((((arr_18 [i_5]) ? -127 : 18365)));
        var_26 &= (((arr_12 [i_5 - 2]) ^ (arr_12 [i_5 - 2])));
    }
    var_27 = (((((var_12 ? (((var_13 ? var_2 : var_1))) : ((var_2 ? var_13 : var_13))))) ? var_3 : var_1));
    #pragma endscop
}
