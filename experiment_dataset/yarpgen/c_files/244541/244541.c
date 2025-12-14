/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((arr_1 [i_0]) + var_5));
        arr_3 [i_0] [i_0] = ((((arr_0 [11]) ? (-9223372036854775807 - 1) : (arr_0 [i_0]))) + (arr_1 [5]));
        arr_4 [i_0] = ((~(((var_9 || (arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((((min((arr_0 [i_1]), (~9223372036854775807)))) ? ((((((-108 ? (arr_1 [i_1]) : var_4))) ? var_6 : -32359))) : ((-var_15 ? (arr_1 [i_1]) : (((arr_5 [i_1] [i_1]) ? var_5 : var_7))))));
        arr_8 [i_1] = (max(var_5, (min((arr_5 [i_1] [i_1]), ((var_2 * (arr_5 [i_1] [13])))))));
    }
    var_16 = (((min(((min(-108, 195))), (max(-108, (-9223372036854775807 - 1))))) >= var_1));
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    arr_17 [6] [i_3] [i_4] = (((((~((max(-24722, -51)))))) ? (((+(((arr_6 [9]) ? (arr_10 [i_2 - 1] [i_3]) : var_0))))) : ((100660095 ? var_14 : (arr_12 [i_2 + 3])))));
                    arr_18 [6] [6] [i_4] &= ((var_14 ? ((15201 ? 73 : 17434187673982928793)) : (var_8 ^ 102)));
                }
            }
        }
    }
    var_17 = (((((-3421276982837973295 ? var_14 : var_2))) == (max(var_0, -72057594037927936))));
    #pragma endscop
}
