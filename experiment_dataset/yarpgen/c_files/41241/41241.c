/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= (((~var_14) ? var_6 : var_11));
    var_20 = ((((((65535 ? var_17 : var_8)))) ? var_4 : var_6));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_21 = (max(var_21, ((((((var_15 / (arr_1 [i_0] [i_0])))) ? (arr_0 [i_0]) : (((arr_2 [i_0]) * (arr_2 [i_0]))))))));
        var_22 = (min((((~(arr_0 [i_0])))), ((-(arr_1 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = (arr_3 [i_1] [i_1]);
        var_23 = ((-var_17 ? (arr_4 [i_1] [i_1]) : (((arr_4 [i_1] [i_1]) >> (var_3 - 50474)))));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 17;i_3 += 1)
            {
                {
                    var_24 -= var_9;
                    var_25 = 2147483647;
                }
            }
        }
        var_26 = (arr_11 [i_1] [16] [i_1] [i_1]);
        arr_13 [i_1] [i_1] = (arr_7 [i_1]);
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
    {
        var_27 = ((((((min(0, 18446744073709551606)) - (min((arr_9 [i_4]), var_6))))) ? (arr_5 [i_4] [i_4]) : ((max((arr_11 [i_4] [12] [i_4] [i_4]), (arr_3 [i_4] [i_4]))))));
        arr_16 [i_4] = ((+(((arr_4 [i_4] [i_4]) * (arr_4 [i_4] [i_4])))));
    }
    #pragma endscop
}
