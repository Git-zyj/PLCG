/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = (arr_2 [i_0] [i_0] [i_0]);

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_20 -= (min(((((min(var_5, 1))) ? var_13 : (((max((arr_2 [3] [i_1] [3]), 237)))))), ((min(((1 ? (arr_5 [i_1]) : 18)), 1)))));
                    var_21 = (max((!1), (arr_2 [i_0] [i_1] [i_2])));
                    var_22 = (min(((1 * (arr_1 [i_0] [2]))), -5499));
                    var_23 = 1;

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_10 [i_1] [1] [i_2] [i_1] [i_1] = ((((((var_8 && (arr_1 [i_3] [i_2]))) && (arr_1 [i_0] [i_1]))) ? (((((min((arr_8 [i_0] [i_1] [6] [i_3]), 750104310))) || var_19))) : (((!((max(var_19, var_14))))))));
                        arr_11 [i_0] [i_1] [i_2] [i_1] = (((max(((61440 >> (((arr_3 [i_1] [i_2] [7]) - 1943008074)))), (var_4 || var_6))) == 77));

                        for (int i_4 = 4; i_4 < 10;i_4 += 1)
                        {
                            var_24 = (min(var_24, (((max((min((arr_2 [i_0] [i_2] [10]), var_10)), (arr_1 [i_4 + 3] [i_4 + 1])))))));
                            arr_16 [i_0] [i_4] [i_0] [i_0] [i_0] [i_0] |= -var_5;
                        }
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            var_25 = ((((max((((arr_19 [i_0] [i_1] [6] [11] [i_5]) ? 192 : 234881024)), var_15))) | ((~(min(52948, (arr_6 [i_0] [i_1] [i_3] [i_5])))))));
                            var_26 = ((((((63 ? -648265838 : 1766823297910868791)))) ? (((((max(1, var_1))) ? (((arr_5 [i_0]) + -42)) : (max((arr_7 [i_0] [i_1]), (arr_1 [i_0] [i_2])))))) : (((arr_19 [1] [i_2] [i_2] [i_2] [i_2]) / (((min(21052, 72))))))));
                        }
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            arr_23 [i_0] [i_0] [6] [i_2] [0] [2] [i_6] |= (((((-(arr_15 [4] [i_1] [i_6] [i_2] [i_6])))) ? (arr_19 [i_0] [4] [i_2] [5] [5]) : ((((arr_14 [i_0] [7] [i_0] [i_0] [i_0]) ? (arr_14 [i_0] [i_1] [i_2] [i_3] [i_6]) : (arr_14 [i_0] [i_1] [i_2] [i_3] [i_6]))))));
                            arr_24 [i_0] [i_1] [i_1] [i_3] [i_6] = (max((-var_4 || 50133), (max((arr_20 [i_0] [i_1] [i_2] [i_1] [i_6]), ((((arr_17 [3] [3] [3] [4] [i_1] [i_6]) || 1)))))));
                            arr_25 [i_1] [i_3] [i_2] [9] [i_1] = (!((((!var_2) ? 0 : ((14292286236464296904 ? -118 : 5))))));
                        }
                        var_27 = (max(((var_7 - (arr_19 [i_0] [i_0] [i_0] [5] [2]))), ((max((arr_20 [i_3] [i_1] [i_1] [i_1] [i_0]), var_11)))));
                    }
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        arr_28 [i_0] [i_1] [i_1] [i_7] = (arr_21 [i_0] [i_0] [i_0] [i_1] [i_0]);
                        var_28 = min(8, (arr_20 [i_7] [i_1] [i_2] [i_1] [i_0]));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                {
                    var_29 += ((-(max(1, (946899629 + -120)))));
                    var_30 = ((((((((arr_29 [i_8]) ? (arr_36 [i_10] [11] [i_8] [i_10]) : (arr_32 [i_8])))) && ((!(arr_32 [i_8]))))) ? (min(1, 2147483136)) : (((!(arr_33 [i_8] [i_9] [i_8]))))));
                }
            }
        }
    }
    var_31 = (!-3997007762061760462);
    #pragma endscop
}
