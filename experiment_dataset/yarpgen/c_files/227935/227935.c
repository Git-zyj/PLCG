/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_20 = (min(var_20, ((((((arr_0 [i_0]) ? (arr_4 [i_0] [i_0] [i_0]) : var_18)) % var_11)))));
            arr_5 [i_0] [i_0] = ((((((arr_4 [i_1] [i_0] [i_0]) ? (arr_4 [i_0] [i_0] [i_1]) : var_11)) + 9223372036854775807)) << (((arr_2 [i_0] [i_0]) - 2647006741)));
        }
        for (int i_2 = 2; i_2 < 9;i_2 += 1) /* same iter space */
        {
            var_21 = 1;
            var_22 = (arr_4 [i_2] [i_0] [i_0]);
        }
        for (int i_3 = 2; i_3 < 9;i_3 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_4 = 4; i_4 < 8;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            arr_19 [i_0] [i_3] [i_4] [i_6] [i_4] [i_5] [i_6] = (37222 == 1336139568);
                            var_23 = (arr_2 [i_0] [i_3]);
                        }
                    }
                }
            }

            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                arr_22 [i_3] = var_15;
                arr_23 [i_0] [i_0] [i_0] [i_0] |= (var_0 ? -123 : 1411609288);
                var_24 = (var_5 <= 3113832992374580606);
            }
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {

                for (int i_9 = 4; i_9 < 8;i_9 += 1)
                {
                    var_25 = (arr_28 [i_0] [i_0] [i_8] [i_9]);
                    var_26 -= (((!1) > var_13));
                    var_27 = (arr_1 [i_0]);
                    arr_29 [i_0] [i_0] [i_0] [i_0] = arr_8 [i_9] [i_3];
                }
                for (int i_10 = 3; i_10 < 8;i_10 += 1)
                {
                    var_28 *= ((123 ? (arr_17 [i_10] [i_3] [i_8] [i_10] [i_10] [i_0]) : (arr_18 [i_10 - 1] [i_10] [i_0] [i_10 + 2])));
                    var_29 -= (~(arr_26 [i_8] [i_8] [i_0]));
                    var_30 |= var_6;
                }
                var_31 = (min(var_31, (--8176)));

                for (int i_11 = 2; i_11 < 10;i_11 += 1)
                {
                    var_32 = (((arr_36 [i_0] [i_0] [i_0] [i_0]) >= 2940849160072242857));
                    var_33 = ((-((var_12 ? 1411609273 : (arr_13 [i_0] [i_0])))));
                }
                for (int i_12 = 0; i_12 < 11;i_12 += 1)
                {
                    var_34 = var_6;
                    var_35 = (arr_34 [i_3] [i_3] [i_3] [i_3] [i_3 - 2] [i_3]);
                }
                var_36 = ((((var_11 ? (arr_10 [i_0]) : 1336139567)) - ((((var_4 || (-2147483647 - 1)))))));
            }
        }
        arr_41 [i_0] [i_0] |= (((arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_14 : (arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
    }
    var_37 = ((~((var_12 ? var_2 : var_13))));
    /* LoopNest 2 */
    for (int i_13 = 1; i_13 < 21;i_13 += 1)
    {
        for (int i_14 = 3; i_14 < 23;i_14 += 1)
        {
            {
                arr_48 [i_13] [i_14] [i_14] = (-(((!((max(var_15, (arr_45 [i_13]))))))));
                var_38 = ((-(!4398046511088)));
                var_39 |= ((var_13 > (min((((arr_47 [16] [i_14] [i_14]) ? (arr_45 [0]) : (arr_46 [2] [i_14]))), (((arr_43 [i_13]) ? 0 : 37229))))));
                var_40 = ((!((((arr_44 [i_13] [i_14 - 2]) ? ((14 ? 175 : (arr_47 [i_13] [i_14] [i_13]))) : var_17)))));
            }
        }
    }
    #pragma endscop
}
