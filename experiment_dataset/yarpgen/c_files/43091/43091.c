/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_9 [i_1 + 2] [i_1] [i_2] = (min((((~((max(0, var_10)))))), (((arr_3 [i_2]) ? (var_14 % 4016785761) : (((~(arr_0 [i_0] [i_2]))))))));
                        arr_10 [0] [8] [i_1] [i_3] [i_2] = (arr_1 [i_0] [1]);
                    }
                    for (int i_4 = 2; i_4 < 8;i_4 += 1) /* same iter space */
                    {
                        var_17 = (arr_12 [i_1] [i_1]);
                        var_18 += 4016785751;
                        arr_15 [i_0] [i_0] [i_1] [i_0] = (15 ? var_1 : ((((var_6 ? 278181535 : 9223372036854775807)))));
                        var_19 |= (((arr_12 [i_0] [i_0]) ? (max(((min(2146435072, 9223372036854775803))), (arr_12 [i_0] [i_0]))) : ((((arr_1 [i_0] [i_1 - 1]) / (((var_0 | (arr_5 [i_4] [i_4] [i_4])))))))));
                    }
                    for (int i_5 = 2; i_5 < 8;i_5 += 1) /* same iter space */
                    {
                        var_20 = (var_8 ? -1974468958 : (((arr_4 [i_1] [i_2] [i_5]) ? (((var_11 ? var_6 : var_6))) : (arr_6 [i_5 - 2] [i_1] [i_1] [i_0]))));
                        arr_19 [i_1] = 4016785780;

                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            arr_22 [i_2] [i_1] [i_2] [i_1] [i_0] = var_14;
                            var_21 = (min(-var_10, ((var_9 ? -104 : (min(39, (arr_20 [i_1] [1] [i_2] [i_1] [i_2] [i_2])))))));
                            var_22 = 14;
                            var_23 *= var_0;
                            arr_23 [i_6] [i_1 - 4] [i_1] [i_5] [i_6] = (min((!var_0), ((((arr_14 [i_1]) < (arr_13 [i_1]))))));
                        }
                        /* vectorizable */
                        for (int i_7 = 2; i_7 < 9;i_7 += 1)
                        {
                            arr_26 [i_1] [i_1] [i_2] [5] [i_7 - 2] = (arr_21 [i_0] [6] [i_0] [i_2] [i_5 + 1] [i_5] [i_7]);
                            arr_27 [i_1] = ((((arr_20 [i_1] [9] [i_2] [i_5] [9] [5]) ? var_0 : (arr_14 [i_1]))));
                            arr_28 [i_1] = (arr_20 [i_1] [i_5] [8] [i_1] [i_1] [i_1]);
                            var_24 = ((var_6 ? 12 : ((-1851265869 / (arr_0 [i_0] [i_1])))));
                        }
                        var_25 = (max(var_25, (arr_5 [i_0] [i_1 + 2] [i_2])));
                        var_26 = (max(var_26, ((((((~(arr_5 [i_0] [i_1] [i_2])))) || ((min((max((arr_1 [i_1] [i_5]), var_15)), var_8))))))));
                    }
                    for (int i_8 = 2; i_8 < 8;i_8 += 1) /* same iter space */
                    {
                        arr_32 [i_2] [7] [3] [i_1] [1] = 236;
                        arr_33 [i_0] [i_1] [i_1] = (arr_3 [i_8]);
                        arr_34 [i_0] [i_1 - 1] [i_2] [i_1] = var_2;
                        arr_35 [i_0] [i_0] [i_0] [i_1] = var_7;
                        var_27 = (min((min((arr_17 [1] [i_1] [i_0]), 113)), ((min((arr_2 [i_0] [i_1]), ((var_0 ? var_9 : var_8)))))));
                    }
                    var_28 = (max(var_28, (arr_12 [i_0] [i_0])));
                    arr_36 [i_1] [i_1] [i_2] = ((((min((arr_3 [i_1 - 4]), 93))) ? (((arr_3 [i_1 - 1]) ? (arr_3 [i_1 + 3]) : (arr_3 [i_1 + 1]))) : (((arr_3 [i_1 - 2]) | (arr_3 [i_1 - 2])))));
                }
            }
        }
    }
    var_29 = (min(((max(-1969469597, var_10))), (((var_5 ? ((max(var_15, var_4))) : ((var_8 ? var_8 : 62573)))))));
    var_30 = var_6;
    #pragma endscop
}
