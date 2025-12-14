/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_16 &= 0;

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    arr_8 [i_0] [i_2] = (((((max(0, 387261569)))) ^ ((-0 / (max(var_0, (arr_4 [i_2] [i_1])))))));
                    var_17 += ((+(((!(((arr_5 [i_0] [i_0]) && var_7)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_18 = (max(((((-(arr_3 [i_0] [i_1] [i_2]))) / (arr_2 [i_0]))), ((-((387261569 ? 1 : 0))))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [1] = ((~(arr_10 [i_4 + 1] [i_4] [i_4 - 2] [i_4 - 2] [i_4 - 1])));
                                arr_14 [i_4] [i_3] [i_2] [i_2] [i_1] [i_0] [i_0] = 3907705727;
                                var_19 = var_15;
                                var_20 = (arr_7 [i_4] [i_4] [i_4 - 1] [i_4]);
                            }
                        }
                    }
                    var_21 = (((((~(arr_10 [i_0] [i_1] [i_2] [i_0] [i_1])))) ? -var_13 : -var_9));
                }
                for (int i_5 = 3; i_5 < 15;i_5 += 1)
                {
                    arr_19 [i_0] [i_5] = ((((min((arr_9 [i_0] [i_0] [4] [i_0]), (arr_9 [3] [i_1] [i_5 - 1] [i_0])))) ? (arr_7 [2] [i_1] [i_5] [i_0]) : (max(((~(arr_3 [i_1] [i_5 - 3] [i_5 - 3]))), (arr_3 [i_0] [i_1] [i_0])))));
                    arr_20 [i_5] = ((+((max((arr_7 [i_5 - 2] [i_5 + 1] [i_5 - 1] [12]), var_15)))));
                    var_22 = (~0);
                    var_23 = (arr_16 [2] [i_0]);
                }
                for (int i_6 = 1; i_6 < 15;i_6 += 1)
                {
                    arr_25 [i_0] [i_1] [i_1] [i_6] = (!var_10);
                    arr_26 [i_0] [i_0] [i_1] [0] |= ((((min((arr_17 [i_6]), (((!(arr_18 [i_6] [i_6 + 1] [i_6 - 1]))))))) || (arr_21 [i_0] [i_0] [i_0])));
                }
                var_24 = (arr_12 [i_0] [i_1] [i_1] [i_0] [i_1] [i_1]);

                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_25 ^= (((max((((arr_24 [i_0] [i_0] [i_0] [i_7]) || (arr_6 [i_0]))), ((!(arr_22 [i_7] [i_1] [i_0]))))) ? (((var_13 | (arr_18 [i_0] [i_0] [i_0])))) : (arr_11 [i_0])));

                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        var_26 = 4095;
                        arr_31 [i_7] [i_7] [i_1] [i_7] = ((+(max((arr_7 [i_8] [i_7] [i_1] [i_0]), ((-(arr_9 [i_0] [4] [13] [i_0])))))));
                        var_27 += (max((arr_11 [i_0]), (max((max(var_3, (arr_1 [i_0]))), (arr_30 [12])))));
                    }
                    arr_32 [i_7] = (arr_7 [1] [i_7] [i_1] [i_0]);
                }
                for (int i_9 = 1; i_9 < 15;i_9 += 1)
                {
                    var_28 += (max((arr_16 [i_0] [i_0]), ((((max(var_14, (arr_23 [i_0] [14] [i_0])))) ? (((max(var_12, var_14)))) : var_10))));
                    arr_35 [i_0] [i_1] [i_9] [i_0] = (((min(((-(arr_33 [i_1] [i_1] [i_1] [i_1]))), (((var_8 / (arr_23 [i_0] [i_1] [i_9])))))) > (((~(arr_0 [i_9 + 1] [i_9 + 1]))))));
                    arr_36 [i_9] [11] [i_9] = (((arr_33 [i_0] [i_1] [i_0] [i_0]) * ((max(((-(arr_21 [i_0] [7] [2]))), ((min((arr_10 [i_9 + 1] [13] [13] [i_1] [i_0]), var_5))))))));
                    var_29 += (arr_33 [i_0] [i_0] [i_1] [i_9]);
                }
                var_30 = (min(var_30, ((max(((-(arr_6 [i_0]))), ((max((arr_23 [i_0] [i_1] [i_1]), var_0))))))));
            }
        }
    }
    var_31 += var_2;
    #pragma endscop
}
