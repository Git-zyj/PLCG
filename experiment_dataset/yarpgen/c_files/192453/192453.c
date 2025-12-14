/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= var_7;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((((arr_0 [i_0] [i_0]) >> (((arr_1 [i_0] [20]) - 62023)))) * (26120 * 0)));
        arr_4 [i_0] = ((((((~0) != -282587284))) > ((((arr_2 [i_0]) <= (arr_1 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            arr_9 [i_1] = ((var_3 - (min(var_3, (arr_8 [i_1])))));
            arr_10 [i_1] [i_2] [i_2] = (arr_8 [1]);
            arr_11 [1] [i_2] &= -282587287;
            /* LoopNest 3 */
            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            arr_20 [10] [i_3] [11] [i_2] [i_2] [i_3] [10] = ((((32761 ? 65241 : 0)) >= ((var_1 + (arr_12 [i_3] [i_3 + 1] [i_3 + 4] [i_3 + 3])))));
                            var_17 = (min((((!(((-282587284 ? var_6 : var_5)))))), var_13));
                        }
                    }
                }
            }
        }
        arr_21 [i_1] = ((((arr_17 [i_1] [i_1] [i_1] [i_1] [i_1]) * var_5)));
        var_18 -= (((~0) ? 9223372036854775807 : 1));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_19 = (max(var_19, (((((-1317474154 * (min(var_8, 282587267)))) * (((1 >> (((var_14 + 0) - 3833615210))))))))));
        var_20 += (arr_23 [i_6]);
        arr_24 [i_6] = var_1;
        var_21 = (((((-(49 << var_4)))) >= ((((((arr_23 [i_6]) / 4294967295))) ? ((~(arr_22 [i_6]))) : var_14))));
    }
    #pragma endscop
}
