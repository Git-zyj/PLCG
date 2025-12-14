/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= (((((var_11 && var_18) >= var_15)) ? (~var_13) : (~2941005670)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_21 += (arr_4 [i_0]);
            var_22 = (min(var_22, (((~(arr_4 [i_0 - 1]))))));
            var_23 = (min(var_23, ((((~var_18) << ((((((~(arr_1 [14]))) + 7238705316863296941)) - 8)))))));

            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                var_24 = (max(var_24, ((((((arr_5 [i_1] [i_1] [i_1] [i_1]) + var_17)) - (arr_0 [i_2]))))));

                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    arr_9 [i_0 - 1] [i_1] = ((!(((var_16 ? var_15 : var_8)))));

                    for (int i_4 = 2; i_4 < 21;i_4 += 1)
                    {
                        var_25 = (arr_0 [i_1]);
                        var_26 *= ((!(arr_5 [i_0] [i_0] [i_0] [i_0])));
                        var_27 &= (2977674698 / var_3);
                    }
                    arr_12 [i_0 + 2] [i_0 + 2] = var_14;
                }
            }
            for (int i_5 = 1; i_5 < 21;i_5 += 1)
            {
                var_28 = var_16;
                var_29 = ((~(~592231988)));
            }
        }
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            var_30 = var_12;
            var_31 = (min(var_31, (((var_16 ? ((1317292587 << (var_10 + 392322775))) : (((var_12 ? var_5 : -592231989))))))));
        }
        var_32 = (max(var_32, (((17983 ? 2977674698 : -262144)))));
        var_33 = (max(var_33, (((-592231989 ? (arr_2 [i_0 + 2] [i_0 + 1]) : 0)))));
        var_34 -= ((~(arr_8 [i_0 + 2] [i_0] [i_0 + 1] [i_0] [i_0] [6])));
    }
    var_35 &= var_6;

    /* vectorizable */
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        var_36 = (max(var_36, ((((arr_5 [i_7] [i_7] [i_7] [i_7]) ? -255 : -17983)))));
        arr_22 [12] = 1296609066;
        arr_23 [1] [i_7] = ((-(arr_2 [0] [i_7])));
        var_37 = (max(var_37, var_7));
        arr_24 [i_7] = (((((var_7 + 2147483647) >> 0)) % 871337755));
    }
    #pragma endscop
}
