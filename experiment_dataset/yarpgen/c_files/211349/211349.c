/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_3, ((max(((min(var_4, var_15))), (min(var_7, var_16)))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 = var_12;
        arr_3 [i_0] = ((((max((arr_0 [i_0] [i_0]), (arr_0 [16] [i_0])))) & (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {

            for (int i_3 = 3; i_3 < 20;i_3 += 1)
            {
                var_21 = ((((((arr_6 [i_2 - 1] [i_1]) ^ (arr_6 [i_2 - 2] [i_1])))) ? (arr_4 [i_1]) : (arr_4 [i_1])));
                var_22 |= ((-((((min((arr_6 [i_2] [10]), (arr_7 [i_2 + 1] [1])))) ? (((max(var_13, var_7)))) : var_9))));
            }
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_23 = (max(var_23, (((-(min((min((arr_4 [20]), (arr_8 [i_2 + 3]))), var_10)))))));
                var_24 = (min(var_24, var_9));
                var_25 = (min(var_25, (arr_7 [i_1] [10])));
                arr_14 [i_1] [i_1] [i_1] = (((arr_8 [i_1]) ? (arr_6 [i_1] [i_1]) : ((max((max((arr_13 [15] [i_2] [10]), (arr_11 [11] [i_1] [i_1] [i_1]))), (((arr_6 [i_1] [i_1]) ? var_0 : (arr_10 [i_1] [i_1] [i_1]))))))));
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 20;i_6 += 1)
                    {
                        {
                            var_26 -= (((min((arr_6 [i_1] [i_6]), ((2180664312 ? 2114302984 : 18223753404722042236)))) > 2114302985));
                            var_27 -= (((((arr_17 [23] [i_6 - 2] [i_2 - 2] [20] [10] [10] [i_5 + 1]) >= (arr_17 [16] [i_6 + 1] [i_2 + 3] [1] [i_6] [22] [i_5 - 1]))) ? (arr_17 [i_1] [i_6 - 2] [i_2 + 2] [i_5 + 1] [i_6 - 1] [19] [i_5 + 1]) : (arr_17 [i_1] [i_6 + 3] [i_2 - 2] [i_6 + 3] [5] [i_6 + 3] [i_5 - 1])));
                        }
                    }
                }
            }
            arr_20 [i_1] = (arr_11 [i_1] [i_1] [2] [22]);
            var_28 = (~(((arr_8 [i_2 - 1]) ? (arr_12 [i_1] [i_2 + 1]) : (arr_12 [i_1] [i_2 + 2]))));
        }
        var_29 = (max(var_29, var_4));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        var_30 = (max(var_30, ((~(var_2 | var_0)))));
        arr_24 [i_7] = ((var_11 ^ (((arr_5 [i_7] [i_7]) ? (arr_16 [i_7] [0] [4] [i_7]) : (arr_17 [i_7] [i_7] [12] [i_7] [19] [i_7] [i_7])))));
    }
    #pragma endscop
}
