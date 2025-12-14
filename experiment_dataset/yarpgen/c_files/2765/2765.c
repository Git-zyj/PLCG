/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;
    var_20 = (((var_14 | var_14) & var_10));
    var_21 &= var_13;

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_22 = var_12;
        var_23 = var_6;
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_24 = (min(((15911484678439262920 % (((111 ? var_13 : (arr_1 [i_1] [i_1])))))), (arr_4 [i_1])));
        arr_7 [i_1] = (-(min(var_7, (arr_1 [i_1] [i_1]))));
    }
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        var_25 = -2147483629;
        var_26 ^= var_6;
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 9;i_5 += 1)
                {
                    {
                        var_27 = arr_13 [i_2] [i_3] [i_4] [i_5];
                        var_28 = ((((((30977 ? (arr_10 [i_2] [i_4]) : var_8)) | 31002)) >> (arr_3 [i_5])));
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {

        for (int i_7 = 2; i_7 < 16;i_7 += 1)
        {
            arr_22 [10] [i_7] = var_9;
            arr_23 [i_6] [i_6] = var_18;
            var_29 -= 461402422;
        }
        for (int i_8 = 1; i_8 < 13;i_8 += 1)
        {
            var_30 = (min(var_30, ((((((min(var_9, var_9)) & ((((arr_1 [i_8] [i_8 + 2]) & (arr_6 [i_8])))))) < -30949)))));
            var_31 *= (min((var_1 / var_2), (((((((arr_21 [i_8]) - 60402))) ? var_18 : (arr_18 [i_8]))))));
            var_32 = (!var_10);

            for (int i_9 = 2; i_9 < 16;i_9 += 1)
            {
                var_33 |= (!var_14);
                var_34 = (-((2113301221 ? (var_12 + var_9) : ((((arr_24 [i_8 + 3]) - var_14))))));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        {
                            arr_36 [i_9] [i_8 - 1] [i_9] [i_10] [i_10] [2] &= var_16;
                            var_35 = var_5;
                            var_36 ^= (min((((arr_19 [i_11]) ? (arr_21 [i_10]) : (arr_0 [i_6]))), var_16));
                        }
                    }
                }
            }
            for (int i_12 = 0; i_12 < 17;i_12 += 1)
            {
                var_37 = (min((((max(var_10, var_0)))), (min((((var_12 ? var_12 : 2695700276))), (arr_17 [i_8 - 1])))));
                arr_40 [i_8] [i_12] [i_8] [i_6] = (arr_39 [i_6] [1] [i_12]);
            }
            arr_41 [i_6] [i_8 + 4] = (((max(var_5, var_11)) <= (arr_17 [12])));
        }
        arr_42 [1] [1] = ((var_12 ? (14099023583447933019 != 17092) : ((~((max((arr_37 [i_6] [i_6] [i_6]), (arr_29 [i_6] [i_6] [i_6]))))))));
        arr_43 [i_6] = (min((max((arr_0 [i_6]), (15933752681885311693 != var_9))), var_7));
    }
    #pragma endscop
}
