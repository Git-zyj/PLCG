/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    var_14 = var_8;
    var_15 = min(var_2, var_2);
    var_16 += 118;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 = ((50397 ? (arr_4 [1]) : var_9));
                    arr_9 [i_1] [1] [1] [i_1] = (arr_8 [i_2 + 1] [i_1] [i_1] [i_1]);
                    arr_10 [21] [5] [i_1] [i_1] = (!var_10);
                }
            }
        }
        arr_11 [1] [i_0 - 1] = 106;
    }
    for (int i_3 = 0; i_3 < 0;i_3 += 1)
    {
        arr_14 [i_3] = 1;
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    {
                        arr_21 [i_6] [i_3] [i_5 - 1] [i_4] [i_3] [i_3 + 1] = arr_6 [3] [i_3];
                        var_18 = (max(var_18, (min((arr_4 [11]), var_3))));
                        var_19 = ((((min(98, (min(var_5, var_5))))) << (((arr_8 [i_3 + 1] [i_3] [i_5 + 2] [i_6]) ? (!0) : ((min((arr_8 [i_6] [i_3] [i_3] [i_3 + 1]), 152)))))));
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        arr_24 [8] = (min(-0, ((min((arr_15 [6] [i_7]), (arr_5 [i_7] [1] [i_7]))))));
        var_20 = ((((max((arr_17 [i_7] [i_7]), (arr_12 [i_7])))) * ((min((arr_18 [2] [i_7] [i_7]), (arr_17 [i_7] [i_7]))))));
        arr_25 [i_7] = (((!108) > 1923545832));
    }
    for (int i_8 = 2; i_8 < 23;i_8 += 1)
    {
        arr_28 [2] = 17;
        var_21 = ((max(1, (arr_26 [i_8 - 2] [i_8 + 1]))));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    {
                        arr_38 [i_8 - 1] [i_8 - 1] [i_8 - 1] [1] [15] [1] = ((((((arr_37 [i_8 - 2] [i_8 - 1] [1] [14]) | ((var_11 ^ (arr_29 [20])))))) ? (max((((arr_36 [3] [i_9] [1] [4]) >> (2419498900 - 2419498876))), -109)) : ((((max((arr_35 [20] [12] [i_10] [1]), (arr_36 [i_11] [1] [10] [i_8 + 1])))) ^ (((arr_36 [1] [i_9] [i_10] [0]) ? var_9 : (arr_32 [i_8 - 2] [i_9] [1] [5])))))));
                        arr_39 [i_8 - 1] [17] [7] [20] = ((((((-(arr_30 [i_10] [i_11]))))) ? ((1 ? (arr_37 [i_9] [9] [i_8 - 1] [14]) : (arr_37 [i_8 + 1] [22] [i_8 - 2] [i_8 - 1]))) : (((arr_35 [i_8 + 1] [2] [4] [i_11]) ? (arr_35 [2] [10] [i_10] [1]) : 47))));
                    }
                }
            }
        }
        arr_40 [1] = ((-((min((arr_26 [14] [i_8 + 1]), 129)))));
    }
    #pragma endscop
}
