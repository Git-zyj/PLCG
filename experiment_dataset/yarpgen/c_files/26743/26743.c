/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
        {
            var_13 = ((arr_1 [i_0]) ? (((((max((arr_2 [i_1]), -2009161437033744669))) && (((~(arr_2 [3]))))))) : var_1);
            var_14 = var_8;
            arr_6 [i_0] [i_0] = ((~(((arr_0 [i_0]) ^ (arr_1 [i_0])))));
            arr_7 [i_0] [i_1] [i_0] = ((max((arr_4 [i_0]), (arr_4 [i_0]))) - ((min(((((arr_2 [8]) < 634))), (((arr_3 [i_0] [i_0]) ? var_3 : -3228723980436785746))))));
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                arr_13 [i_0] [i_2] [i_0] = (((~var_7) ? var_11 : (arr_8 [i_0] [i_2] [i_3])));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 7;i_5 += 1)
                    {
                        {
                            var_15 = (min(var_15, (arr_2 [i_5])));
                            var_16 = ((-984 ? 64883 : -8134865731688031580));
                        }
                    }
                }
            }
            for (int i_6 = 3; i_6 < 9;i_6 += 1)
            {
                var_17 = (arr_14 [i_6 - 2] [i_0] [i_0] [i_0]);

                /* vectorizable */
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    arr_26 [6] [i_2] [6] [i_7 - 1] |= (((!64901) ^ (((arr_4 [0]) ? var_11 : (arr_21 [i_2] [i_2] [0])))));
                    arr_27 [i_2] [i_2] [i_2] [i_2] [i_0] [8] |= ((((((arr_22 [0] [0]) / var_2))) ? (((arr_11 [i_0] [i_2] [i_6 - 2] [i_2]) % (arr_5 [i_0] [i_2] [i_0]))) : (0 > var_8)));
                    arr_28 [i_0] = 652;
                    var_18 = 983;
                }
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    var_19 = ((((((var_11 ? 665 : (arr_24 [i_0] [i_0])))) ? (~-984) : (((arr_3 [i_8] [i_2]) ^ -64)))) >= (((2517059468 ? (((arr_1 [i_0]) / (arr_14 [i_0] [i_0] [i_0] [i_8]))) : -var_12))));
                    var_20 = (arr_8 [1] [i_2] [i_0]);
                }
                arr_32 [i_0] [i_0] [i_0] [i_0] = (653 | 0);
                var_21 = ((!(((var_10 ? var_8 : (((arr_29 [i_0] [i_2] [i_2] [i_6]) ? (arr_30 [i_2] [i_2] [i_2] [i_2]) : (arr_8 [i_0] [i_2] [i_0]))))))));
            }
            arr_33 [i_0] [i_2] = (arr_31 [i_0] [i_2] [0] [i_0]);
            arr_34 [i_0] [i_0] = (max((((((var_8 >> (-25062 + 25075)))) ? ((var_4 & (arr_24 [i_0] [i_0]))) : ((((arr_2 [i_2]) * var_8))))), (((-(arr_3 [i_0 - 2] [i_0 - 2]))))));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            arr_38 [i_0] [i_0] = (((arr_11 [i_0 - 1] [i_0 + 1] [0] [i_0 + 2]) ? (arr_21 [i_0 + 1] [i_0 - 3] [i_0]) : (arr_21 [i_0 - 3] [i_0 + 2] [i_0])));
            var_22 = (min(var_22, ((((arr_0 [i_0 + 2]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 3]))))));
            arr_39 [i_0] [i_0 - 2] [i_0] = ((!(652 | 64901)));
            var_23 = var_2;
        }
        var_24 = (((((((var_2 ? var_10 : (arr_36 [i_0 - 3] [i_0 - 1])))) ? ((var_9 ? var_12 : -1769203851669385121)) : (arr_9 [i_0 + 2] [i_0]))) != (((max(((var_12 || (arr_24 [i_0 - 2] [i_0]))), var_9))))));
    }
    for (int i_10 = 1; i_10 < 15;i_10 += 1)
    {
        arr_44 [i_10] [i_10] = (arr_41 [i_10 + 1]);
        var_25 = ((((max((arr_43 [i_10] [i_10 + 1]), (arr_43 [13] [i_10 + 1])))) ? (arr_43 [i_10] [i_10 + 1]) : (((arr_43 [i_10] [i_10 - 1]) % (arr_43 [i_10] [i_10 - 1])))));
    }
    var_26 = var_4;
    #pragma endscop
}
