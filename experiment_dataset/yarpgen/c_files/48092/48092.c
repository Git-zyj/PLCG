/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= var_11;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_19 = (max(var_19, (arr_7 [i_0] [i_0] [i_0] [i_0])));
                arr_9 [i_2] [i_2] = (arr_1 [i_1 + 2]);
            }
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                var_20 = (min((min((((arr_6 [i_3] [i_3]) ? (arr_2 [i_3]) : 1579585879)), ((min((arr_10 [i_0] [i_3]), (arr_11 [i_3] [i_1] [i_0])))))), ((max((arr_0 [i_3] [i_3]), (!2715381392))))));

                for (int i_4 = 3; i_4 < 14;i_4 += 1)
                {
                    var_21 -= ((((min(2715381419, ((max((arr_7 [1] [4] [i_0] [i_4]), (arr_14 [i_0] [i_0] [12] [6] [i_4]))))))) ? 1579585898 : ((min((min(var_1, (arr_10 [i_1] [i_1]))), 13)))));
                    arr_16 [i_4] [4] [i_3] [i_4] = (arr_2 [7]);
                }
                var_22 = (max(((max(1, 18))), (((!-29142) ^ ((min(255, 18)))))));
                var_23 -= 1579585920;
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                var_24 ^= var_13;

                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    arr_21 [i_0] [i_5] [1] [3] = ((-(arr_18 [i_0] [i_1 + 2])));

                    for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                    {
                        var_25 = (arr_1 [i_0]);
                        var_26 *= arr_23 [i_0] [i_0];
                        var_27 -= ((238 ? (arr_3 [i_6]) : (((1 ? var_13 : 126)))));
                        var_28 = ((((((arr_0 [i_6] [i_7]) ? 1 : (arr_11 [1] [1] [1])))) ? (arr_13 [4] [i_1] [i_1] [i_1]) : 227));
                    }
                    for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
                    {
                        var_29 = (2715381404 - 245);
                        arr_28 [i_0] [i_6] [i_0] |= ((4029874185 <= (arr_15 [i_1 + 1] [i_1] [i_1] [i_1] [12])));
                        var_30 = (arr_17 [i_1] [i_8]);
                    }
                    for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
                    {
                        arr_33 [i_0] [i_5] [14] [i_5] [i_9] = -5;
                        arr_34 [i_1] [i_5] [i_6] [i_5] = 4029874191;
                    }
                    arr_35 [i_5] [5] [i_5] [5] = ((!(((~(arr_0 [i_1] [3]))))));
                    var_31 *= (~((((arr_18 [i_0] [i_1]) >= 61))));
                }
            }

            for (int i_10 = 4; i_10 < 14;i_10 += 1)
            {
                arr_39 [i_1 + 1] [i_10] = (arr_19 [i_0] [11] [i_1] [i_10]);
                arr_40 [i_10] [i_1] [i_10] = (min((min(1579585895, (arr_26 [i_1 + 1] [i_10] [i_1 + 2] [10] [i_1] [i_0] [i_10 - 1]))), ((max(1, (!134215680))))));
            }
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 15;i_11 += 1)
        {

            for (int i_12 = 0; i_12 < 15;i_12 += 1) /* same iter space */
            {
                var_32 = (min(var_32, -96));
                arr_47 [i_11] [i_11] = (((arr_23 [i_12] [i_11]) ^ (arr_23 [i_0] [i_11])));
            }
            for (int i_13 = 0; i_13 < 15;i_13 += 1) /* same iter space */
            {
                arr_50 [11] [i_11] [i_11] = 265093126;
                arr_51 [12] [i_13] [i_11] [14] = ((((217 ? (arr_11 [i_0] [14] [i_13]) : 265093125))) ? ((1579585855 ? -6 : (arr_17 [i_11] [i_13]))) : (((arr_15 [i_13] [i_13] [i_11] [i_0] [i_0]) ? (arr_41 [i_0] [1] [i_13]) : (arr_29 [i_0] [i_0] [i_11] [i_11] [i_13]))));
            }
            arr_52 [i_0] [i_0] [i_0] = ((!(arr_18 [i_0] [11])));
        }
        var_33 += ((((((arr_13 [i_0] [i_0] [i_0] [i_0]) + ((max((arr_17 [i_0] [i_0]), -17)))))) ? (((!(arr_19 [i_0] [i_0] [i_0] [i_0])))) : ((max((min(126, 25)), 1)))));
    }
    var_34 &= ((120 ? (min((~1), (min(25, 1579585888)))) : var_15));
    #pragma endscop
}
