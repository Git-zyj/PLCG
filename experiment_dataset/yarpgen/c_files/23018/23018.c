/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] &= (min(((((min(var_10, var_5))) ? var_8 : ((16383 ? var_0 : (arr_4 [i_1]))))), (arr_0 [i_1])));
                arr_6 [18] [17] |= ((var_1 < (((5352 ? (-2147483647 - 1) : var_2)))));
                var_16 = ((9050422042170329395 ? var_2 : (((274877906943 / 3) / var_0))));
            }
        }
    }
    var_17 -= 9050422042170329395;

    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_18 -= ((!((((arr_0 [i_2]) ? (arr_0 [i_2]) : var_3)))));
        var_19 = var_11;
        var_20 = (((min(1, -10039))));
        var_21 *= (max((((((arr_9 [i_2]) + 9223372036854775807)) << (arr_8 [i_2]))), 2159653337));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        arr_12 [i_3] [i_3] = (min(((((arr_11 [i_3]) ? ((((arr_10 [i_3] [i_3]) == 4291659603))) : var_13))), ((((-1341774913 ? (arr_10 [i_3] [i_3]) : 5687583890531455209)) / (arr_11 [i_3])))));
        arr_13 [i_3] = (arr_10 [2] [i_3]);
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_22 = (arr_0 [i_4]);
        arr_18 [i_4] = ((max(1341774912, 3775281535)));
        arr_19 [i_4] [i_4] = ((7 != ((((-10041 != (min(var_9, 18446744073709551615))))))));
        arr_20 [i_4] = (((arr_11 [i_4]) ? (arr_11 [i_4]) : var_3));
    }
    var_23 = ((var_11 ? var_11 : (!var_15)));
    #pragma endscop
}
