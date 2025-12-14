/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_12 = ((0 / (-32767 - 1)));
                var_13 = (max(-2223267596411757366, 1));
            }
        }
    }
    var_14 = (max(23396, (-127 - 1)));

    for (int i_2 = 2; i_2 < 16;i_2 += 1)
    {
        var_15 = ((-9223372036854775807 - 1) ? ((((arr_1 [i_2 - 1] [i_2 - 2]) | (arr_0 [i_2 + 1])))) : ((max(var_1, (arr_2 [i_2 + 1] [i_2 + 1] [i_2 - 1])))));
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    {
                        arr_17 [i_2] [i_4] [i_5] = (18446744073709551615 > -32764);
                        arr_18 [i_2 - 2] [i_2] [i_2 - 1] [i_2] = (((0 != 9865) * (((arr_2 [i_3 + 2] [i_4] [i_3 + 2]) ? (arr_2 [i_2 - 2] [i_2 + 2] [i_2 - 1]) : (arr_8 [i_2 - 1] [i_2 - 1])))));
                        var_16 = ((~((-(226 == var_3)))));
                        arr_19 [i_2 + 2] [i_3] [i_4] [i_3] = ((((((arr_11 [i_3 + 1] [i_5] [i_5]) + (arr_11 [i_3 + 2] [i_3 + 2] [i_3 + 2])))) ? (arr_2 [i_2 + 1] [i_4] [i_5]) : ((min(3113411795, -32764)))));
                    }
                }
            }
        }
        arr_20 [i_2] [i_2 + 1] = (max((arr_2 [i_2 - 1] [i_2 - 2] [i_2 - 1]), ((max(1, 1)))));
        arr_21 [i_2] = (arr_10 [i_2 + 2]);
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_17 = ((((!((max(var_1, (arr_23 [i_6] [i_6]))))))));
        var_18 = (((var_4 ^ (arr_3 [16] [16]))));
        var_19 = ((1 ? 1 : -32764));
    }
    #pragma endscop
}
