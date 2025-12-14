/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= var_11;

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0 + 1]);
        var_13 = (min(var_13, (((((124 ? var_6 : (arr_0 [i_0 - 1]))) - 1163739627)))));
        arr_3 [i_0] [i_0] = var_8;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
        {
            arr_10 [i_2] [i_2] = ((var_7 && ((((arr_5 [i_1] [i_2]) ? var_0 : -1479377826)))));
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 21;i_4 += 1)
                {
                    {

                        for (int i_5 = 1; i_5 < 20;i_5 += 1)
                        {
                            var_14 = 51974460;
                            arr_17 [i_1] [i_2] [i_1] [i_4] [i_2] = ((((min(((var_2 >> (((arr_0 [i_1]) - 28)))), (arr_7 [i_3] [i_3] [i_2])))) ? (arr_14 [i_3 + 1] [i_2] [i_3] [i_2]) : (~17524438451099554469)));
                            var_15 = ((((min(var_9, ((min(var_2, (arr_8 [15]))))))) ? ((var_9 << (var_7 - 5542))) : 0));
                            arr_18 [i_2] [i_2] [i_3] = min(((-(arr_12 [i_2] [i_3] [i_4 - 1]))), var_1);
                        }
                        arr_19 [i_1] [i_1] [i_2] [2] = (((((((((arr_0 [i_2]) | 32764))) ? (arr_11 [i_2]) : (((910240700 ? 1969719244 : 1969719244)))))) ? ((~(arr_15 [i_2] [i_2] [i_4 - 1] [17] [i_4 - 1] [i_4]))) : (min(1, ((~(arr_9 [6])))))));
                        arr_20 [i_1] [i_2] [i_2] = -194999961;
                    }
                }
            }

            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        {
                            arr_31 [i_1] [i_2] [i_2] [i_6] [i_7] [i_8] = ((((arr_28 [i_1] [i_1] [i_6] [i_7] [i_2]) && ((((arr_29 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) | 910240720))))));
                            var_16 = ((arr_21 [i_1] [i_2] [i_7] [i_8]) * (arr_21 [i_1] [i_6] [i_7] [i_8]));
                        }
                    }
                }
                var_17 = (arr_15 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]);
                var_18 = (((max((arr_6 [i_1] [i_2]), ((var_9 ? 240 : (arr_30 [i_1] [4] [i_6]))))) <= (((max((arr_4 [i_1]), -12))))));
            }
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                var_19 |= 910240705;
                var_20 = (~-7);
                arr_34 [i_1] [i_1] &= ((-(((var_4 >= (arr_30 [i_1] [i_1] [i_1]))))));
            }
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                arr_38 [i_1] [i_2] [i_2] = (((((arr_33 [i_1] [i_2] [i_10] [i_1]) || 18446744073709551608)) ? (arr_7 [15] [i_2] [i_2]) : (min((arr_7 [i_1] [i_2] [i_2]), var_10))));
                var_21 = ((-(((!(arr_24 [i_10] [i_1] [i_2]))))));
                arr_39 [i_1] [i_2] = 7293829639013595281;
            }
            var_22 = var_3;
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
        {
            var_23 = (min(var_23, (((27 ? -194999961 : 962354532)))));
            var_24 &= (var_2 ? var_3 : var_1);
        }
        var_25 = (((!var_2) | (arr_12 [10] [14] [i_1])));
    }
    #pragma endscop
}
