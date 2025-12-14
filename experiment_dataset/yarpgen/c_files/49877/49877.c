/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((~(~var_9)));
        arr_4 [i_0] [i_0] = (((var_12 && 61572651155456) & (arr_1 [i_0] [i_0])));
        arr_5 [i_0] [i_0] = ((((19913 ? (arr_2 [i_0] [i_0]) : -19911)) > 14336));
        var_15 *= 19910;
        var_16 -= ((((arr_1 [i_0] [1]) - -1203645982)));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                {
                    arr_14 [i_3 - 1] [i_2] [i_1] [7] = ((((~((~(arr_8 [i_1]))))) ^ (((arr_12 [i_1] [i_3 + 2] [i_3 + 1]) ? 32704 : (~var_8)))));
                    arr_15 [i_1] [i_1] [i_2] [i_3] = ((-(min((arr_9 [0] [i_1] [i_2]), 1))));
                }
            }
        }
        var_17 = (((((arr_13 [i_1]) + 9223372036854775807)) >> (((arr_13 [i_1]) + 5574230090444351934))));
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
    {
        var_18 = ((+(max((arr_16 [i_4]), 540007604))));
        var_19 = (max(var_19, (((1035909920 >> (((max(((((arr_8 [i_4]) ? (arr_10 [i_4] [0] [i_4]) : (arr_0 [i_4] [14])))), (arr_8 [i_4]))) - 4174100110)))))));
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
    {
        arr_20 [i_5] = (((arr_6 [i_5] [i_5]) ? (((~((1962222431 - (arr_10 [i_5] [i_5] [i_5])))))) : ((max((arr_7 [i_5] [i_5]), (arr_0 [i_5] [i_5]))))));
        arr_21 [i_5] = ((-((((~224) >= ((~(arr_10 [i_5] [i_5] [6]))))))));
        var_20 = (((~(arr_8 [i_5]))));
    }
    var_21 = ((var_10 ? (~2139095040) : (max(var_4, (max(var_10, var_0))))));
    #pragma endscop
}
