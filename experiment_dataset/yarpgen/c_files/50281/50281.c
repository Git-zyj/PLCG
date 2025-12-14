/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_5 >= ((max((-32 / var_6), var_8)))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_14 = ((((max((arr_8 [i_0] [i_1]), (arr_8 [i_0] [i_2])))) ? (min((arr_8 [i_1] [i_1]), (arr_8 [i_0] [i_0]))) : (min((arr_8 [i_0] [i_0]), (arr_8 [i_0] [11])))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [18] [i_2] [i_3] [i_2] |= ((((((arr_5 [i_3 - 1] [i_3] [1]) != (arr_6 [i_0] [i_3 + 2] [i_3 + 2])))) - var_2));
                                var_15 += ((((((arr_13 [i_0] [i_0] [0] [i_2] [i_3] [i_4]) >= (arr_14 [i_4] [i_4] [i_2] [i_0] [i_4] [20])))) >> (var_1 + 1884769399278995357)));
                                var_16 = (!var_2);
                                arr_17 [2] [i_3 + 2] [i_0] [i_1] [i_0] [8] [i_0] &= (max(((max(-54, 16))), (((-123 + 2147483647) >> 1))));
                            }
                        }
                    }
                }
            }
        }
        arr_18 [i_0] = ((!(((arr_9 [11] [18] [i_0] [11] [i_0] [i_0]) && (arr_9 [i_0] [i_0] [i_0] [1] [1] [i_0])))));

        for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
        {
            var_17 = (((((((~(arr_7 [i_0] [i_5] [3]))) | ((var_6 >> (((arr_15 [11] [11] [i_5]) - 13076))))))) ? (arr_19 [i_0] [14]) : (((arr_5 [i_0] [i_0] [12]) & var_2))));
            var_18 = ((+(((arr_12 [i_5] [1] [i_5]) | (arr_7 [i_0] [i_5] [i_5])))));
        }
        for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
        {
            arr_24 [7] &= (((((max(var_2, 1662748927)))) ? ((((((var_9 != (arr_8 [i_0] [i_6])))) % (arr_6 [i_0] [i_0] [i_0])))) : var_5));

            /* vectorizable */
            for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
            {

                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    arr_32 [1] [13] [18] [i_7] [i_8] = (((arr_30 [i_0] [i_0] [i_0]) ? (arr_30 [i_0] [i_7] [i_8]) : (arr_30 [i_0] [i_0] [i_0])));
                    arr_33 [7] [7] [i_7] = ((((arr_1 [i_8]) ? var_9 : 19)));

                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        arr_36 [3] [i_8] [0] [i_6] [i_0] = -1249944003;
                        arr_37 [i_0] [i_6] [i_6] [i_6] [i_9] = -var_1;
                        arr_38 [0] [i_7] [i_8] [i_9] [16] [0] = (((235 >> (248 - 226))));
                        var_19 = (((arr_6 [i_0] [i_7] [i_8]) << (((arr_6 [3] [i_6] [i_8]) - 31))));
                        var_20 = ((((-5027202841743232575 ? (arr_21 [i_0] [i_6]) : -406867163)) - 72));
                    }
                    arr_39 [i_8] [20] [20] [i_0] = ((!(((arr_29 [i_0] [i_0] [i_7] [i_7] [i_7]) <= var_4))));
                }

                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    var_21 = (max(var_21, (((!(arr_23 [i_0] [i_7]))))));
                    arr_42 [i_0] [i_6] [15] [15] &= (((arr_13 [i_0] [i_6] [i_6] [i_6] [i_6] [18]) % (~var_2)));
                }
            }
            for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
            {
                var_22 = (min(var_22, ((max((((arr_43 [i_6] [i_6] [i_6] [i_6]) >> (!var_4))), ((((arr_30 [i_0] [i_6] [16]) || (arr_30 [i_0] [i_0] [i_0])))))))));
                arr_46 [6] [i_6] [i_6] [i_11] = ((~(((arr_34 [1] [i_6] [i_6] [i_6] [6]) ? (arr_7 [i_0] [i_6] [i_11]) : var_7))));
                var_23 = (max(var_23, var_2));
                var_24 = ((var_3 <= (arr_30 [i_0] [i_6] [i_11])));
            }
            var_25 = (max(((~(arr_2 [i_6]))), ((((arr_2 [i_0]) && (arr_2 [i_0]))))));

            /* vectorizable */
            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {
                var_26 &= ((-(arr_45 [i_0] [i_0])));
                var_27 = var_12;
            }
            var_28 = (((-1249943995 / var_8) * ((((arr_10 [i_0] [i_0] [i_0] [i_0]) ? (arr_10 [i_6] [i_6] [i_6] [i_6]) : (arr_10 [i_0] [i_6] [i_0] [i_0]))))));
        }
        arr_51 [i_0] [i_0] &= ((((max((var_10 - var_12), 2939894935))) ? ((-(((arr_31 [i_0] [i_0] [i_0] [i_0]) - (arr_41 [i_0] [i_0] [i_0] [i_0]))))) : (((-(var_2 + 1249943994))))));
    }
    var_29 = var_10;
    #pragma endscop
}
