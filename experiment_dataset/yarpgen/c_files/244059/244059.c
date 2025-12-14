/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        arr_8 [i_2] |= var_9;
                        var_12 = (max(var_12, (arr_4 [i_3] [i_2] [i_2] [i_0])));
                        var_13 *= (((arr_0 [i_0 - 1]) ? ((var_5 / (arr_4 [i_2] [i_1] [i_2] [i_1]))) : 1884522394));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                var_14 = (max(var_14, ((((arr_11 [i_2] [i_2] [i_0]) ? var_6 : var_4)))));
                                arr_14 [i_1] [i_4] [i_0] [i_1] [i_0] = ((((((1 ? var_7 : -1012)) & (-32767 - 1))) & (((~1) & (-127 - 1)))));
                                arr_15 [i_2] [i_0] [i_2] [i_4] = ((+((((((arr_12 [i_0] [i_0] [i_4] [i_0] [i_1] [i_0 - 1] [i_0]) / var_1))) ? (arr_11 [i_4] [i_0] [i_0]) : (arr_9 [5] [9] [10] [i_0])))));
                                arr_16 [i_0] [i_1] [i_4] [i_4] [i_0] = ((((max((-1067720397 ^ var_4), (arr_13 [i_0] [0] [i_0])))) ? (((!var_9) + 26765)) : -91));
                                var_15 = (max(var_15, ((((arr_0 [i_0 - 1]) ? (((arr_4 [i_0] [i_0] [i_2] [i_0 - 1]) << (((arr_0 [i_0 - 1]) + 24853)))) : (-32767 - 1))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 |= (!1);

    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_17 = var_2;

        for (int i_7 = 2; i_7 < 8;i_7 += 1)
        {
            var_18 = (max(var_18, (arr_3 [i_6] [i_6])));

            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                arr_25 [i_6] [i_6] [i_6] [1] = (arr_4 [i_8] [i_8] [i_8] [i_7 + 1]);
                var_19 &= (arr_23 [i_6] [i_6] [i_6] [i_6]);

                /* vectorizable */
                for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
                {
                    var_20 |= var_6;
                    arr_28 [i_6] [i_7 - 2] [i_8] [i_9] |= (((arr_21 [i_7 - 1] [i_7 + 3]) & var_5));
                }
                for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
                {
                    var_21 += ((!(arr_12 [i_7 + 3] [6] [11] [11] [11] [6] [i_10])));
                    var_22 |= ((var_11 ? (var_10 - var_9) : var_10));
                    arr_33 [10] = 65525;
                }
                for (int i_11 = 0; i_11 < 11;i_11 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        var_23 = var_11;
                        arr_39 [i_11] [i_11] [i_11] [i_11] = (arr_32 [i_6] [i_6] [i_8]);
                        var_24 = 3312467170405885963;
                    }
                    arr_40 [i_6] [i_11] [i_6] [i_8] [i_6] [i_6] = var_2;
                    var_25 *= var_2;
                }
                var_26 += (min((var_2 + 17037310391059718725), (arr_38 [i_7] [i_7] [i_8] [i_7] [i_7] [i_7 + 1] [i_7 + 2])));
                var_27 = (var_10 % var_6);
            }
            var_28 = var_4;

            for (int i_13 = 1; i_13 < 7;i_13 += 1)
            {
                arr_43 [0] = 1718225572;
                arr_44 [i_6] = -var_0;
                var_29 = var_0;
            }
        }
        for (int i_14 = 2; i_14 < 9;i_14 += 1)
        {
            var_30 = (max(var_30, (((869502245 ? 0 : 0)))));
            var_31 = (max(var_31, var_1));
        }
        for (int i_15 = 4; i_15 < 10;i_15 += 1) /* same iter space */
        {
            arr_49 [i_6] = var_10;
            var_32 ^= ((-(((arr_24 [i_6] [i_6]) + var_11))));
            var_33 |= var_0;
            var_34 = var_7;
        }
        for (int i_16 = 4; i_16 < 10;i_16 += 1) /* same iter space */
        {
            var_35 = (((~((var_11 ? 231 : var_2)))));
            arr_53 [i_6] [i_6] = var_11;
        }
    }
    #pragma endscop
}
