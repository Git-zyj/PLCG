/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((0 ? 869317513 : ((max(1, (203 % var_5)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_15 = (((var_5 >= -var_9) * ((-(((arr_2 [i_0] [i_1]) ^ var_4))))));
                    arr_6 [i_0] [i_1] [i_2] = (arr_5 [i_1] [15] [9]);
                    arr_7 [i_0] = ((arr_3 [i_0]) ^ ((-((((arr_3 [i_1]) <= 1))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
                    {
                        var_16 = (max(var_16, var_7));
                        var_17 = (~var_5);
                        var_18 = (max(var_18, 166));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                    {
                        var_19 = (min(var_19, (13204 <= 25169)));
                        var_20 = (max(var_20, (-30659 && -13223)));
                    }
                    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                    {
                        var_21 = var_1;
                        var_22 = (min(var_22, ((((((arr_17 [i_0] [6] [i_0] [i_0]) == (var_6 && 163))) ? var_13 : (((arr_15 [6] [6]) / (arr_15 [10] [12]))))))));
                        arr_18 [i_1] [i_0] [15] = (((((+((var_3 ? (-32767 - 1) : (-32767 - 1)))))) ? (arr_12 [i_0] [i_1] [i_1] [i_2] [8]) : (min(var_11, (arr_13 [i_0] [i_0] [i_5])))));
                        arr_19 [4] [18] [i_0] [i_0] [i_0] [i_5] = (((((689917524 ? 40364 : -689917524))) ? ((var_11 ? ((17 ? (arr_14 [i_5] [i_0] [i_0] [i_0]) : 51)) : 17)) : ((((arr_5 [18] [i_1] [i_2]) != var_11)))));
                    }
                }
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        var_23 = (min(var_23, (-32767 - 1)));

                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            arr_31 [i_6] [i_0] [i_0] = arr_11 [i_1] [i_8];
                            var_24 &= (arr_13 [i_0] [i_7] [i_8]);
                        }
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            var_25 = (min(var_25, (var_3 + 1)));
                            var_26 = ((-17 ? (arr_30 [i_0] [i_7] [11] [6] [i_6] [i_1] [i_0]) : (arr_17 [i_0] [i_1] [i_7] [i_9])));
                            arr_35 [i_0] [14] [i_0] [i_6] [i_7] [i_9] = var_10;
                        }
                        arr_36 [i_0] [12] [i_0] = (((((25169 | (arr_30 [i_0] [i_1] [i_1] [i_6] [i_6] [i_6] [13])))) ? (arr_23 [i_0] [i_1] [i_6] [17]) : 1490422295));
                        var_27 = (-(arr_3 [i_0]));
                        arr_37 [i_0] = ((((arr_5 [i_7] [14] [i_0]) + 9223372036854775807)) << (((arr_5 [i_1] [14] [i_7]) + 8516953405903618130)));
                    }
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        var_28 = (((-(arr_25 [i_0] [i_1] [i_6] [i_10] [i_0]))));
                        var_29 = (max(var_29, ((0 ? (!1) : (arr_14 [i_0] [i_1] [0] [i_10])))));
                        var_30 = (min(var_30, var_10));
                        var_31 = (max(var_31, (-126 <= 30659)));
                        arr_42 [i_0] [18] = ((-(arr_33 [i_0] [i_1] [i_6] [i_6] [i_10] [i_10])));
                    }
                    arr_43 [i_0] [i_0] [i_6] = (max((~2147483647), (arr_16 [i_0] [i_0] [i_1] [i_0] [i_6])));
                    arr_44 [i_0] [16] [i_0] = var_13;
                }
                var_32 = (min(var_32, ((max(1490422295, -8185289045391997240)))));
                arr_45 [i_0] [i_0] = (((1 ? 1261014071 : var_12)));
            }
        }
    }
    #pragma endscop
}
