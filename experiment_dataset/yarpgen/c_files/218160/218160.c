/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    var_19 = 288230376151711743;
                    arr_10 [i_0] [i_2] [i_2] [i_3] = (min(var_12, ((((arr_7 [i_2]) ? (((-(arr_4 [i_1] [i_1])))) : var_16)))));
                    arr_11 [i_2] [i_1] [i_2] [i_2] [i_2 + 1] [i_3] = (min((arr_8 [i_2 - 1] [i_2] [i_2] [i_2 - 1]), (arr_5 [i_2 - 1] [i_2] [i_2 - 1] [i_2 + 1])));
                }
                var_20 = ((!(((var_5 ? ((~(arr_3 [i_2] [i_1]))) : var_2)))));
                var_21 = ((((((-1091817851 & (arr_8 [i_2] [i_2] [i_2] [i_2])))) ? 19174 : (!var_13))));

                /* vectorizable */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    var_22 = (min(var_22, (arr_9 [i_2 - 1])));
                    var_23 = (arr_12 [i_0] [i_0] [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2]);
                    arr_14 [i_2] [i_2] [i_1] [i_1] [i_2] = var_4;
                    var_24 = (max(var_24, (((-(arr_8 [i_2 + 1] [i_4] [i_2] [i_2 + 1]))))));
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_25 = 19165;
                    var_26 = (min(var_26, (arr_4 [8] [i_0])));
                }
                for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                {
                    arr_19 [i_2] [i_1] [i_2] = var_2;
                    var_27 = -19155;
                    arr_20 [i_6] [i_2] [7] [i_1] [i_2] [i_0] = 0;
                    var_28 = (!1);
                }
                for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                {
                    arr_23 [i_0] [i_1] [i_2] [i_0] [i_7] = 0;
                    arr_24 [i_1] [i_1] [i_2] [i_2] [i_7] = (arr_2 [i_1]);
                }
                var_29 = (max(1, (arr_16 [i_0] [i_1] [i_2])));
            }
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                arr_29 [i_0] [i_1] = ((-(arr_27 [i_8] [i_0])));
                var_30 = (!var_9);
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            var_31 = 13361694194460858947;
                            var_32 = var_3;
                            var_33 = (max(var_33, (((-(min(((8335 ? (arr_5 [i_0] [5] [i_8] [i_9]) : (arr_16 [i_0] [i_0] [i_8]))), (arr_33 [i_0] [i_0] [i_8] [i_9] [i_10]))))))));
                            var_34 = (arr_9 [i_0]);
                            var_35 = ((225 ? 3081 : ((((arr_1 [i_9]) ? (arr_1 [i_0]) : 0)))));
                        }
                    }
                }
            }
            arr_35 [i_0] = 1;
            arr_36 [1] = (min((arr_3 [i_0] [i_1]), (arr_3 [i_0] [i_1])));
        }
        arr_37 [i_0] = (((!(((~(arr_22 [i_0] [i_0] [4])))))));
        var_36 = (arr_13 [i_0]);
        var_37 = (32767 == -5);
        var_38 = (max((arr_16 [i_0] [4] [i_0]), (((((min((arr_9 [i_0]), 56850))) ? (arr_31 [i_0] [i_0] [i_0]) : 62454)))));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
    {
        var_39 -= ((!(arr_33 [i_11] [i_11] [i_11] [4] [i_11])));
        arr_41 [i_11] [i_11] = (arr_16 [i_11] [i_11] [i_11]);
        var_40 *= (arr_1 [i_11]);
    }
    var_41 = ((var_7 ? var_12 : var_9));
    var_42 = 52713;
    /* LoopNest 3 */
    for (int i_12 = 2; i_12 < 12;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 13;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                {
                    var_43 -= (arr_47 [i_14] [i_12 + 1]);
                    var_44 += (((((arr_45 [i_12] [i_12 - 2] [i_14]) ? (arr_45 [i_12] [i_12 - 2] [i_12 - 2]) : 2681066121190265264)) / 188));
                    var_45 -= (arr_49 [0] [i_13] [1] [i_14]);
                    var_46 |= -177;
                }
            }
        }
    }
    var_47 = -1684703551;
    #pragma endscop
}
