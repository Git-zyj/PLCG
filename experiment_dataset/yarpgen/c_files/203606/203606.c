/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((~(((var_10 | var_13) ? (var_14 + var_5) : (~var_14))))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_20 = (min(var_20, (((~((((-(arr_2 [i_0]))) / (((arr_1 [3]) ? (arr_0 [i_0] [2]) : 1)))))))));
        var_21 = (arr_1 [9]);
        arr_3 [i_0] [i_0] = (min(((167 ? 1661722900 : (arr_0 [i_0] [i_0]))), ((14 - (arr_0 [i_0] [i_0])))));
        var_22 = (((8865 >= 1661722901) ? 1661722915 : var_0));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_23 *= 5649561408325056375;
        var_24 += (((((((((arr_2 [i_1]) ? (arr_1 [i_1]) : var_2))) ? (~96) : 1661722894))) && (~var_2)));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 19;i_4 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 18;i_5 += 1)
                        {
                            arr_15 [i_3] [i_1] [i_3] [i_1] [i_3] = (((((1 ? var_3 : var_9))) ? -var_7 : 2947149635469728564));
                            var_25 += ((arr_11 [i_4 + 1] [i_4] [i_5 + 1] [i_4]) ? (arr_11 [i_4] [i_1] [i_1] [i_1]) : (arr_14 [i_4 - 2]));
                            var_26 = (~var_9);
                            arr_16 [i_3] [i_1] [i_1] [i_1] [i_1] = arr_11 [i_4] [i_3] [i_3] [i_1];
                        }
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            var_27 |= arr_5 [i_1];
                            var_28 = (min(var_28, (arr_10 [i_4])));
                        }
                        for (int i_7 = 1; i_7 < 20;i_7 += 1)
                        {
                            arr_22 [i_1] [i_1] [i_3] [i_1] = ((((((var_16 ? var_14 : var_17)))) ? (min((min((arr_4 [i_1] [i_3]), var_2)), ((var_5 ? 2947149635469728568 : -97)))) : 2559657267));
                            arr_23 [i_1] [i_3] [i_3] [i_4] [i_7] [i_7] = ((-(arr_1 [1])));
                        }
                        var_29 = (((((((arr_7 [i_1] [i_3] [i_4]) < ((1661722910 ? 181 : var_15)))))) ^ (arr_5 [i_1])));
                        arr_24 [i_1] [i_2] [i_1] [i_4] |= (((var_15 ? (arr_14 [i_4 + 1]) : 1661722894)));
                    }
                }
            }
        }
        arr_25 [i_1] = ((~(arr_14 [i_1])));
    }
    for (int i_8 = 3; i_8 < 12;i_8 += 1)
    {
        arr_29 [i_8] = arr_17 [i_8 - 2] [i_8] [i_8] [i_8] [i_8 - 3] [i_8];
        arr_30 [i_8] [i_8] = (((((arr_14 [i_8]) ? (min(4194303, 2947149635469728557)) : (min((arr_18 [20]), (arr_12 [i_8] [i_8] [1] [i_8] [i_8 - 1]))))) < 1661722915));
        var_30 = ((776535013 >= (((arr_10 [1]) * var_10))));
    }
    #pragma endscop
}
