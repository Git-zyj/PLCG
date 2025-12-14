/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_20 -= ((-((min(21256, -1)))));
        arr_3 [i_0] = ((-890777196 ? (-9223372036854775807 - 1) : (~-1)));
    }
    var_21 = var_18;

    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                var_22 = (min(var_22, (3340 / 4294967295)));
                var_23 -= (((arr_9 [i_3]) & -1));
                var_24 ^= (((((arr_5 [i_1] [7]) ? (arr_6 [i_2] [i_2]) : 17165119969375870651)) < -1));
            }
            for (int i_4 = 4; i_4 < 20;i_4 += 1)
            {

                for (int i_5 = 1; i_5 < 21;i_5 += 1)
                {
                    var_25 = (((arr_15 [i_2 + 3] [i_4 + 3]) ? (arr_15 [i_2 + 2] [i_4 - 3]) : (arr_15 [i_2 - 1] [i_4 - 2])));
                    var_26 = (21256 | (arr_4 [i_1] [i_2 + 3]));
                    var_27 = 2147475456;
                    var_28 = (max(var_28, (((-2064393642 ? (arr_7 [i_1]) : 1)))));
                }
                for (int i_6 = 3; i_6 < 22;i_6 += 1)
                {
                    arr_21 [i_1] [18] [14] [i_1] [14] [i_4] &= 1;
                    var_29 = (max(var_29, (1 < 1898399212)));
                }
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    var_30 -= (((arr_14 [i_1 + 1] [i_4 - 2] [i_4 - 4]) ? (arr_11 [i_7] [i_4 - 2] [i_4]) : (arr_14 [i_1 + 1] [i_4 - 2] [i_4 - 2])));
                    var_31 *= -0;
                }
                for (int i_8 = 3; i_8 < 22;i_8 += 1)
                {
                    var_32 = (arr_23 [6] [i_2] [i_2] [16]);
                    var_33 = -1;
                    var_34 = (((3023512445 ? (arr_26 [i_1 - 2] [i_1 - 2]) : -296560382)));
                }
                var_35 = (65535 + 16);
                var_36 = (((arr_5 [i_1 - 1] [i_2 + 2]) ? (arr_5 [i_1 - 2] [i_2 + 3]) : -7));
                var_37 &= (arr_5 [i_4 - 4] [i_2 + 1]);
                var_38 = (((arr_4 [i_2 + 3] [i_1 + 1]) ? (arr_4 [i_2 + 3] [i_2 + 1]) : 18446744073709551610));
            }
            var_39 = (-(arr_26 [i_1 - 1] [i_2 - 1]));
            var_40 &= (arr_16 [14] [14] [i_1 - 1] [i_1]);
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 19;i_10 += 1)
            {
                {
                    arr_33 [i_1] [i_1] [i_1] = (arr_12 [i_1] [i_9]);
                    var_41 = (max(var_41, ((min(((max((arr_28 [i_1 + 1] [i_10] [i_10 + 1]), var_12))), (arr_12 [i_1 - 2] [i_1 - 2]))))));
                    var_42 = (((9223372036854775804 <= -3396596245374557383) ? (((-(arr_20 [i_1] [i_10] [i_9] [i_1] [i_1])))) : ((-(((arr_17 [i_1] [i_1]) ? (arr_17 [i_1] [i_10]) : (arr_31 [i_1] [i_9] [i_9] [i_10])))))));
                }
            }
        }
    }
    var_43 = (((((var_18 ? var_4 : 19540)))));
    var_44 = var_2;
    #pragma endscop
}
