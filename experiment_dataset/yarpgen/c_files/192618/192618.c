/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= ((~((var_5 * (((min(var_3, var_6))))))));

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_11 -= var_8;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_12 = -var_7;
                        arr_12 [i_0] [i_0] [i_1] [i_2] [i_3] = ((~(min((((~(arr_1 [i_3])))), var_0))));
                        var_13 = (min(var_13, ((((((arr_7 [i_0] [i_1] [i_2]) >= (arr_11 [i_0] [i_0] [i_2]))) ? ((((((!(arr_7 [i_1] [i_1] [i_3]))))) | (arr_9 [i_1] [i_1] [2] [i_1] [6]))) : ((((arr_4 [i_1]) % (arr_3 [i_0 - 1])))))))));
                        var_14 *= var_4;
                    }
                }
            }
        }
        for (int i_4 = 1; i_4 < 7;i_4 += 1)
        {
            var_15 = ((((-(min((arr_14 [i_4]), 6336775064598453277)))) > ((min((arr_8 [i_4 + 2] [0]), (arr_8 [i_4 - 1] [i_4]))))));
            arr_15 [i_0] = 3386269546;
            var_16 = (max(var_16, (arr_4 [i_0])));
        }
        var_17 = var_3;
    }
    var_18 = var_5;

    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            arr_22 [i_6] = ((+((((arr_19 [i_5]) >= (arr_19 [i_5]))))));
            var_19 = (((((arr_18 [i_5]) - (arr_19 [i_6]))) * (!var_4)));
        }
        for (int i_7 = 1; i_7 < 16;i_7 += 1)
        {
            var_20 += (((((arr_17 [i_7 + 2] [8]) * (((arr_17 [9] [i_5]) / var_1)))) & (arr_23 [i_7 - 1] [5] [i_5])));
            var_21 = ((var_2 && (((var_1 / (arr_20 [i_7 + 1]))))));
        }
        arr_25 [i_5] [i_5] = ((((((var_9 ? (arr_23 [i_5] [1] [i_5]) : var_7)))) ? (min((arr_21 [i_5]), 47363)) : (((((arr_16 [i_5]) ? (arr_16 [i_5]) : (arr_23 [i_5] [i_5] [i_5])))))));
        var_22 = 48;
    }
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {
        var_23 |= (arr_20 [i_8]);
        arr_29 [i_8] |= (((arr_28 [i_8]) ? (((!(arr_27 [i_8] [5])))) : ((var_9 ? (((var_4 || (arr_16 [i_8])))) : (min((arr_23 [i_8] [i_8] [i_8]), 268402688))))));
        arr_30 [i_8] = (((arr_27 [2] [2]) < (min(((((arr_16 [10]) >= (arr_16 [i_8])))), (min((arr_19 [i_8]), var_7))))));
    }
    var_24 = (min(var_24, (((!(((min(var_1, var_8)) != var_4)))))));
    #pragma endscop
}
