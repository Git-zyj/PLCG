/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -var_6;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 &= (arr_1 [i_0] [i_0]);
        var_17 = (((((((arr_1 [i_0] [i_0]) ? 130 : (arr_0 [i_0] [i_0]))) & ((141 ? 23945 : (arr_0 [i_0] [i_0]))))) ^ (!var_4)));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_18 ^= (((((~(min(108, var_11))))) ? (((arr_1 [i_1 - 1] [i_1]) ? 0 : (((var_1 && (arr_1 [1] [19])))))) : (((var_14 >= (((arr_2 [i_1] [i_1]) ? (arr_3 [i_1]) : (arr_1 [i_1] [13]))))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    var_19 = (~-1024);
                    arr_8 [i_1] [i_2] [i_3] [i_3] &= ((+(min((arr_0 [i_2] [i_3]), (8 + 141)))));
                    var_20 = var_0;
                    var_21 = (~(((((min(4569, 1))) || (((var_1 ? 1033 : (arr_0 [i_1] [i_3]))))))));
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 13;i_4 += 1)
    {
        var_22 = (((((!((min((arr_1 [i_4] [i_4]), (arr_0 [i_4] [i_4]))))))) == -1030));
        arr_12 [i_4] [i_4] = (min(((min((arr_10 [i_4]), 1))), (((var_9 + 2147483647) >> (((arr_9 [i_4]) + 1643051202))))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 11;i_8 += 1)
                        {
                            {
                                var_23 ^= (((min(((-(arr_15 [1]))), ((65535 ? -1775147595 : 114)))) / ((~(((!(arr_21 [i_5] [11]))))))));
                                var_24 = (max(var_24, (((~(arr_9 [i_8]))))));
                            }
                        }
                    }
                    var_25 = ((!1) / (arr_22 [i_6]));
                    var_26 = ((((arr_21 [i_4 + 1] [i_5]) / 41601)));
                    arr_25 [i_4] [i_4] [i_6] = (((arr_14 [i_4] [i_4]) ? 114 : (1863563528 && 94)));
                }
            }
        }
        var_27 ^= ((((-(arr_17 [13] [i_4] [i_4])))) ? ((min((arr_11 [i_4] [i_4 - 1]), (arr_11 [i_4] [i_4 + 1])))) : (min((arr_10 [7]), (min(65533, (arr_16 [i_4] [i_4 - 1] [4]))))));
    }
    var_28 = var_9;
    #pragma endscop
}
