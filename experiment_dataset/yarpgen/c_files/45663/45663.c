/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (-7983558380361053915 / 71096095);
    var_20 = var_8;
    var_21 = var_15;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = (((~0) ? (((!((((arr_0 [i_0]) + 1060861080)))))) : (arr_0 [i_0])));
        var_22 = 16;
    }
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {

                        for (int i_5 = 1; i_5 < 23;i_5 += 1)
                        {
                            var_23 |= (arr_13 [i_3]);
                            arr_18 [i_1 + 1] [i_3] [i_1 - 1] [i_1] = (((arr_12 [i_3] [i_2] [i_3]) ? var_12 : (arr_17 [i_2] [i_3])));
                            var_24 = ((((-3253 ? (arr_4 [i_5 - 1]) : 18446744073709551608)) * (((((-2147483647 - 1) || (-16 && 1271365603)))))));
                        }

                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_25 -= 4;
                            var_26 = (~var_12);
                            arr_21 [i_2] |= ((+((min((arr_10 [9] [i_3]), 0)))));
                            arr_22 [i_1 - 1] [i_3] [i_3] [i_1 - 1] = ((~(((arr_19 [i_1] [i_1] [1] [i_1] [i_1 + 1] [i_1 + 1]) ? (arr_19 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 1]) : (arr_19 [20] [i_1] [i_1] [i_1] [i_1 - 1] [i_1 - 1])))));
                        }
                        var_27 = (arr_19 [i_1 + 1] [i_1 + 1] [3] [i_1] [i_1 + 1] [i_1 + 1]);

                        for (int i_7 = 1; i_7 < 21;i_7 += 1)
                        {
                            var_28 = (min(var_28, -4386896261138225404));
                            arr_27 [i_4] [i_3] [i_1] = (arr_8 [i_2]);
                            arr_28 [i_3] = (~13059);
                            var_29 = (((((-(arr_8 [1])))) ? (((-(arr_16 [i_1 - 1] [16] [i_1] [i_1 + 1] [i_7] [i_7 - 1] [i_7])))) : var_12));
                        }
                        for (int i_8 = 2; i_8 < 23;i_8 += 1) /* same iter space */
                        {
                            arr_31 [i_3] [i_4] = ((min((arr_9 [2] [2]), (min((arr_20 [1] [1] [11] [i_3] [i_4] [1]), var_5)))));
                            arr_32 [6] [i_3] [i_4] [i_3] [i_8 - 1] [1] = (2147483647 ? 4386896261138225401 : -52);
                            var_30 = (arr_20 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]);
                            var_31 = (((((var_15 ? (arr_11 [i_1 - 1] [i_2] [i_3]) : ((~(arr_23 [i_1 - 1] [i_1] [i_2] [1] [i_4] [i_8] [i_8])))))) >= (min((arr_15 [i_1] [1] [i_1 + 1] [i_3]), var_6))));
                        }
                        for (int i_9 = 2; i_9 < 23;i_9 += 1) /* same iter space */
                        {
                            arr_35 [i_1] [1] [3] [i_3] [23] [i_4] [i_3] = var_9;
                            var_32 *= arr_25 [i_3] [i_9] [i_4] [i_4] [i_9];
                            arr_36 [i_1] [i_3] [i_2] [i_1] [i_4] [3] [i_9] = ((1 ? -36 : ((min((arr_34 [i_3] [i_4] [i_1] [i_3]), 39722)))));
                            arr_37 [i_1] [i_2] [i_2] [i_1] [i_3] [i_9 - 1] [i_9] = 4386896261138225404;
                        }
                    }
                }
            }
        }
        arr_38 [i_1] = min((((((arr_5 [i_1]) ? 4216753742 : (arr_13 [i_1]))))), 15360697383332022938);
        /* LoopNest 2 */
        for (int i_10 = 2; i_10 < 21;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                {
                    var_33 = ((~(((arr_29 [i_10 - 2] [20] [i_11] [i_11] [i_1] [12]) ? (arr_15 [i_11] [i_1 - 1] [1] [i_11]) : (arr_29 [i_10 - 2] [i_1] [i_10] [i_10] [i_1] [i_1])))));
                    var_34 = (min((-127 - 1), -8917115903552925986));
                }
            }
        }
    }
    #pragma endscop
}
