/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_9 == (max(var_8, (max(var_0, var_11))))));
    var_15 = (~var_3);
    var_16 = ((((((((var_7 ? 3790187703 : 3790187703))) ? (max(var_2, var_9)) : -var_10))) || (((-(min(var_11, 4611681620380876800)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (max(var_17, (arr_0 [i_0])));
        var_18 = (19241 - (arr_0 [i_0]));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        arr_15 [i_1] [i_2] [i_1] = (62 - 4134341181174506781);
                        var_19 = (arr_5 [i_1] [i_2]);

                        for (int i_5 = 4; i_5 < 10;i_5 += 1)
                        {
                            var_20 = var_1;
                            arr_18 [i_1] [i_2] [i_3] [i_1] [i_5] = ((((max(var_13, 16320))) - (((((4611681620380876804 ? 36257 : -846709725))) ? (((arr_17 [i_1] [i_2] [i_3] [i_4] [i_5]) ? var_2 : var_10)) : ((((var_12 < (arr_14 [i_1])))))))));
                            var_21 = 14151182767026561326;
                            var_22 = (min(var_22, (((+(max((arr_5 [i_2 - 3] [i_5 - 1]), 4674919831268037428)))))));
                            arr_19 [i_5] [i_4] [2] [i_1] [i_2] [i_1] [2] = min((((((max(17, var_4))) ? (((min((arr_2 [9] [i_3]), 1)))) : var_10))), var_12);
                        }
                        /* vectorizable */
                        for (int i_6 = 3; i_6 < 10;i_6 += 1)
                        {
                            var_23 = var_2;
                            var_24 = ((((var_13 ? (arr_16 [i_1] [i_4] [3] [1] [i_1]) : (arr_4 [i_1] [i_6]))) & (arr_3 [i_4])));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_25 = (max(var_25, ((min(((max(var_7, (~50)))), (((arr_8 [i_2 + 1] [10] [i_2 + 2]) >> (var_13 + 6968183))))))));
                            arr_27 [i_1] [i_2] [i_2] [i_2 - 2] = (1 & 0);
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            var_26 = (min(var_26, (arr_1 [i_1] [i_3])));
                            arr_31 [i_8] [10] [i_3] [i_1] [i_2] = 0;
                            var_27 = (arr_8 [i_3] [i_4] [i_8]);
                        }
                    }
                }
            }
        }

        for (int i_9 = 1; i_9 < 7;i_9 += 1)
        {
            arr_36 [i_1] [i_1] = ((18446744073709551615 & (((arr_8 [i_9 + 3] [i_9] [i_9 + 4]) ? var_3 : var_1))));
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 7;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    {
                        arr_44 [6] [i_1] [i_1] [i_1] [i_10] [i_11] = (((max(6654, 1449963171))));
                        arr_45 [i_11] [i_1] [i_10] [i_1] [i_1] = (((max((arr_38 [i_1] [5] [i_10] [i_11]), 18446744073709551610)) ^ ((((!((((arr_33 [i_10] [i_10]) | var_4)))))))));
                    }
                }
            }
            var_28 -= (~10763298300971662263);
            arr_46 [i_1] [5] [i_1] = var_7;
        }
        /* vectorizable */
        for (int i_12 = 4; i_12 < 10;i_12 += 1)
        {
            arr_49 [i_1] [i_1] [i_1] = ((((arr_4 [i_1] [i_12]) & -28)));
            var_29 -= (arr_29 [i_1] [i_12 - 3] [i_12] [i_12 - 2] [i_12] [i_12 + 1]);
            var_30 = (((arr_34 [i_1]) ? (arr_35 [i_1] [i_12 - 2]) : ((~(arr_5 [i_1] [i_12])))));
            var_31 = (min(var_31, (((((((arr_11 [i_1] [i_12] [5] [i_12]) ? var_0 : -45))) || (((var_8 << (((var_13 + 6968212) - 10))))))))));
            var_32 *= 227;
        }
    }
    #pragma endscop
}
