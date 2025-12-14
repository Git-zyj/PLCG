/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_16 *= (((var_13 == ((var_11 ? var_1 : var_11)))));
                var_17 = (min(var_17, ((((((-(arr_2 [i_1])))) ? (((var_5 ? (arr_2 [i_1]) : var_6))) : ((var_13 ? ((-(arr_3 [i_0]))) : (var_15 >> var_11))))))));
                arr_5 [i_0] = ((+(((arr_3 [i_0 - 1]) ? ((max((arr_2 [i_0]), 233))) : (-65 % var_6)))));
                var_18 = var_15;
            }
        }
    }
    var_19 = ((((((27 ? var_1 : 11)) / var_10)) == ((((var_14 ? var_9 : -9348)) >> (var_13 - 175)))));

    /* vectorizable */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_20 = ((!(arr_6 [i_2] [i_2])));
        var_21 = (arr_6 [i_2] [i_2]);
        arr_8 [i_2] = 11323623561508172742;
        arr_9 [i_2] = (((var_2 ? var_6 : var_14)));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {

        for (int i_4 = 1; i_4 < 17;i_4 += 1)
        {
            arr_15 [i_3] [i_4] [i_4] = (((arr_14 [i_4] [i_4] [i_4]) ? (arr_6 [i_4 - 1] [i_4 + 1]) : ((var_9 ? var_0 : var_5))));
            var_22 ^= var_1;
            arr_16 [i_4] = ((211 ? var_0 : (arr_7 [i_3])));
            var_23 = (((arr_11 [i_4 - 1]) ? (arr_11 [i_4 + 1]) : (arr_13 [i_4 - 1] [i_4 + 2])));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 18;i_6 += 1)
                {
                    {

                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            var_24 = (max(var_24, 18446744073709551601));
                            var_25 = ((!((((arr_7 [i_5]) ? -65 : (arr_24 [i_3] [i_3] [i_3]))))));
                        }
                        for (int i_8 = 1; i_8 < 16;i_8 += 1)
                        {
                            var_26 |= ((((((((arr_26 [i_4] [i_6]) + 2147483647)) << (5 - 5)))) ? ((~(arr_26 [i_3] [i_4]))) : -94));
                            var_27 = (~285780930874679206);
                            var_28 -= (((arr_10 [i_6 + 1]) % var_6));
                        }
                        var_29 = (((arr_13 [i_4 + 1] [i_3]) ? 227 : (arr_13 [i_4 + 1] [i_3])));
                        arr_28 [i_4] [i_4] [i_5] [i_6] = ((var_15 ? var_1 : (arr_25 [i_4 + 1] [i_3] [8] [i_6 + 1])));
                        var_30 = ((~var_7) ? var_1 : -1965435507);
                        arr_29 [i_4] [i_4] [15] [i_5] [i_5] [i_6 - 2] = (arr_19 [i_6] [i_4] [i_4] [i_4] [i_3]);
                    }
                }
            }
        }

        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            var_31 = ((var_11 - (arr_19 [i_9] [i_9] [i_9] [i_9] [i_3])));
            arr_32 [i_3] [i_9] [i_9] = (((!var_5) ? (arr_18 [i_3] [i_3] [i_3]) : (((var_8 ? var_14 : var_14)))));
        }
        for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
        {
            var_32 = (((arr_30 [i_3] [i_3] [i_10]) ? (arr_33 [i_10]) : var_2));
            var_33 = (max(var_33, (((!(arr_34 [i_3]))))));
        }
        for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
        {
            var_34 ^= (((arr_12 [i_3]) ? ((-12799 ? var_14 : var_5)) : (arr_12 [i_11])));

            for (int i_12 = 0; i_12 < 19;i_12 += 1)
            {
                arr_40 [i_11] [i_11] [i_11] [i_11] = (((arr_12 [i_12]) & (arr_12 [i_11])));
                arr_41 [i_3] [i_12] [i_12] [i_11] = -72;
            }
            var_35 ^= (((var_7 ? var_8 : (arr_22 [i_3] [i_11] [i_11]))));
            var_36 = (((arr_27 [i_3] [i_11] [i_11] [i_11] [i_11]) ? var_5 : 2030820558825230979));
        }
    }
    var_37 = ((var_7 ? ((~(252 & var_5))) : ((var_15 ? (!var_12) : ((max(6, var_2)))))));
    #pragma endscop
}
