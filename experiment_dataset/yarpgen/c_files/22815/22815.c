/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((max((252 && 3), var_1)), (((((min(var_1, var_7))) ? ((var_11 ? var_3 : var_3)) : ((var_14 ? var_14 : var_11)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, (((((min((min((arr_7 [21]), (arr_2 [10] [1]))), (((!(arr_7 [i_0]))))))) ? (max(((max((arr_4 [i_0] [i_0]), (arr_7 [i_2])))), ((~(arr_2 [i_0] [i_1]))))) : (arr_2 [i_1] [i_1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_17, ((((((-(arr_4 [i_3 + 1] [i_4 - 2])))) ? (arr_0 [i_4 + 2]) : (((((-(arr_12 [i_1] [i_1] [i_1] [i_1]))) + ((max((arr_4 [15] [i_4 + 1]), (arr_10 [i_3] [15] [15] [i_3]))))))))))));
                                var_18 *= (977845086 / -1644138635);
                                var_19 *= (((min((max((arr_5 [i_3]), (arr_11 [17] [17] [12] [i_4 + 3]))), (((arr_6 [i_1] [16] [16]) ? (arr_6 [i_4] [17] [i_1]) : (arr_13 [i_0] [i_1] [i_0])))))) | (((((-(arr_4 [i_1] [i_0])))) ? (arr_10 [i_0] [i_1] [i_2] [i_1]) : (((arr_4 [4] [i_1]) ? (arr_2 [i_0] [i_0]) : (arr_7 [i_0]))))));
                                var_20 += ((+((((arr_2 [i_2] [18]) > (arr_10 [i_0] [i_0] [i_0] [0]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 *= (max(var_1, var_4));

    for (int i_5 = 3; i_5 < 23;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                {
                    var_22 = (((((3 ? 235 : (-32767 - 1))))) ? ((((min(19234, (arr_18 [i_5] [i_6] [i_5 - 3])))) * ((max((arr_21 [i_5 - 1] [15] [15] [i_7]), (arr_21 [i_5] [i_5] [i_6] [i_5])))))) : 648832009);
                    var_23 = (arr_4 [4] [i_6 + 1]);
                }
            }
        }
        var_24 += ((!(((-(((arr_0 [i_5]) ? (arr_14 [i_5]) : (arr_20 [2] [i_5]))))))));
        arr_22 [i_5] |= ((min(((-(arr_0 [i_5 + 2]))), (arr_3 [17]))));
        /* LoopNest 2 */
        for (int i_8 = 4; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    var_25 = (max((arr_28 [i_9] [7] [i_5 + 2] [i_5 - 3]), (min((min((arr_4 [i_5] [i_5 + 2]), (arr_0 [2]))), (((!(arr_12 [i_8] [i_8 + 3] [i_8 - 1] [20]))))))));
                    var_26 = (max((((((((arr_27 [i_5] [i_8] [i_5]) ? (arr_9 [10] [10] [1] [i_9]) : (arr_12 [i_5] [10] [10] [10])))) ? (((max((arr_21 [i_8] [19] [14] [i_8]), (arr_17 [4] [i_8]))))) : (arr_26 [9])))), (((arr_25 [i_5] [i_5] [i_5]) ? ((((arr_23 [i_9] [i_8]) / (arr_28 [i_5] [i_5] [i_5] [i_9])))) : (2465510452675156771 ^ -58)))));
                }
            }
        }
    }
    #pragma endscop
}
