/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = var_1;
        arr_4 [i_0] [19] |= var_2;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_10 = 11624;
        var_11 |= (((((((~(arr_5 [9])))) || (((-(arr_7 [i_1])))))) ? 255 : (arr_7 [i_1])));
        arr_8 [i_1] = ((max((var_0 % var_8), (max((arr_1 [i_1] [13]), var_7)))) ^ (~10214581550571960967));
        var_12 *= ((((((!(((12824 ? (arr_5 [i_1]) : (arr_0 [i_1])))))))) != (max((arr_1 [i_1] [i_1]), var_3))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_11 [i_2] |= 254;

        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            var_13 = (max(var_13, ((((arr_10 [i_3 + 2]) << ((var_3 ? 127112206 : var_3)))))));
            var_14 = (arr_9 [15]);
        }
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            var_15 *= (((((!(arr_18 [16] [i_4] [i_4])))) / ((((arr_17 [i_2] [i_4] [19]) <= var_0)))));
            var_16 &= 0;
            arr_19 [i_4] = (((var_8 * 127112206) * (arr_17 [17] [i_4] [i_4])));
            arr_20 [17] = var_6;

            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                var_17 = ((((var_9 / (arr_13 [i_5]))) + var_7));
                arr_23 [18] = var_3;
                arr_24 [i_2] [1] = ((var_4 ? (10214581550571960967 + var_1) : (((1 ? -686267515 : (arr_21 [i_2] [i_2] [18]))))));
            }
        }
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            var_18 = (min(var_18, (var_2 != 26003)));
            arr_27 [i_2] [i_2] [i_6] = (((arr_10 [i_2]) << var_6));
            var_19 |= var_6;
        }
        var_20 = ((arr_18 [12] [i_2] [i_2]) * var_2);
    }
    var_21 = var_4;
    var_22 = var_1;
    var_23 = (min((((22345 ? var_7 : ((min(var_9, var_2)))))), (min(((max(var_0, 38782))), ((var_5 ? 8232162523137590649 : var_0))))));
    var_24 = var_0;
    #pragma endscop
}
