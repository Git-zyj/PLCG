/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((+(((((~var_4) + 2147483647)) << ((((min((arr_1 [i_0]), (arr_0 [12])))) - 48))))));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_6 [0] [0] [0] = ((~(arr_4 [i_0] [i_1])));
            var_12 = (max(var_12, (((var_1 | (((!((((arr_1 [i_0]) / var_9)))))))))));
            var_13 = ((((((13149181852660783297 ? var_5 : var_10)))) ? (var_6 > 0) : (((((!(arr_4 [i_0] [i_1])))) << 1))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    {

                        for (int i_4 = 1; i_4 < 14;i_4 += 1) /* same iter space */
                        {
                            var_14 ^= (((((var_1 ? (arr_14 [12] [i_1] [12] [12] [9]) : -var_4))) + (arr_10 [i_0] [i_3 + 1] [5] [i_3] [5])));
                            var_15 = (min((arr_11 [i_3 + 1] [i_4 + 1] [i_4 + 1] [i_4] [i_4] [0]), 2097151));
                        }
                        for (int i_5 = 1; i_5 < 14;i_5 += 1) /* same iter space */
                        {
                            var_16 = (max(var_16, (((-(arr_14 [13] [13] [13] [i_5 + 1] [i_3 + 2]))))));
                            var_17 += 1;
                            var_18 -= (max(-40, var_8));
                        }
                        for (int i_6 = 1; i_6 < 14;i_6 += 1) /* same iter space */
                        {
                            var_19 = (!((!(arr_8 [i_0] [i_6 + 1] [i_2] [i_3 - 1]))));
                            var_20 = (max(var_20, ((min(((((!5) == (((907568849334323484 < (arr_9 [13] [i_1] [i_2] [13]))))))), ((-(!1))))))));
                        }

                        for (int i_7 = 1; i_7 < 14;i_7 += 1)
                        {
                            var_21 |= ((~(((arr_5 [i_0] [i_1]) ? (arr_12 [i_0] [i_1] [i_2] [i_3 + 2] [i_7]) : ((max(var_0, (arr_9 [i_0] [i_0] [i_0] [i_0]))))))));
                            var_22 = (!(((-((2147483626 ? var_7 : 907568849334323484))))));
                        }
                        for (int i_8 = 3; i_8 < 12;i_8 += 1)
                        {
                            arr_25 [i_0] [i_8] [i_0] [i_0] = ((~(((9282657194864594286 != (((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_7 : -3156084864878911279)))))));
                            var_23 -= (arr_10 [1] [i_1] [i_1] [i_1] [i_1]);
                        }
                    }
                }
            }
        }
    }
    var_24 ^= ((((((!var_3) + ((var_4 ? var_1 : 16649))))) ? (~var_10) : (((!((max(1, var_5))))))));
    #pragma endscop
}
