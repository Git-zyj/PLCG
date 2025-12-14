/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += ((((max(var_3, 9778))) ? -var_14 : (min(10885279982632534192, (~var_13)))));
    var_16 = (max(0, var_11));
    var_17 = (((40698 ? (((max(var_5, var_12))) : 285987658))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_18 = (min(((((max(0, (arr_1 [i_0 - 3])))) ? (max(108, 10385054894867023743)) : ((max(var_2, 779145649))))), ((max((((15138 >> (-21251 + 21259)))), ((23578 ? 227 : var_14)))))));
                    var_19 = ((((max(((var_6 ? var_4 : var_10)), -var_0))) ? var_12 : ((-2002618152483423916 ? var_0 : ((12 ? var_2 : (arr_0 [5] [i_2])))))));

                    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
                    {
                        var_20 ^= var_0;
                        var_21 = (min((min(-3340, (arr_5 [i_3] [i_2] [i_0] [i_0]))), (((max(1, -2147483640))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_22 ^= (arr_9 [i_0 - 1]);
                            var_23 = (((arr_8 [15] [8] [i_2] [i_0 - 4] [i_0] [i_0 - 3]) ? var_12 : -23579));
                            var_24 &= ((-37 ? (arr_10 [i_0] [i_0] [i_0] [i_0 - 3] [i_0 - 1]) : (arr_10 [i_0] [7] [i_0] [i_0 + 1] [i_0 - 2])));
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_25 = (min(var_25, ((((((var_9 ? 4008979637 : var_8))) ? (-3977555927851507462 & var_5) : (((~(arr_14 [i_1] [8])))))))));
                            var_26 = ((3054518930 ? (arr_0 [i_0 - 4] [i_0 + 1]) : (arr_6 [17] [i_0 + 1] [i_2])));
                            arr_18 [i_6] [i_0] [i_2] [13] [i_0] [i_0] = 0;
                            arr_19 [i_0 - 1] [i_0 - 2] [5] [i_0] [i_0] = var_10;
                        }

                        for (int i_7 = 2; i_7 < 22;i_7 += 1)
                        {
                            var_27 = (min(var_27, (((var_2 ? -5423934512699247427 : 1)))));
                            var_28 = -121;
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((var_1 ? var_12 : var_13));
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            arr_25 [i_0] [9] [i_0] [13] [i_0] = (arr_3 [8] [i_0 - 4] [i_0]);
                            var_29 = -1400731859;
                            var_30 = (min(var_30, (((0 / (arr_21 [i_0] [i_0] [i_0 - 4] [i_0] [i_0]))))));
                            var_31 |= (((var_5 + 2147483647) << (var_8 - 18)));
                            var_32 |= -68;
                        }

                        for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
                        {
                            var_33 = var_6;
                            var_34 = ((var_0 ? 1 : (((41837 == (arr_5 [i_9] [2] [i_1] [1]))))));
                            arr_29 [1] [i_0] [i_2] [i_0] [i_0 - 2] = (arr_9 [i_9]);
                            var_35 = var_10;
                        }
                        for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
                        {
                            arr_34 [i_0] [i_0] = ((var_11 % (~-5423934512699247427)));
                            arr_35 [i_0] = 0;
                            var_36 = (4096 % -1);
                        }
                        for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
                        {
                            var_37 = (var_4 ^ var_14);
                            var_38 = (!50340);
                        }
                        for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
                        {
                            arr_41 [i_0 + 1] [2] [10] [i_1] [i_2] [i_4] [i_0] = ((~(arr_20 [i_0] [i_1] [i_2] [i_2] [i_4] [15])));
                            arr_42 [17] [i_4] [i_0] [i_1] [i_0 + 1] = var_10;
                            var_39 = 30;
                            var_40 = (1 | var_2);
                            var_41 = (min(var_41, ((((var_8 ? (arr_13 [i_0] [i_1] [2] [i_2] [i_2] [i_4] [i_12]) : var_9))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 3; i_13 < 19;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 23;i_14 += 1)
                        {
                            {
                                arr_51 [i_0 - 3] [i_1] [i_0] [i_13 - 2] [i_14] = (1560425850601142399 != var_12);
                                var_42 = (max(var_42, (((((max((var_7 & var_12), (var_13 & var_10)))) ? ((min(-2040915211, 41007))) : (((var_3 < ((var_14 ? var_2 : var_7))))))))));
                                var_43 ^= (max(((+(((arr_16 [16] [i_2] [i_2] [4] [i_1] [17] [i_0]) ? 154 : var_14)))), ((max(8636595595692209370, (var_11 < var_4))))));
                                var_44 = (min(var_44, ((min(((var_5 ? (arr_6 [i_1] [i_2] [i_14]) : -20)), (arr_5 [i_14] [i_2] [i_1] [i_0]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
