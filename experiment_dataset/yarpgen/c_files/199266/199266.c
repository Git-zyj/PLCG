/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_10 = (arr_5 [i_1]);
                    var_11 = (((var_3 < 0) ? ((-8443425151832274442 - (((arr_7 [13] [1] [1] [1]) % 6313421608830518859)))) : var_3));
                }
            }
        }
        arr_8 [i_0] = ((!((min((arr_7 [i_0] [8] [i_0] [i_0]), (arr_3 [i_0]))))));

        /* vectorizable */
        for (int i_3 = 2; i_3 < 21;i_3 += 1)
        {
            arr_11 [0] [9] = (((1888355810 / (arr_2 [i_0]))));
            var_12 ^= (((arr_6 [i_3] [10]) ? var_4 : ((var_4 ? var_0 : 776197642))));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
            {

                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    var_13 ^= ((((((max(0, var_5))))) / -169));
                    var_14 ^= (((!(arr_3 [i_0]))));

                    for (int i_7 = 2; i_7 < 22;i_7 += 1)
                    {
                        var_15 ^= ((((0 ? (arr_17 [i_0] [0] [i_5] [0] [i_7 - 2] [i_7]) : (arr_17 [1] [i_4] [12] [i_6] [i_7 + 1] [i_7])))) ? (max((arr_15 [3] [i_4] [i_6] [13]), (-2147483647 - 1))) : (arr_14 [i_0] [i_0] [i_0]));
                        var_16 = (var_7 >= (((!65535) ? (min(var_7, var_8)) : 13965)));
                    }
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        var_17 = (min(var_17, (((min(((-21124 * (arr_2 [i_0])), ((((arr_18 [i_8] [i_8] [6] [i_6] [i_8]) ? 0 : 12))))))))));
                        var_18 = (max(var_18, ((((((max(var_1, (arr_1 [i_8])) <= (min((arr_21 [i_0] [i_0]), var_1))))))))));
                        arr_24 [i_0] [i_6] [i_0] [i_4] [i_0] [18] = (((((((arr_7 [i_0] [i_4] [i_0] [i_8]) ? (arr_5 [i_4]) : 0))) ? 32767 : (((arr_0 [i_6]) ? (arr_21 [i_0] [15]) : (arr_4 [i_4]))))));
                        var_19 ^= var_0;
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        var_20 = (max(var_20, (((!(arr_12 [i_5] [i_5] [i_5]))))));
                        var_21 = (((arr_5 [i_4]) % (arr_5 [i_4])));
                        var_22 += var_7;
                    }
                    var_23 += ((var_3 ? (min((arr_0 [i_0]), ((((arr_1 [i_4]) < (arr_6 [i_0] [i_0])))))) : (((((arr_16 [i_0] [i_0]) < var_9))))));
                    var_24 = -1;
                }
                for (int i_10 = 1; i_10 < 21;i_10 += 1)
                {
                    var_25 = (((max((((arr_21 [0] [i_4]) ? var_5 : 3992412464)), ((((arr_12 [i_0] [i_4] [i_4]) & -598287192))))) & var_4));
                    var_26 -= ((!((max(2223095505, ((-127 ? (arr_13 [i_0]) : 85)))))));
                    var_27 &= ((((min((arr_28 [i_0] [i_5] [i_10 + 2]), (~0)))) ? var_8 : ((var_8 ? ((var_0 >> (127 - 97))) : (max(var_7, var_8))))));
                }
                var_28 &= (arr_27 [i_0] [i_4] [14] [i_5]);
            }
            for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
            {
                var_29 = (((((51 ? (!var_4) : var_4))) ? (((var_4 || (((var_7 ? (arr_18 [i_4] [i_4] [i_4] [i_4] [i_4]) : (arr_2 [22]))))))) : 469762048));
                var_30 += var_8;
            }
            arr_33 [i_4] [i_0] [i_4] = (((!var_8) || ((((arr_25 [18] [i_0] [18]) ? 11 : ((var_7 ? var_7 : (arr_27 [i_0] [21] [i_0] [i_4]))))))));
        }
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            var_31 = (arr_3 [i_0]);

            /* vectorizable */
            for (int i_13 = 0; i_13 < 23;i_13 += 1)
            {
                arr_39 [i_13] [i_0] [i_12] [i_13] = ((!(arr_9 [i_13])));
                var_32 = ((-((17431 ? 2071871783 : var_5))));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 23;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        {
                            arr_46 [i_15] [i_13] [i_14] [0] [i_0] [i_13] [i_0] = (var_9 >= var_3);
                            var_33 = var_7;
                            var_34 ^= arr_6 [i_12] [i_14];
                        }
                    }
                }
            }
            for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
            {

                for (int i_17 = 2; i_17 < 21;i_17 += 1)
                {
                    var_35 = var_5;
                    var_36 = ((((max(var_9, (max((arr_23 [i_0] [i_0] [i_16] [i_0]), (arr_21 [1] [i_12])))))) ? var_7 : var_0));
                    var_37 = ((((((arr_25 [i_12] [i_16] [i_17]) ? var_4 : (arr_25 [i_0] [i_0] [i_12]))) >= (-2147483647 - 1))));
                    var_38 = (max((((!40) ? (!11) : ((min(var_9, (arr_9 [i_0])))))), (((!(arr_51 [i_0] [i_0] [i_16] [4]))))));
                    var_39 = ((max((~var_0), ((~(arr_50 [22] [i_12]))))));
                }
                for (int i_18 = 0; i_18 < 23;i_18 += 1)
                {
                    var_40 = ((arr_6 [2] [i_12]) >= (max((((var_5 / (arr_14 [13] [13] [i_0])))), (arr_38 [i_12]))));
                    var_41 = (min(var_41, ((((((min(var_6, (arr_53 [18] [12] [12] [i_0])))) ? ((((arr_7 [i_0] [i_12] [5] [i_18]) / var_5))) : var_4))))));
                }
                var_42 = (((~var_9) | -5525));
                arr_55 [i_16] [i_16] [i_16] [9] = var_6;
                arr_56 [i_16] = (((((var_0 ? 1 : -1416846191))) ? (max(((((arr_43 [i_16] [i_16] [i_16] [i_16] [i_16]) + 3953626851))), (((arr_43 [i_0] [i_12] [8] [19] [i_0]) ? var_0 : (arr_19 [i_0] [i_12] [i_16] [i_16]))))) : ((((max(var_2, (arr_53 [i_0] [i_0] [i_0] [i_16]))))))));
            }
            for (int i_19 = 0; i_19 < 1;i_19 += 1) /* same iter space */
            {
                arr_59 [i_0] [i_12] [i_12] [i_12] = ((~(((arr_14 [18] [18] [i_19]) - var_7))));
                var_43 ^= 438774201;
                var_44 = (max(var_44, (((var_5 == ((((min((arr_15 [i_19] [i_12] [18] [i_0]), (arr_22 [i_0] [i_12])))) ? 1681158626 : (var_8 - -127))))))));
                var_45 = -2147483640;
            }
        }
        var_46 = max((((-1681158626 == ((-(arr_0 [i_0])))))), var_4);
    }
    var_47 += var_9;
    #pragma endscop
}
