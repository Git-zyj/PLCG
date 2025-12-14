/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= ((((var_8 >> (var_0 && var_8)))) & (max((-8576 <= var_1), var_7)));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [1] |= ((((((((arr_1 [8] [8]) | var_9))) & ((63 ? 1 : var_11)))) + ((((var_3 == (~var_11)))))));
        var_13 = (-((137 ? (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : 2147483647)) : (max((arr_2 [i_0]), (arr_1 [i_0] [i_0]))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 9;i_3 += 1)
                {
                    {
                        arr_14 [i_0] [4] [6] [i_3] = (((((~(1073741822 ^ 7)))) ? ((-255 ? ((var_6 + (arr_7 [i_0] [i_0] [i_2] [i_3]))) : ((((arr_10 [i_0] [i_1] [i_2 - 1] [i_3]) ? var_6 : (arr_8 [i_2] [i_0] [i_0])))))) : ((((var_11 % -120) << ((((var_4 >> (arr_12 [i_1] [i_0]))) - 157421269)))))));
                        arr_15 [i_0] [i_0] = ((20494 || (!1)));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_14 = ((((32767 ^ (arr_17 [i_4]))) << (((arr_19 [i_4]) - 3081520811051988625))));
        var_15 |= -var_8;
        var_16 += ((1 == (arr_18 [i_4])));
        var_17 = (max(var_17, ((((arr_17 [i_4]) ? (var_11 | 1) : ((((!(arr_19 [i_4]))))))))));
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    {
                        var_18 = ((((((-9223372036854775807 - 1) + (arr_16 [i_4])))) ? (arr_21 [i_5] [i_5] [i_5]) : 60));
                        var_19 = (((arr_20 [i_5 + 1]) ? ((var_9 ? var_3 : (arr_19 [i_6]))) : -1495264605));

                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            arr_30 [i_8] [i_6] [i_6] [i_7] [i_8] &= -var_9;
                            var_20 = (26 && ((((arr_20 [i_8]) ? (arr_17 [i_6]) : 251))));
                            var_21 = (((arr_28 [i_4] [i_5] [i_5] [i_7] [i_8]) * var_5));
                            var_22 += ((((((!(arr_26 [i_8] [i_6] [i_4]))))) != (arr_29 [i_5 + 1] [i_6] [i_5 - 1] [i_6] [i_5 - 1])));
                        }
                        var_23 = ((!(arr_21 [i_5] [i_5 + 1] [i_5])));
                        arr_31 [i_5] = ((var_5 ? var_3 : var_3));
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        arr_36 [i_9] = (!(-4 ^ var_7));
        var_24 = (!(!var_11));
    }
    #pragma endscop
}
