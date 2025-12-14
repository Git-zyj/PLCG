/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_0 >= var_11);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_1] = (~var_13);
                    arr_9 [i_0] [i_1] [i_2] = var_15;
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_18 = (max(82, (((!(arr_11 [i_0] [i_0] [i_0] [i_0]))))));
                                var_19 = (max(0, (!65532)));
                                arr_18 [i_0] [i_0] [i_1] [i_2] [i_2] [i_4] [i_4] &= ((((max(-17, (arr_10 [i_0] [i_3 - 2] [i_0] [i_3 - 3] [i_3 - 2] [i_3 - 3])))) << (-var_14 + 32)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (min(var_20, ((max(8388608, -109)))));
    var_21 = var_0;
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            {
                arr_24 [i_5] [i_5] = (!((max(var_6, (arr_0 [i_5 - 1])))));

                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        var_22 = ((arr_10 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_6] [i_5 - 1] [i_5 - 1]) ? 4622 : (arr_22 [i_5]));
                        var_23 = (min(var_23, ((var_3 ? -97 : var_11))));
                    }
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        arr_34 [i_5] [i_5] [i_7] [i_9] = (max((max((max(-97, 0)), -18)), (((((max(1, (arr_32 [i_5 - 1] [i_5 - 3] [i_5] [i_5] [i_7] [i_9])))) && var_14)))));
                        var_24 = ((1 >> (-54 + 77)));
                        var_25 = ((((96 ? var_8 : 59)) ^ (((((4622 ? var_9 : (-127 - 1)))) ? ((var_9 ? -1320485119 : 0)) : (arr_25 [i_5])))));
                    }
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        arr_37 [i_6] [i_6] [i_7] [i_6] |= ((((!(((0 ? (-127 - 1) : 1))))) ? ((56 | (arr_1 [i_5 + 1] [i_5 + 1]))) : (((111 ? ((60913 << (124 - 115))) : (arr_20 [i_6] [i_10]))))));
                        arr_38 [i_5] = (((((1353079077 > (arr_17 [i_5 + 1] [i_5 - 2] [i_5 - 2] [i_5 - 2] [i_5 - 3] [i_5 - 1] [i_5 - 2])))) * -1393578150));
                        var_26 = max((min(0, 8)), (((var_1 ? (min((arr_26 [i_5 - 2] [i_6] [i_7] [i_7]), var_7)) : ((var_12 ? -84 : (arr_10 [i_5 + 1] [i_5 + 1] [i_7] [i_7] [i_10] [i_5 + 1])))))));
                        var_27 = ((2 ? (max((arr_1 [i_5 + 1] [i_5 - 1]), 2267078691078478583)) : ((((var_9 ? var_5 : (arr_13 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1])))))));
                        var_28 = (min(((8574808198759281541 ? var_3 : (arr_4 [i_5 - 2] [i_5 - 2]))), ((127 ? (arr_4 [i_5 - 2] [i_5 - 2]) : var_6))));
                    }
                    var_29 = var_6;
                }
            }
        }
    }
    #pragma endscop
}
