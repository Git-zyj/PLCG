/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((((((var_12 >> (var_17 - 4423203764649035571)))) ? ((((!((min(var_3, var_7))))))) : (max(var_7, var_1)))))));
    var_19 = ((-(min(((min(35, -35))), var_11))));
    var_20 ^= (((max(var_0, (~var_6))) + ((min(var_5, ((max(var_13, var_12))))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_21 = (min(var_21, ((((min((arr_0 [i_0]), (arr_0 [i_0]))) ^ (((!(arr_0 [i_0])))))))));
        arr_2 [i_0] = (min(((max((min((arr_0 [i_0]), (arr_1 [i_0]))), (arr_0 [i_0])))), (max((min(0, -36)), 119))));
        var_22 -= ((-(((!(arr_0 [i_0]))))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_23 = ((((((((((arr_3 [i_0] [i_1]) + 2147483647)) >> (((arr_0 [i_1]) + 34)))) % (((arr_1 [i_0]) * (arr_0 [i_0])))))) ? (((((arr_0 [0]) >= (arr_0 [i_0]))))) : ((-(((arr_4 [i_0]) / (arr_3 [i_0] [i_1])))))));
            var_24 = (min((((arr_4 [i_0]) >> (((arr_0 [i_1]) + 39)))), (((-(arr_1 [i_0]))))));
            var_25 = (((arr_3 [i_0] [i_1]) ^ (((!(arr_3 [i_0] [i_1]))))));
        }

        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            var_26 *= ((max((arr_1 [2]), (arr_6 [i_2 - 1]))));
            var_27 = (min(((~((max((arr_0 [i_0]), (arr_5 [i_0] [i_2 - 1])))))), 35));
        }
    }
    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                arr_22 [i_3] [i_6] [i_5] [i_7] = ((-(((arr_15 [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 - 1]) ? (arr_15 [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 + 1]) : (arr_15 [i_3 - 1] [i_3 + 1] [19] [i_3 + 1])))));
                                var_28 *= ((!((max((arr_8 [i_3 + 1]), (((!(arr_20 [i_5] [i_5] [i_5])))))))));
                                var_29 = ((((((((arr_14 [1] [i_5]) / (arr_17 [i_6] [i_6] [i_6] [i_6]))) + (max((arr_13 [i_3] [i_3] [i_7]), (arr_18 [i_3] [i_3] [i_3 + 1])))))) && ((max((arr_8 [i_3 - 1]), ((((arr_20 [i_3] [i_3] [i_3]) != (arr_15 [i_3] [i_3] [i_5] [i_5])))))))));
                                var_30 += (-69 - -1530455886);
                                arr_23 [i_5] [i_6] [12] [12] [i_5] &= ((201 ? 1 : 1));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 4; i_9 < 21;i_9 += 1)
                        {
                            {
                                var_31 = ((-(((arr_25 [i_9 - 4] [i_3 + 1] [i_3 + 1] [i_3]) / (arr_11 [i_3 - 1] [i_3 - 1] [i_3 + 1])))));
                                arr_30 [i_3 + 1] [i_4] [i_5] [i_4] [i_5] = ((-(min((((-(-32767 - 1)))), (max((arr_11 [i_3 - 1] [i_3 - 1] [i_9 - 4]), (arr_27 [i_3 + 1] [1] [15] [i_3 + 1] [1] [i_9 - 1] [1])))))));
                            }
                        }
                    }
                }
            }
        }
        var_32 *= (min(((((arr_19 [i_3] [i_3 + 1] [i_3] [i_3 - 1] [i_3 - 1] [i_3]) || (arr_19 [i_3] [i_3 - 1] [i_3] [i_3] [i_3] [i_3])))), (((arr_19 [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3] [i_3 - 1] [i_3]) >> (arr_19 [i_3] [i_3 - 1] [i_3] [6] [i_3 + 1] [i_3])))));
        arr_31 [i_3] [i_3] &= (arr_21 [i_3 - 1] [i_3 + 1] [i_3 + 1] [3] [i_3 + 1] [i_3]);
    }
    #pragma endscop
}
