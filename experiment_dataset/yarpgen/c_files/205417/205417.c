/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_5;
    var_20 = var_2;
    var_21 = ((((-((var_1 ? var_2 : var_11)))) % (((((259903255 ? var_13 : var_9))) ? var_1 : var_18))));
    var_22 = var_14;

    for (int i_0 = 1; i_0 < 20;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_23 = (125038908 > 96);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_24 = (((var_11 > 3852138125) < (!1610612736)));
                        arr_12 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] = (arr_10 [i_0 - 1] [i_0] [i_2] [i_3]);
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        {
                            var_25 = (arr_2 [i_1] [i_0]);
                            var_26 = (!3939322746);
                            var_27 = (((!var_17) << (!2783087160)));
                            var_28 *= var_14;
                        }
                    }
                }
            }
            arr_22 [i_1] = (((arr_8 [i_1]) ? (arr_2 [i_0 + 1] [i_1]) : (arr_8 [i_1])));
            var_29 += (((arr_14 [i_0] [i_0 - 1] [i_1]) ? (arr_16 [i_0] [i_0] [i_0 + 1] [i_1] [i_1] [i_1]) : var_3));
        }
        var_30 += (-846090353 != 32762);
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 20;i_7 += 1) /* same iter space */
    {
        arr_26 [i_7] &= (~var_6);
        var_31 = 2328708815689998941;
    }
    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 20;i_10 += 1)
            {
                {
                    var_32 = (((((arr_20 [i_9 + 2] [i_9 + 1] [i_10 - 1]) != var_5)) ? (arr_20 [i_9 + 1] [i_9 - 1] [i_10 + 1]) : (((max(40777, 31))))));
                    var_33 *= var_5;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 17;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {
                {
                    var_34 = (max(var_34, ((((max(1511880136, 1986648986)) > ((((!((min(87758546, -29826))))))))))));
                    arr_38 [i_12] = (((((((!(arr_2 [i_8] [i_11]))) ? ((255 & (arr_14 [i_8] [i_11] [i_12]))) : 1113406835))) ? (arr_17 [i_8]) : (((((125038908 ? -623386860270188894 : 19547))) ? 12 : (arr_8 [i_8])))));
                    var_35 = ((!(((var_16 ? (arr_18 [i_11 + 2] [i_11] [i_11 + 1] [i_12] [i_12]) : (arr_18 [i_11 + 2] [i_11] [i_11 + 3] [i_12] [i_12]))))));
                    var_36 = (((((arr_24 [i_11 - 1]) + var_4)) != (((min((arr_24 [i_11 - 1]), 115))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 21;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 21;i_14 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_15 = 1; i_15 < 18;i_15 += 1)
                    {
                        arr_48 [i_8] [i_13] [i_14] [i_15] = ((var_9 << (4268435280 - 10034)));
                        var_37 = (min(var_37, var_14));
                    }
                    var_38 = ((!(arr_10 [i_8] [i_13] [i_14] [i_8])));
                }
            }
        }
        var_39 = min(1153917009, ((min((arr_8 [i_8]), var_17))));
    }
    #pragma endscop
}
