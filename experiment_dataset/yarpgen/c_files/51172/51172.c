/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (((((-(~var_2))) / ((min((var_4 * var_4), (max(var_7, 3277565040))))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((((max(((((arr_4 [i_0] [i_1 - 3] [i_0 - 1]) | var_0))), (arr_0 [i_0 - 1] [i_1 + 1])))) ? var_9 : ((min((arr_2 [i_1 + 1] [i_0]), 15)))));
                var_11 = ((~(max(((max((arr_5 [i_0] [i_1 - 3]), (arr_2 [i_0 + 2] [i_0])))), (arr_0 [i_0] [i_0 - 1])))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            arr_20 [i_4] [i_4] [i_2] [i_5] [i_4] [i_2] [i_6] = var_9;
                            var_12 ^= 30877;
                            var_13 ^= ((-(arr_16 [i_4] [i_4] [i_4] [i_4] [i_4])));
                        }
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            var_14 = var_3;
                            var_15 = (((arr_12 [i_2]) ? var_3 : (arr_12 [i_2])));
                            var_16 ^= ((1017402236 << (63 - 50)));
                            arr_24 [i_4] [i_4] = (~1017402271);
                        }
                        var_17 |= (arr_19 [i_2] [i_3] [i_3] [i_3] [i_5]);
                        arr_25 [i_4] = (((((~(arr_2 [i_2] [i_4])))) > 562949919866880));
                        var_18 = var_3;
                        arr_26 [i_4] [i_2] [i_4] [i_5] = -103;
                    }
                }
            }
        }
        var_19 = (arr_7 [i_2] [i_2]);
        var_20 |= var_9;
    }
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        var_21 = ((((((var_8 ? var_3 : var_0)))) ? ((((1 ? (arr_27 [i_8]) : var_6)) * 89)) : (var_5 * -106)));
        var_22 = (max(var_22, (arr_28 [6])));
        var_23 ^= (((((!(arr_29 [18])))) / var_0));
        var_24 = (max(var_24, (((((min((arr_28 [12]), (min(var_7, var_2))))) ? (((max(1, 59908)))) : (((!(arr_28 [8])))))))));
    }
    #pragma endscop
}
