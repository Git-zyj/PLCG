/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= min((max((~-290120950), ((var_9 ? var_15 : var_9)))), (max((min(var_7, var_7)), var_10)));
    var_17 &= var_15;
    var_18 = (var_12 ? var_9 : (1 >= 72));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = var_6;
                arr_4 [i_1] = (((min(255, (arr_2 [i_1] [i_0] [i_1]))) / (~var_5)));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] = ((0 > (arr_7 [i_2])));
        var_20 = (var_13 ? ((-66 ? var_3 : var_13)) : (arr_6 [i_2]));
        var_21 += (((((var_12 + 2147483647) >> 1)) > 80));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
    {
        var_22 = 0;
        arr_11 [0] = (max((min(((82 ? 12986596660813790438 : 33)), (((var_0 ? 255 : 0))))), (((((~(arr_10 [i_3]))) > var_0)))));
        var_23 |= (max((((-(~33)))), var_2));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        var_24 *= ((87 ? 1558327313 : 1220858795));
        var_25 = (max(var_25, (!var_0)));
        var_26 = ((~(~80)));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        var_27 *= ((2345320386706081680 << (1048575 - 1048574)));
        var_28 = var_8;
    }
    #pragma endscop
}
