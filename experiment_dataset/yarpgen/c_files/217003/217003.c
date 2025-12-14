/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_3, 1718308941));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_18 = var_10;

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_19 = (min(var_19, ((var_2 ? var_13 : (arr_7 [i_0])))));
                        arr_13 [1] [i_0] [i_0] = min((((arr_0 [1]) * (((arr_12 [i_0] [i_1] [i_2] [i_3]) ? var_8 : var_7)))), (max(var_9, ((min(var_12, var_12))))));
                        arr_14 [i_0] [i_2] [i_0] = var_13;
                        var_20 = ((((max(((-1524697310 ? -156893149 : 1)), (min((arr_11 [i_2] [i_0] [i_2] [4] [i_0]), var_6))))) ? (arr_2 [1]) : -970412665));
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        arr_18 [i_4] [i_1] [i_0] [i_0] [i_0] = (max((((arr_8 [i_0] [i_4] [i_2] [i_4]) ? 1 : ((var_5 ? var_14 : 1)))), var_10));
                        arr_19 [i_4] [i_0] [i_0] [i_0] = ((((arr_16 [i_0] [i_2]) | (arr_16 [i_2] [1]))) < (~var_15));
                        var_21 *= ((((((max((arr_0 [i_4]), (arr_4 [i_4] [i_1] [i_2])))) ? var_5 : (arr_12 [i_0] [i_1] [i_2] [i_4]))) ^ 1229761021));
                        arr_20 [1] [i_4] [i_4] [i_0] = ((!(arr_17 [i_4] [i_2] [1] [i_0])));
                    }
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        var_22 *= var_5;

                        for (int i_6 = 3; i_6 < 20;i_6 += 1)
                        {
                            var_23 = var_7;
                            arr_27 [1] [i_0] [i_2] [i_2] [i_2] = ((((max(((~(arr_16 [i_2] [i_1]))), (((arr_24 [i_0] [i_5] [1] [i_1] [i_1] [i_0] [i_0]) ? (arr_6 [i_5 - 1] [i_0] [i_1]) : var_0))))) ? ((var_14 ? ((max((arr_25 [i_0] [i_1] [i_0] [i_5 - 1] [i_6]), var_12))) : (max((arr_10 [1] [i_1] [i_2] [i_5] [i_0]), (arr_1 [i_0]))))) : ((min((arr_17 [i_5 - 1] [i_6 + 1] [i_6 - 2] [i_6]), (arr_17 [i_5 - 1] [i_6 - 1] [i_6 - 1] [6]))))));
                            arr_28 [i_0] [i_0] [i_2] [20] [i_6] = (min(var_13, (~1)));
                            arr_29 [19] [i_0] = ((0 ? ((((min(277076930199552, (arr_4 [i_6 + 1] [i_5 - 1] [i_0]))) <= (arr_5 [i_0] [i_6 - 3])))) : (((((141 ? (arr_9 [i_0] [i_0] [i_0] [20] [i_0] [10]) : 6144)) == (var_16 < var_7))))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_33 [i_0] [i_1] [i_0] [i_0] [10] [i_5] = (~(arr_12 [i_5 - 1] [i_1] [i_2] [i_5 - 1]));
                            var_24 = ((-4287648538470215078 != (arr_10 [14] [i_1] [i_1] [i_1] [i_0])));
                        }
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            arr_36 [i_2] [i_0] [i_2] [i_0] [i_0] = (arr_22 [i_0] [i_0] [i_0] [i_0]);
                            arr_37 [i_0] [16] [i_1] [i_0] = ((((var_2 < var_3) ? 1 : var_3)) | (((1 ? var_13 : -1229761021))));
                            arr_38 [i_0] [7] [7] [i_0] [i_0] [7] [i_0] = max((min(var_4, ((max((arr_32 [i_0] [i_1] [i_2]), 0))))), ((((arr_17 [i_0] [i_0] [i_0] [i_0]) ? (arr_24 [i_0] [5] [i_5] [i_5] [i_2] [i_1] [i_0]) : (arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                            var_25 = var_8;
                            var_26 *= (~970412665);
                        }
                    }
                    arr_39 [i_0] = (12 ^ 4398046478336);
                }
            }
        }
    }
    var_27 = ((max(var_7, ((445039038 ? var_9 : 1)))) + (~var_13));
    #pragma endscop
}
