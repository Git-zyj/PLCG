/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_6));
    var_19 = (min(var_19, var_11));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_20 = (max(var_20, var_7));
                var_21 = (max(var_21, (((-((min((var_5 > 248), 248))))))));
                arr_6 [i_0] [i_0 - 2] [8] &= (arr_0 [i_0 + 2]);

                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    var_22 ^= min((!var_9), (((arr_5 [i_0 - 1]) ? (arr_5 [i_0 + 2]) : (arr_5 [i_0 + 2]))));

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_23 |= (((!(min(var_2, (arr_11 [i_0]))))) ? (var_2 / 7) : (((min((!8), 7)))));
                        var_24 = (min(var_24, ((max(((((arr_0 [i_0 + 1]) && (arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])))), (-127 - 1))))));
                        var_25 &= (arr_2 [i_1] [i_1]);
                        var_26 -= (((-7 % 1) == (-230273110 | 572259295)));
                        var_27 += (((((((arr_1 [i_2 - 1]) < 1))) < (var_0 < var_7))));
                    }

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        var_28 ^= (((572259304 ? 13588978454107062716 : -572259305)));
                        var_29 = (max(var_29, 15888619041666528963));
                        arr_14 [0] [i_0] [i_0] [i_4] &= -1526301103;
                        var_30 &= (arr_5 [i_2 - 1]);
                    }
                    var_31 = (max(var_31, ((max((((~(min(var_10, var_11))))), (arr_9 [i_0 + 1] [i_0 - 1] [i_2 + 1] [i_2 + 1] [i_2]))))));
                }
                for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                {
                    arr_17 [4] [4] [4] |= (arr_13 [i_5]);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_32 = (min(var_32, var_10));
                                var_33 = (max(var_33, var_10));
                                var_34 = (min(var_34, (~0)));
                                var_35 = (min(var_35, (((max((arr_7 [12] [i_0 - 2] [i_7 + 2] [i_6]), (0 <= 8)))))));
                                var_36 = (min(var_36, var_14));
                            }
                        }
                    }
                    var_37 ^= (((var_5 / 131071) || ((max(-2147483644, var_12)))));
                    var_38 -= 1;
                }
                for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
                {
                    var_39 &= (max((min((255 ^ 957506922), ((max(-572259304, 1))))), var_13));
                    var_40 = (max(var_40, (((var_2 ? (max((arr_11 [i_0 + 1]), var_12)) : ((min(var_2, (0 + 957506907)))))))));

                    for (int i_9 = 1; i_9 < 13;i_9 += 1)
                    {
                        arr_30 [4] [4] [4] [i_9] [1] [4] &= (((((-6294862231436318219 ? (arr_0 [i_1]) : (arr_0 [i_1])))) && ((min(((((arr_2 [i_9 - 1] [9]) ? (arr_29 [i_0] [i_1] [9] [1] [i_1]) : 1))), (min((arr_13 [i_1]), (arr_20 [i_0] [i_0] [i_8] [4]))))))));
                        var_41 = (min(var_41, ((((((arr_8 [i_0 - 1]) == 8)) ? (((arr_18 [i_0 + 2] [i_0 + 1]) ? var_3 : 957506922)) : ((((arr_8 [i_9 - 1]) ? (arr_8 [i_1]) : 8))))))));
                        var_42 = (min(var_42, (arr_24 [i_0])));
                        var_43 = (max(var_43, var_2));
                    }

                    for (int i_10 = 3; i_10 < 13;i_10 += 1) /* same iter space */
                    {
                        var_44 *= ((~(arr_11 [i_0 + 2])));
                        var_45 -= (arr_22 [i_0] [7] [i_8] [i_10] [i_0]);
                    }
                    for (int i_11 = 3; i_11 < 13;i_11 += 1) /* same iter space */
                    {
                        var_46 += (min(((min(1, (arr_7 [i_11 + 1] [i_11 + 1] [i_0 - 1] [i_11 + 1])))), ((~(min(var_6, var_13))))));
                        var_47 &= ((((min((var_10 * 0), (arr_12 [i_0 - 2] [i_8] [i_0 - 2] [i_8] [i_11 - 1])))) ? (min(((min(438124549, var_11))), (min(1883528436374303403, 1)))) : ((((!(arr_4 [9] [i_0 + 2])))))));
                        var_48 = (max(var_48, (((((min(var_10, ((min((arr_8 [i_0]), var_13)))))) ? var_10 : ((min(((min(var_2, 0))), (arr_3 [11] [11])))))))));
                        arr_35 [i_0] [i_0] [i_0] [i_0] &= 46731;
                    }
                }
                for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
                {
                    var_49 = (max(var_49, (((((((((arr_10 [i_1]) ^ var_17))))) | (1556600387 & 7278914730151277206))))));
                    var_50 = (min(var_50, (((arr_33 [i_0] [i_0] [i_1] [i_0]) < var_4))));
                }
            }
        }
    }
    #pragma endscop
}
