/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 125405929679887109;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_11 = 125405929679887121;
                                var_12 = ((+(((arr_0 [i_2 - 2]) | -125405929679887109))));
                            }
                        }
                    }
                    arr_13 [i_2 - 1] [i_0] [i_0] [i_0] = 1;
                }
            }
        }
        var_13 = (((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) + (max((arr_1 [i_0] [i_0]), (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
        var_14 = ((((((arr_3 [i_0] [i_0]) >= var_2))) >= -125405929679887121));
        var_15 = ((+((+(((arr_1 [i_0] [i_0]) ? -1919110665232630062 : (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));

        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            var_16 = var_6;
            var_17 = ((((((arr_14 [10] [i_5] [i_5]) ? var_6 : (arr_15 [i_0])))) < (arr_14 [i_0] [i_0] [i_0])));

            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                var_18 = var_7;
                var_19 = ((~((~(arr_1 [i_0] [i_5])))));
                var_20 = var_3;
            }
            for (int i_7 = 1; i_7 < 18;i_7 += 1)
            {
                var_21 = var_0;

                /* vectorizable */
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    arr_24 [i_0] [i_0] [i_0] [i_0] = (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]);
                    arr_25 [i_0] [15] [i_0] [i_0] [i_0] = (arr_8 [i_0] [i_0] [i_5] [i_7] [i_8] [i_0]);
                }
                for (int i_9 = 4; i_9 < 20;i_9 += 1)
                {
                    var_22 = (arr_26 [i_0] [i_5]);
                    arr_29 [i_0] [i_0] [i_0] [i_0] [i_7 + 2] [i_0] = (min((((arr_26 [i_0] [i_0]) ? (arr_19 [i_7 + 2] [i_7 + 1] [i_9 - 2]) : (arr_3 [i_7 + 1] [i_0]))), ((((arr_26 [i_0] [i_0]) ? (arr_19 [i_7 - 1] [i_7 + 1] [i_9 - 3]) : (arr_26 [i_0] [i_0]))))));
                }
                for (int i_10 = 3; i_10 < 19;i_10 += 1)
                {
                    var_23 = (min((arr_28 [i_0]), (arr_6 [i_0] [i_5] [i_5])));
                    var_24 = (arr_21 [i_10]);
                }
            }
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                var_25 = ((-(arr_14 [i_0] [i_0] [i_0])));
                arr_35 [i_0] [i_0] [i_11] = (var_3 < -var_6);
            }
            var_26 *= ((var_2 != (arr_6 [1] [i_5] [1])));
        }
        for (int i_12 = 1; i_12 < 1;i_12 += 1)
        {
            var_27 = (max(((max((arr_23 [i_0] [i_0] [i_12 - 1] [i_12 - 1] [i_12] [i_12 - 1]), var_4))), (((((arr_10 [i_0] [i_12 - 1] [i_0] [i_12] [i_0]) / 7519))))));
            var_28 = max(8193093666571358909, 450480820212245277);
            arr_39 [i_0] = ((((var_9 ? ((min((arr_18 [i_0] [i_0] [i_12] [i_12 - 1]), var_8))) : -1))) ? ((max(((!(arr_27 [i_0] [i_12 - 1] [i_0] [i_12]))), (-32767 - 1)))) : (125405929679887116 && 11));
            arr_40 [i_0] = (arr_30 [i_12] [i_12] [i_12 - 1] [i_12]);
        }
        for (int i_13 = 0; i_13 < 22;i_13 += 1)
        {
            arr_44 [i_0] [i_0] [i_0] = -125405929679887122;
            arr_45 [i_0] = -22;
            var_29 = (!-var_2);
            var_30 = (!1234103215453317401);
        }
    }
    for (int i_14 = 0; i_14 < 22;i_14 += 1)
    {

        for (int i_15 = 0; i_15 < 22;i_15 += 1)
        {
            var_31 = var_2;
            var_32 = (((((-1919110665232630062 ? -3 : (arr_48 [i_14])))) ? ((((((0 >= (arr_33 [i_14] [i_14] [i_14] [i_15])))) > (((!(arr_22 [i_14] [i_14]))))))) : (arr_9 [0] [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])));

            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                var_33 = var_5;
                var_34 = ((-(((!(arr_1 [i_14] [i_15]))))));
                arr_56 [i_14] [i_15] = (arr_41 [18]);
            }
        }
        var_35 = ((~((max((arr_10 [i_14] [i_14] [i_14] [i_14] [8]), var_2)))));
        var_36 = (min(15391, (arr_7 [i_14] [i_14] [i_14] [i_14])));
    }
    for (int i_17 = 0; i_17 < 19;i_17 += 1)
    {
        arr_60 [i_17] = ((!((max(-23, var_3)))));
        arr_61 [i_17] = (((((arr_15 [i_17]) | (arr_22 [i_17] [i_17]))) > (arr_42 [i_17])));
    }
    var_37 = var_0;
    #pragma endscop
}
