/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((var_7 << (var_1 - 98))))));
    var_17 = ((-(min(var_14, var_3))));
    var_18 = ((var_9 ? 0 : (((((32767 ? var_4 : var_0))) ? 1 : (((1 ? var_3 : var_1)))))));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max((((var_2 - var_8) ? (min(1, var_12)) : (var_5 - var_0))), ((((arr_0 [i_0] [i_0]) && (0 & 549755813376))))));
        var_19 = ((-(((arr_0 [i_0 - 1] [i_0 + 2]) ? (arr_0 [1] [i_0]) : (arr_0 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_20 = (max(var_20, ((min(((min(1, 227))), var_10)))));

        for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {
                        var_21 = var_6;
                        var_22 = (max((((22935 && (((80752640 ? 549755813376 : -23)))))), (max(980245888, 1))));
                        var_23 = (((((2788166338 | (arr_12 [4] [i_2] [4] [1])))) ? (arr_7 [i_2]) : (max(8452817061299903339, (((var_5 ? -999936547 : (arr_11 [i_1] [20] [i_3] [i_3] [i_2] [i_1]))))))));
                    }
                }
            }
            var_24 *= 5;
            var_25 = (max(((!((min(0, var_7))))), (!var_14)));
            var_26 = (max(var_26, var_3));
        }
        for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
        {
            var_27 -= ((((arr_14 [12] [12]) == (arr_14 [22] [i_5]))) ? ((((262142 ? -32548 : (arr_3 [i_1]))) / var_9)) : var_10);
            arr_15 [i_5] [i_5] = ((-(arr_3 [i_5])));
            arr_16 [i_5] = (((arr_4 [i_5]) ? ((min(var_8, (arr_9 [i_5] [i_1] [10])))) : var_12));
        }
        for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    {
                        arr_25 [i_7] [i_6] [19] [19] [13] = ((((-((1270730722 ? (arr_19 [i_1] [i_6] [i_7]) : (arr_17 [i_1])))))) ? ((((~var_10) ^ ((min(1, (arr_14 [i_7] [i_7]))))))) : ((-549755813358 ? (arr_13 [i_8] [i_6] [i_1]) : (min(var_5, 21)))));
                        var_28 = (((1198478663 ? 1 : 920926922)));
                    }
                }
            }
            var_29 = ((var_10 ? ((min((arr_4 [i_6]), var_7))) : (((((var_10 ? (arr_17 [1]) : var_12))) ? var_6 : ((((-3 + 2147483647) >> (((arr_23 [i_1] [2] [i_6] [4]) - 3372594645)))))))));
            var_30 = 1;
        }
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            var_31 = ((((arr_3 [i_1]) && (arr_3 [i_9]))) ? (((11728 ? 1 : 1))) : (max((((!(arr_9 [1] [i_9] [i_9])))), (min(var_11, var_1)))));

            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                var_32 = (min(var_32, ((min(((!((((arr_7 [22]) | -549755813336))))), (var_7 <= var_3))))));
                /* LoopNest 2 */
                for (int i_11 = 3; i_11 < 19;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 21;i_12 += 1)
                    {
                        {
                            var_33 = (min(var_4, (((arr_13 [i_11 - 1] [i_12 + 1] [i_11 - 1]) ? var_6 : var_14))));
                            var_34 = ((((((((arr_24 [i_1] [i_9] [i_10] [i_11] [i_1]) ? var_11 : (arr_19 [i_1] [i_9] [i_9])))) * ((var_5 ? var_13 : 15849479464865443838)))) != (((max(var_6, (arr_17 [i_1]))) * (((var_13 ? (arr_17 [i_9]) : var_8)))))));
                            arr_36 [i_12] [1] [i_10] [1] [i_12] = (((((var_9 ? (-9223372036854775807 - 1) : (arr_20 [i_12] [i_9] [i_1])))) || ((((var_5 | 204237969) ? var_4 : -134217728)))));
                            var_35 = (min((arr_13 [i_9] [i_9] [i_12]), ((min((arr_10 [i_11 - 2] [i_11] [i_12 - 2] [i_12 + 1]), ((min(1, 1))))))));
                        }
                    }
                }
                var_36 = ((+(((arr_10 [i_9] [i_9] [6] [i_1]) ? (arr_10 [1] [i_1] [i_9] [i_9]) : 1))));
                arr_37 [i_1] [i_1] [i_1] [i_1] = var_3;
            }
            for (int i_13 = 4; i_13 < 20;i_13 += 1)
            {
                arr_40 [i_1] [i_1] [i_13] = (!var_9);
                var_37 = (min(var_37, 32767));
                var_38 = (max((!17299605233328867543), (((arr_4 [i_13 - 4]) ^ (arr_4 [i_13 - 1])))));
            }
        }
        var_39 += (-32765 * 1);
    }
    for (int i_14 = 1; i_14 < 16;i_14 += 1)
    {
        arr_43 [1] = (arr_13 [i_14] [i_14] [i_14]);

        for (int i_15 = 3; i_15 < 18;i_15 += 1)
        {
            arr_47 [i_14] [i_15 + 1] [i_15] = (max(((((var_10 & 0) ? ((-24727 ? (arr_21 [i_14] [i_14]) : 1)) : ((var_13 ? var_7 : var_3))))), (((arr_21 [i_14 - 1] [i_15 - 2]) ? (var_5 - 1) : (((arr_17 [19]) ? (arr_44 [i_14] [16]) : 65520))))));
            var_40 -= var_7;
        }
    }
    var_41 = var_9;
    #pragma endscop
}
