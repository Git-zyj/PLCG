/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_5, (((var_12 ? var_18 : (var_15 >> var_7))))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_6 [0] [0] [i_2] [i_2] = ((~(((arr_4 [i_0] [i_0 + 1]) - (arr_4 [i_0] [i_0 + 1])))));
                    var_21 = max(((max((((1 ? 60386 : 39117))), (arr_2 [i_0 - 1])))), (min(var_15, (arr_1 [i_0 + 1]))));
                }
            }
        }
        arr_7 [i_0] [i_0] = (max(((min(((-18 ? -17 : -11768)), ((var_9 ? 23 : (arr_5 [i_0 + 1])))))), var_5));
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 23;i_6 += 1)
                    {
                        var_22 = ((((arr_11 [i_6 + 1]) || var_16)) ? (arr_14 [i_4]) : (arr_16 [i_3] [10] [10] [i_6 + 1] [i_3] [i_5]));
                        var_23 = ((!(arr_16 [i_6 + 1] [i_4] [i_4] [1] [i_3] [i_3])));
                    }
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        arr_21 [i_5] [i_3] [i_3] [i_5] = var_14;
                        arr_22 [i_3] [i_3] = (4 % -5116);
                        var_24 = ((((((var_9 >= var_8) ? var_9 : (min((arr_10 [i_4]), var_8))))) ? var_3 : ((((((((-127 - 1) ? -18 : 1))) && ((min(118, 4)))))))));
                    }
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        arr_25 [i_3] [i_3] [i_3] [i_5] [i_8] = var_19;
                        var_25 = (arr_17 [i_5] [i_4] [i_3]);
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        arr_28 [i_3] [i_4] [i_5] [i_9] [1] [i_4] = ((-97 ^ (arr_14 [i_9])));
                        var_26 = var_13;
                    }
                    arr_29 [i_3] [i_4] [17] [i_5] = ((+(((((arr_23 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) ? (arr_9 [i_3]) : (arr_11 [i_4]))) << ((max(var_15, (arr_8 [i_4]))))))));
                    var_27 = ((((((((arr_24 [i_3]) || (arr_14 [i_3]))) ? (arr_16 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) : (arr_8 [i_5])))) ? ((((max(36807, (arr_8 [i_3])))) << (((var_17 + 98) - 18)))) : (min(((min(var_1, (arr_8 [6])))), ((62 ? (arr_19 [i_3] [i_3] [i_4] [i_3] [i_3]) : (arr_27 [i_3] [i_4] [i_3] [i_5] [i_4])))))));
                    arr_30 [i_4] [i_4] [i_5] [21] = ((+(min((min((arr_13 [i_3] [i_3] [i_5]), (arr_26 [i_3] [i_3]))), (((var_7 >> (32767 - 32752))))))));
                }
            }
        }
    }
    var_28 = ((var_18 + (min((min(var_8, 127)), (-32767 - 1)))));
    var_29 = (min((max(var_1, (min(var_11, var_17)))), (min((var_3 & var_13), (min(var_17, var_17))))));
    #pragma endscop
}
