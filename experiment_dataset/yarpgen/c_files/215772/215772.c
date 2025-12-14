/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((var_10 || 65535) ? var_11 : 3987901346))) ? var_1 : var_10));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_17 = (max(420681801, var_6));
        var_18 = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_19 = -89;
            var_20 = ((((-9223372036854775807 - 1) | (~109))));
            var_21 = 65535;
        }
        var_22 = 1984;
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_23 = 15977;
        var_24 = (max(var_8, ((max((arr_9 [i_3] [i_3]), var_13)))));
        var_25 = (min((arr_9 [i_3] [4]), ((((var_7 & (arr_8 [i_3])))))));
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_26 = (max(var_5, var_0));
        var_27 = var_4;

        for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
        {
            var_28 = ((var_13 << (((max(var_15, 1)) - 21487))));
            var_29 = var_2;
        }
        for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
        {

            for (int i_7 = 3; i_7 < 20;i_7 += 1) /* same iter space */
            {
                var_30 = (-92 - 91);
                var_31 = (min(((var_10 & (((277222073 ? var_15 : (arr_3 [i_4])))))), (((((arr_9 [0] [0]) >= 1))))));
                var_32 = 1;
                var_33 = var_0;
            }
            for (int i_8 = 3; i_8 < 20;i_8 += 1) /* same iter space */
            {
                var_34 = var_5;
                var_35 = (((!-1212917827) == ((max(16384, 19024)))));
                var_36 = 79;
            }
            for (int i_9 = 3; i_9 < 20;i_9 += 1) /* same iter space */
            {
                var_37 = -1515929907;
                var_38 = (-270241455 ? (min(var_7, 3620309528)) : (((arr_16 [i_4] [i_6] [i_9]) * var_9)));
            }
            for (int i_10 = 1; i_10 < 20;i_10 += 1)
            {
                var_39 = (((arr_11 [i_6] [i_6]) ? -1196276165 : 32));
                var_40 = var_6;
            }
            var_41 = ((12126197968050049177 ? (arr_12 [i_4] [i_6]) : (((((var_14 ? var_6 : var_15))) ? -89 : ((((arr_8 [7]) != (arr_27 [7]))))))));

            /* vectorizable */
            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                var_42 = var_14;
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        {
                            var_43 = ((-(((!(arr_35 [i_4] [0]))))));
                            var_44 = ((~(arr_9 [i_4] [i_6])));
                        }
                    }
                }
            }
        }
        var_45 = var_6;
    }
    #pragma endscop
}
