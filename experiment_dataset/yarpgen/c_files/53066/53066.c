/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((((var_0 || var_5) && (!1))))) == var_9));
    var_12 = ((((((var_10 ? var_2 : var_10)) + (((var_7 ? var_9 : var_4))))) >= (((min(1, 8634))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_13 = (((((min(8634, 0)))) + (((var_7 & var_7) ? (((~(arr_6 [i_0] [i_1])))) : (min(1, var_9))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 = (min(4169675734, ((~(((!(arr_2 [10] [i_1]))))))));
                                var_15 = (!((((((arr_8 [i_2] [i_1] [i_3 + 1] [i_4]) >= var_6)) ? (arr_10 [i_3] [i_3] [i_3 + 1] [i_4] [i_4] [i_4]) : (arr_10 [i_3] [i_2] [i_3 + 1] [i_2] [i_3] [i_2])))));
                                var_16 -= 8634;
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        arr_17 [i_0] [i_2] [i_2] [i_2] [4] [1] = ((var_2 ? ((var_0 ? (arr_8 [i_2] [i_2] [i_1] [i_2]) : var_4)) : -var_7));
                        arr_18 [i_2] [i_5] [i_2] [i_2] [i_1] [i_0] = ((!((((arr_12 [i_0] [i_0] [i_1] [i_2] [i_5]) ? (arr_14 [i_0] [i_2] [i_0] [i_0 - 1] [i_5] [3]) : var_10)))));
                        var_17 = (arr_15 [i_5] [i_5] [i_1] [i_1] [i_0] [i_0]);
                    }
                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        var_18 = ((((min(var_4, ((var_9 ? (arr_21 [2] [i_1] [i_1] [i_2] [i_2]) : var_5))))) ? (!1) : (((arr_8 [i_2] [11] [i_6 + 1] [i_6 - 1]) ? var_10 : var_2))));
                        var_19 = ((1 ? var_0 : ((((((256341486 ? var_9 : 256341486))) ? -25 : 1)))));
                        var_20 = (((((+(((arr_21 [i_0] [i_0] [i_0] [i_0 + 2] [i_2]) ? var_0 : (arr_2 [i_2] [16])))))) ? (((max((arr_2 [i_2] [i_1]), var_3)) ^ var_9)) : (arr_10 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
                    }
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {

                        for (int i_8 = 1; i_8 < 19;i_8 += 1)
                        {
                            arr_27 [i_2] [i_1] [i_7] [1] [i_8] [i_1] = (min(var_8, (256341486 || 256341486)));
                            var_21 = (arr_14 [i_8] [i_2] [i_7] [i_2] [i_2] [i_0]);
                            var_22 = (((((var_8 ? (max(var_3, (arr_0 [i_8] [i_7]))) : (arr_19 [i_1] [i_8 + 2] [20] [i_8] [8] [i_8])))) ? ((((min((arr_24 [i_8] [i_7] [17] [i_1]), var_10))) ? var_0 : (!1092822836960740524))) : (((2147483647 ? 254 : 0)))));
                            var_23 = (min((arr_2 [i_0] [i_7]), (!175)));
                        }
                        arr_28 [i_2] [i_2] [i_1] [i_1] [i_0] [i_2] = ((min(((35 ? 254 : 0)), (arr_10 [i_0] [18] [i_1] [i_2] [i_7] [i_7]))) == (((-(((arr_8 [i_2] [i_1] [i_1] [i_2]) ? (arr_8 [i_2] [i_2] [i_1] [i_2]) : (arr_22 [i_2] [i_2] [i_0])))))));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        var_24 ^= var_9;

                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            var_25 = ((-((8634 ? 1 : 0))));
                            var_26 = (arr_16 [i_2] [i_2]);
                            arr_34 [i_2] [i_2] = 1;
                        }
                        var_27 *= ((var_8 ? ((117440512 ? 1 : 2097151)) : (arr_25 [i_0] [i_0 - 1] [i_1] [i_1] [i_2])));
                        arr_35 [i_2] [i_2] [i_2] [5] [i_2] [i_0] = (!var_5);
                        var_28 = (~(((arr_19 [4] [i_1] [4] [i_2] [i_9] [i_9]) ? var_4 : (arr_30 [i_9] [i_2] [i_1] [i_0]))));
                    }
                }
            }
        }
    }
    var_29 |= ((!((min(((var_5 ? var_5 : var_5)), (var_2 == var_1))))));
    #pragma endscop
}
