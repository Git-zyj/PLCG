/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_14 -= (arr_10 [i_2] [i_4]);
                                var_15 &= (((var_12 > (arr_1 [i_0]))));
                                arr_16 [i_0] [i_1 - 2] [20] [i_1 - 2] [i_0] [i_4] [i_4] = ((-1 & (min(var_12, (((arr_15 [1] [i_1] [12] [12] [i_1] [i_1]) ? 4252809686 : var_6))))));
                            }
                        }
                    }
                }

                for (int i_5 = 3; i_5 < 20;i_5 += 1)
                {

                    for (int i_6 = 1; i_6 < 20;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                        {
                            var_16 = arr_12 [i_5] [i_5] [17] [i_5] [17];
                            var_17 = (min(var_17, ((((var_2 & var_9) >= (arr_13 [i_6 + 2] [18] [18] [i_1 - 1]))))));
                        }
                        for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
                        {
                            var_18 ^= (((((var_10 ? 3097525419 : var_7))) && ((min(((var_11 ? var_6 : 995124361)), (((arr_12 [i_8] [i_6 + 1] [i_8] [i_6] [i_8]) ^ 352821882)))))));
                            var_19 = ((var_8 ? (((((var_12 ? var_11 : var_0))) ? (arr_20 [5] [i_0] [i_5] [i_5] [i_0] [i_0]) : (arr_4 [i_1] [i_1] [i_1]))) : ((((!((((arr_5 [i_0]) ? -5612 : var_8)))))))));
                        }
                        for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
                        {
                            var_20 += (((((657575224 ? (arr_26 [i_1] [i_1 - 1] [i_1] [i_1 - 3] [i_1 - 3]) : var_11))) ? -var_2 : var_12));
                            var_21 = (((arr_13 [i_6] [i_0] [i_0] [i_0]) < -3206));
                        }
                        var_22 = (max(((!(arr_26 [i_1 - 1] [6] [i_1 - 3] [i_1 - 3] [i_5 + 2]))), (((arr_3 [i_0]) < (var_11 <= var_5)))));

                        for (int i_10 = 1; i_10 < 20;i_10 += 1)
                        {
                            var_23 += ((~(max((!var_10), var_5))));
                            var_24 = (((((((var_7 ? var_9 : var_3))) ? (((arr_3 [i_0]) - var_11)) : var_8)) ^ ((1559026583 ? ((var_7 ? (arr_22 [i_0] [i_0] [i_0] [i_1 + 1] [i_5 + 1] [i_6] [i_0]) : 1559026598)) : -var_12))));
                            var_25 = (449441768 ? (min((var_4 + 0), (var_3 - var_8))) : ((9770 ? var_11 : var_1)));
                            var_26 = ((((((arr_23 [i_0] [i_1 - 2] [i_5 + 1] [i_5 + 1]) * 3942145416)) >= var_7)) ? ((var_0 ? (arr_1 [i_5 - 3]) : (!var_10))) : var_10);
                        }
                    }
                    for (int i_11 = 3; i_11 < 21;i_11 += 1)
                    {

                        for (int i_12 = 0; i_12 < 22;i_12 += 1)
                        {
                            var_27 -= ((((((2048 + 3205) << (((arr_5 [20]) - 631751797))))) ? (arr_26 [9] [i_1] [i_1] [i_1] [i_1]) : var_5));
                            arr_36 [i_12] [i_0] [i_5 - 3] [i_0] [i_0] = (((((~((~(arr_17 [i_12])))))) ? (((arr_31 [i_1 + 1] [i_1 - 2]) ? var_8 : -20129)) : (((min(var_10, var_10))))));
                            arr_37 [i_0] [i_0] [i_5] [i_11] [i_11] = (((((var_3 ? var_13 : var_2))) ? 772324248 : ((~(arr_25 [i_1 - 1] [i_5 - 3] [i_0] [i_5 - 3] [i_12])))));
                        }
                        arr_38 [i_0] [i_11] [1] [i_11] = (((2478548971 <= 10575) >= ((max((arr_0 [i_1 + 1] [i_0]), var_2)))));
                    }
                    for (int i_13 = 1; i_13 < 20;i_13 += 1)
                    {
                        var_28 = ((!(arr_7 [i_0] [i_0])));
                        var_29 = (min(var_29, var_5));
                    }
                    var_30 = (min(var_30, (~var_6)));
                    var_31 = var_4;
                }
                for (int i_14 = 0; i_14 < 22;i_14 += 1)
                {
                    arr_44 [i_14] [i_0] [i_0] = -6439;
                    var_32 = ((~((((arr_42 [i_0] [i_0] [i_14] [i_14]) || (arr_42 [i_0] [i_0] [i_0] [i_0]))))));
                }
                var_33 = (max(var_33, (arr_39 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1])));
                var_34 = arr_9 [i_0] [i_0] [5] [i_0];
            }
        }
    }
    var_35 ^= var_13;
    var_36 = -var_5;
    #pragma endscop
}
