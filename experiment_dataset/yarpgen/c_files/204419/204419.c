/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, ((((((43 - 33) ? 1018762619 : 0)) == 1018762619)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [10] = ((var_5 ? var_1 : (((~(min((arr_1 [i_1]), (arr_3 [i_0] [i_1]))))))));
                var_11 = (arr_2 [i_0]);
                var_12 = ((-(1018762606 - 3276204677)));
                arr_7 [i_1] = ((~((~(((arr_2 [6]) ? (arr_2 [i_0]) : var_9))))));
            }
        }
    }
    var_13 = (max((((var_1 + var_6) ? -var_0 : (~-3417433611554349124))), ((min(var_4, -var_8)))));
    var_14 = ((~(var_7 <= var_9)));

    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        arr_10 [i_2] |= -4294967295;
        arr_11 [1] = ((var_8 && ((((arr_8 [i_2 + 2]) % var_2)))));
    }
    for (int i_3 = 1; i_3 < 17;i_3 += 1)
    {
        var_15 = ((((min(((max((arr_13 [i_3]), 0))), ((-(arr_12 [i_3])))))) ? (((((var_2 ? (arr_12 [i_3]) : (arr_14 [i_3 - 1])))) ? -var_2 : (max((arr_14 [i_3 + 1]), (arr_13 [i_3]))))) : ((((arr_13 [i_3 - 1]) ? var_5 : -2046945967)))));
        var_16 = (max(((~(max((arr_12 [i_3]), (arr_14 [i_3]))))), (((64 ? 64 : 1018762619)))));
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 18;i_6 += 1)
                {
                    {
                        var_17 = (((2046945967 % -111) ? ((((max(-2046945977, 3276204677))) ? 1018762618 : ((-1811544290 ? 2046945977 : 536913571470041915)))) : ((min((arr_12 [i_3 + 1]), -var_3)))));
                        arr_23 [18] [i_6] [i_3] [15] [i_3] = ((min((arr_20 [i_3] [i_4] [i_3]), (arr_20 [i_3 - 1] [i_5 + 2] [17]))));
                    }
                }
            }
        }
        var_18 = (max(var_18, ((((((arr_20 [5] [5] [i_3]) ? (((5870076130351970531 ? 10 : 3276204677))) : ((3276204666 ? 32455 : 0))))) ? 3276204662 : (3341731839 != 7748)))));

        for (int i_7 = 1; i_7 < 17;i_7 += 1)
        {
            arr_26 [12] [12] = 3341731839;

            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 18;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        {
                            var_19 = (max(((min(1, 159))), ((+(((arr_19 [i_3] [1]) - (arr_28 [i_3] [11] [i_8] [1])))))));
                            var_20 = ((var_2 % (min((max((arr_33 [i_3 + 1] [i_3] [i_3] [1] [i_3] [i_3] [5]), (arr_12 [6]))), (arr_32 [i_10] [i_9 + 1] [i_7] [i_7] [0])))));
                        }
                    }
                }
                arr_34 [i_7] = -1;
                arr_35 [1] [i_7] [i_3 + 1] [i_3 + 1] = (((-11246 ? (~var_6) : (~var_5))));
                var_21 = ((-(arr_15 [i_3 + 2])));
            }
        }
        for (int i_11 = 1; i_11 < 18;i_11 += 1)
        {
            arr_39 [i_3] = (~0);
            var_22 = (((arr_25 [i_3]) ? ((((min((arr_21 [i_11] [0] [i_3] [i_3 - 1] [i_3 - 1] [i_3]), (arr_19 [i_3 - 1] [i_11 - 1])))) ? (min((arr_25 [i_3]), (arr_17 [i_3] [i_3] [1]))) : (((99 ? var_8 : (arr_16 [i_3] [18] [i_11])))))) : (((!var_2) ? (((arr_32 [i_3] [i_11] [i_11] [i_3] [i_11]) ? (arr_19 [i_11] [i_11 - 1]) : (arr_15 [0]))) : ((((arr_30 [13] [17] [i_11] [i_11]) ? (arr_13 [i_11]) : var_6)))))));
        }
    }
    #pragma endscop
}
