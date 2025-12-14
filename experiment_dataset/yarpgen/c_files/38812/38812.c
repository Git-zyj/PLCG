/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((((max(1, var_7))) * ((~(!var_0))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_2] = ((((((arr_7 [i_0] [i_2]) ? (var_7 > var_0) : (arr_2 [10] [i_1 + 2])))) ? var_14 : (((~var_1) ? (max(var_0, var_12)) : (arr_5 [i_0] [i_1] [i_0])))));
                    var_16 = (max(var_16, ((((~var_1) ? var_7 : var_3)))));
                }
            }
        }
    }
    var_17 |= ((2147483620 ? 10133302222566406679 : 2));

    for (int i_3 = 2; i_3 < 22;i_3 += 1)
    {
        var_18 = var_8;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {
                    var_19 = (((~var_11) || (((((max(var_10, (arr_12 [i_3])))) ? (min((arr_13 [i_5] [i_4]), var_7)) : (arr_14 [i_4] [i_5]))))));
                    var_20 = (!4294967293);
                    var_21 = ((-(~39981)));
                }
            }
        }
        var_22 = (40001 && 25556);
        var_23 = (min((max((arr_10 [i_3 + 2]), (arr_10 [i_3 - 2]))), (((!var_12) ? ((var_8 ? (arr_11 [i_3]) : 25555)) : (arr_14 [i_3 + 3] [i_3 - 1])))));
        var_24 |= ((25534 | 2) ? (min((var_4 ^ 40001), (~14316103015785308113))) : (arr_11 [i_3]));
    }
    #pragma endscop
}
