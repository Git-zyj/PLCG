/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_1] = var_3;
                    arr_10 [i_0] [i_1] [i_2] = (arr_0 [i_1]);
                    arr_11 [i_0] [i_1 - 1] = (((arr_0 [i_0]) ? ((((!(arr_0 [i_0]))) ? (max((arr_7 [19] [i_0] [i_0]), (arr_2 [i_2]))) : (arr_2 [i_0 + 1]))) : (!var_16)));
                    var_20 = ((((((arr_2 [i_0]) ? (max((arr_2 [i_0 - 2]), var_0)) : (min(2924, (arr_2 [i_0])))))) ? ((((min((arr_0 [i_1]), 2090555803))) ? ((min((arr_6 [i_2] [i_1] [i_0 - 2]), 48))) : (arr_6 [i_0 - 1] [7] [i_0 - 2]))) : (((max(1, 38))))));

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        arr_14 [9] [11] [i_1] [i_3] [i_0] [i_3 - 2] = ((((!(arr_5 [i_0]))) ? var_8 : (((var_9 ? -32 : (arr_0 [i_0]))))));
                        arr_15 [i_3] [i_3] [i_2] [i_3] [i_3] [i_3] = (20 <= (arr_8 [i_3 - 2] [i_1 - 2]));
                        arr_16 [i_0] [19] [i_2] [i_1] = 2940;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_21 &= (1 ? 1 : 49);
                        var_22 &= var_2;
                    }
                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        var_23 = (min(var_23, (((+(((arr_3 [i_0] [i_0 - 2]) ? (arr_3 [i_1 + 2] [18]) : (arr_3 [i_0 + 1] [i_0]))))))));

                        for (int i_6 = 4; i_6 < 20;i_6 += 1)
                        {
                            var_24 &= var_14;
                            arr_25 [i_6 + 1] [i_6] [i_6] = (min((!48), (((arr_24 [i_0] [1] [i_2] [1] [i_0] [6]) ? (((-2961 + 2147483647) >> (((arr_8 [i_2] [i_1]) + 5117686849640992675)))) : ((((arr_2 [i_0 + 1]) > var_0)))))));
                        }
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            var_25 ^= var_7;
                            var_26 = (min(var_26, ((max((((arr_24 [i_0 - 1] [i_1 - 1] [i_1 - 2] [i_1 + 3] [i_5 - 1] [i_5 + 1]) ? (arr_24 [i_0 - 1] [i_1 - 1] [i_1 - 2] [i_1 + 3] [i_5 - 1] [i_5 + 1]) : 2924)), (1 || 2939))))));
                        }
                        for (int i_8 = 1; i_8 < 20;i_8 += 1) /* same iter space */
                        {
                            arr_32 [i_2] [i_0] [i_2] [i_0] [i_0] &= ((-((~(arr_27 [i_2])))));
                            var_27 = (min(var_27, var_15));
                        }
                        for (int i_9 = 1; i_9 < 20;i_9 += 1) /* same iter space */
                        {
                            arr_36 [i_9] = ((15769391978117133060 ? -32 : -4611686018427387904));
                            arr_37 [i_9] = (max((min((((arr_8 [i_1 + 2] [i_1 - 3]) ? var_2 : var_7)), (arr_29 [i_5 - 1] [i_0 - 1]))), 47));
                            arr_38 [1] [1] [i_9] [i_0] [i_9] = (max(((((arr_21 [i_0 - 1] [i_0] [9] [i_1] [i_0 - 1] [i_1 - 3]) >= (min(var_16, var_7))))), (((arr_2 [i_0]) ? (var_15 && 49) : var_16))));
                        }
                        arr_39 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = arr_30 [i_0] [i_0 + 1] [i_1] [i_2] [i_5];
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        arr_42 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] = (arr_23 [i_0] [i_1 - 1] [i_2] [i_1 - 1] [i_10] [i_10]);
                        arr_43 [i_2] [i_2] [i_2] = (((arr_12 [i_1 - 1] [i_0 + 1] [22] [1] [i_0] [i_0]) ? var_4 : (arr_12 [i_1 + 1] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0])));
                    }
                }
            }
        }
    }
    var_28 = (((((((!(-32767 - 1))) ? var_10 : (min(var_11, var_19))))) ? (((!223) ? (223 || 0) : ((var_13 ? -2090555792 : var_13)))) : var_3));
    var_29 = var_10;
    /* LoopNest 3 */
    for (int i_11 = 0; i_11 < 22;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 22;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 18;i_13 += 1)
            {
                {
                    var_30 += -2927;
                    arr_53 [i_12] [i_12] = (arr_45 [i_11] [i_13 + 4]);
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 22;i_14 += 1)
                    {
                        for (int i_15 = 2; i_15 < 20;i_15 += 1)
                        {
                            {
                                var_31 = (min(var_31, (((-((var_10 ? var_2 : (arr_50 [i_11]))))))));
                                var_32 = (min(var_32, ((max((((!(((var_18 ? (arr_2 [19]) : (arr_0 [i_11]))))))), (min((arr_45 [i_11] [i_12]), (arr_8 [9] [i_15 - 2]))))))));
                                var_33 += (max(((((max((arr_17 [i_15] [i_13] [i_14] [14]), var_11))) ? ((var_9 + (arr_34 [i_11] [9] [i_13] [i_14] [i_15]))) : 6917529027641081856)), (((((((var_4 + 2147483647) >> (((arr_44 [i_12]) + 8395318101055003918))))) ? ((~(arr_47 [i_15] [i_15]))) : 1)))));
                            }
                        }
                    }
                    arr_60 [i_11] [i_12] = (255 ? 1 : 1160931571342201117);
                }
            }
        }
    }
    #pragma endscop
}
