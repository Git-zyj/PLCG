/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            arr_6 [i_0] [13] = 1748075002;
            var_15 = (-((((arr_3 [i_0 - 4] [i_0 - 4]) ? (arr_0 [i_0]) : 3457754528))));
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        {
                            arr_14 [i_0] [i_2 - 1] = (83312972 ? ((-(min(var_14, 3716284377)))) : (max(83312972, (arr_8 [i_0]))));
                            arr_15 [i_0] [i_3] [i_2 + 1] [i_0] [i_0] = ((((arr_5 [i_0]) >> ((((arr_2 [i_0]) || var_7))))) * (((((max((arr_12 [i_0 - 4] [8] [i_2 + 3] [i_1 + 2] [1]), 4294967295)) == (((arr_12 [i_0] [i_0] [i_2] [i_2] [i_4]) ? (arr_9 [i_3] [8] [i_0]) : (arr_11 [i_1] [i_1]))))))));
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            var_16 = (((arr_7 [i_0 - 2]) && (arr_7 [i_0 + 2])));
            arr_20 [i_0] [8] &= (~((-(max(var_13, (arr_16 [i_0 - 3] [2]))))));
            var_17 += ((arr_8 [i_0 - 4]) ? (arr_13 [i_0 + 2] [12] [i_0 - 1] [12] [i_0 + 2]) : (((((((((arr_0 [i_0]) || 248)))) == var_4)))));
            var_18 = (max(var_18, (max((((min((arr_12 [i_0] [i_0] [i_0] [i_5] [i_5]), 4294967295)) % (arr_3 [i_0] [i_5]))), (((-(((!(arr_2 [0])))))))))));
        }
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 12;i_7 += 1)
            {
                {
                    var_19 ^= var_14;
                    arr_27 [i_0] [i_0] [i_6] [i_7] = min((max(((var_6 ? var_0 : (arr_2 [i_0]))), ((66977792 ? (arr_3 [i_7 - 1] [i_6]) : 2075467510)))), (arr_24 [i_6 - 3]));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 7;i_8 += 1)
    {
        var_20 = (min(var_20, (~1574867744)));
        arr_30 [i_8] = ((-552546158 >= (arr_3 [i_8 - 1] [i_8 - 1])));
    }
    var_21 = ((min(var_5, 2214883058)));
    var_22 = (var_3 * ((var_4 ? 732662172 : (2775657540 * 340954245))));
    var_23 = max((((((var_11 ? var_10 : var_1))) ? (var_2 == var_2) : var_10)), var_10);
    #pragma endscop
}
