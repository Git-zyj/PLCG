/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((!(~var_7)));
    var_15 += 297463224;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = ((-(arr_0 [i_0])));
        var_16 ^= ((((((arr_0 [i_0]) ? (arr_0 [i_0]) : var_7))) ? (arr_0 [i_0]) : (arr_0 [i_0])));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_17 &= (arr_1 [i_0] [i_1]);
            var_18 = (-297463225 * 4095);
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_19 ^= (-32767 - 1);
            var_20 = (arr_5 [i_0] [i_2] [i_2]);
        }
        var_21 *= (arr_6 [i_0] [i_0]);
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_22 = (!(arr_4 [i_3]));
        arr_11 [i_3] [i_3] = ((!(((~(((arr_4 [i_3]) ? var_2 : -13445)))))));
    }

    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        var_23 = (min(var_23, ((((((-(((arr_13 [i_4] [i_4]) ? (arr_13 [i_4] [i_4]) : var_6))))) ? (arr_13 [i_4] [i_4]) : (arr_13 [i_4] [i_4]))))));
        var_24 = (min(var_24, (((!(((var_3 ? var_13 : ((max(var_8, (arr_12 [i_4]))))))))))));
    }
    var_25 = (max(var_25, (((((32754 + 297463224) ? (max(var_4, 297463218)) : ((((-127 - 1) + 153))))) / (-127 - 1)))));
    #pragma endscop
}
