/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0 - 2] = 1401331667;
        var_14 = ((var_2 ? ((((((arr_0 [i_0]) ? var_4 : var_6))) & (arr_0 [i_0 - 1]))) : (arr_0 [5])));
        arr_3 [i_0 - 1] [i_0] = (((((var_2 ^ var_11) ? ((var_2 ? (arr_0 [i_0]) : 1322384963)) : ((~(arr_0 [i_0 + 1]))))) > (arr_0 [i_0])));
    }
    for (int i_1 = 3; i_1 < 10;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_15 = (min(var_15, (((((!(arr_1 [i_1 - 3]))))))));
            arr_10 [9] [i_2] [i_1] = (max(2296, 14039870415960904676));
        }
        for (int i_3 = 1; i_3 < 7;i_3 += 1)
        {
            arr_13 [i_1] = var_13;

            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                arr_17 [3] [i_1] [i_1] [i_4] = ((-((4344938771771073673 - (arr_0 [i_1 + 1])))));
                var_16 = (arr_12 [i_1] [i_3 + 2]);
            }
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                arr_22 [i_1] [i_3 + 3] = (arr_18 [i_1] [i_3] [i_5]);
                var_17 = (min(4344938771771073673, ((1152921367167893504 ? -4344938771771073661 : -4344938771771073683))));
            }
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        {
                            var_18 = -71;
                            var_19 -= arr_5 [i_1 - 1] [i_8];
                            var_20 = (max((arr_12 [i_1] [i_1 + 1]), (((~((~(arr_1 [i_3]))))))));
                        }
                    }
                }
                arr_32 [1] [i_1] [i_3] [i_6] = var_4;
                arr_33 [i_1] [i_1] [8] [i_1] &= (arr_25 [i_1] [i_3]);
                var_21 ^= ((((!((max(var_13, (arr_9 [i_1 - 3] [i_3] [i_6])))))) ? 16256 : (((4344938771771073673 - -4344938771771073683) << ((((((var_13 ? -1152921367167893505 : var_2)) + 1152921367167893568)) - 63))))));
            }
        }
        arr_34 [i_1] = (max((arr_15 [i_1 - 1] [i_1 + 1] [i_1 - 1]), ((135 ? -16256 : 1419434326696444773))));
        arr_35 [6] [i_1] &= (~var_12);
        arr_36 [i_1] = (max((((((arr_26 [i_1] [i_1] [i_1] [i_1]) ? -16253 : (arr_29 [i_1] [i_1] [i_1] [10] [i_1]))) / ((max(var_0, 162))))), (var_9 <= var_3)));
    }
    var_22 = 1152921367167893505;
    #pragma endscop
}
