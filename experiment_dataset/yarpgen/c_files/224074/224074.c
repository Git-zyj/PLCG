/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;
    var_15 = (max(var_15, ((max((min(var_4, ((var_9 ? var_2 : var_4)))), ((((~var_2) <= ((var_7 ? var_3 : var_12))))))))));
    var_16 += (((var_7 ? (min(var_6, var_10)) : var_2)));

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_17 -= (((((1229190840 ? (~var_7) : (-26426934 % 1229190840)))) ? (~var_6) : (max((((arr_1 [i_0] [i_0]) ? var_10 : var_12)), (arr_0 [i_0])))));
        var_18 += (((arr_1 [i_0] [i_0]) ? (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))) : ((+(max((arr_1 [i_0] [i_0]), var_10))))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [i_1] = (arr_2 [i_1]);
        arr_6 [i_1] |= var_5;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] [i_2] = var_4;
        arr_10 [4] [i_2] &= (((((11989 ? 1074891618 : 3854895306))) ? 11048157361700772990 : var_0));
        var_19 -= (((arr_2 [i_2]) ? (arr_3 [i_2] [i_2]) : var_1));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] = (((((((((arr_7 [i_3]) ? var_4 : (arr_7 [i_3])))) ? (arr_7 [i_3]) : (arr_3 [i_3] [i_3])))) ? (max(((-11976 ? 3854895307 : (arr_1 [i_3] [i_3]))), ((((arr_1 [i_3] [i_3]) ? var_12 : var_10))))) : var_10));
        var_20 = (((var_2 * -var_7) ? (((((~(arr_11 [i_3] [i_3]))) == ((((arr_3 [8] [i_3]) && var_0)))))) : (((var_8 / var_12) / (((arr_0 [i_3]) ? var_0 : var_1))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    arr_20 [i_3] [i_3] [i_3] |= (max(var_6, (arr_14 [i_3] [i_3])));
                    arr_21 [i_3] [i_3] |= (arr_4 [i_4] [i_5]);
                    var_21 *= ((((((arr_15 [i_5]) ? var_0 : (arr_15 [i_4])))) ? (((arr_15 [23]) | (arr_15 [i_4]))) : (arr_15 [i_4])));
                }
            }
        }
        arr_22 [i_3] |= ((var_3 ^ (min(14, 2156880565))));
        var_22 = (min(((((min(var_9, var_6))) ? ((((arr_4 [i_3] [i_3]) * var_1))) : ((1782658278 ? 1 : 3649086752)))), var_8));
    }
    #pragma endscop
}
