/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (90 > -1)));
    var_20 &= (max(-12, (~var_18)));
    var_21 = -3633;
    var_22 = var_16;

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_23 = ((!(arr_1 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] = (arr_2 [i_0] [i_1] [4]);
                    arr_7 [i_0] = var_9;
                }
            }
        }

        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            var_24 = (max(var_24, ((min(((~(max(3785129221, (arr_8 [1] [i_3]))))), (((+(((((arr_1 [3]) + 2147483647)) >> (((arr_8 [8] [8]) - 37))))))))))));
            var_25 *= ((((!(((arr_5 [i_0 + 2] [0] [10]) != var_0)))) ? (arr_3 [i_0] [6] [i_0]) : (~90)));
            var_26 ^= (--520865408);

            for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
            {
                var_27 += min((arr_2 [i_0] [i_0] [8]), (((arr_3 [i_3 + 1] [i_4] [i_3 + 1]) ? ((~(arr_0 [i_3 + 1] [i_3 - 1]))) : (arr_3 [i_0 - 2] [i_4] [i_0 - 1]))));
                arr_13 [i_3] [i_3 + 1] [i_0] [i_3] = var_8;
                var_28 = (max(var_28, (!var_3)));
                var_29 = (max(var_29, (((((max((arr_0 [1] [3]), (arr_4 [i_0] [i_4] [4] [i_0])))) ? (arr_5 [i_0 + 2] [i_3 + 1] [i_4]) : ((min((arr_0 [i_3 + 1] [i_0 - 1]), ((max((arr_2 [i_3] [i_3] [i_4]), (arr_2 [i_0 + 2] [i_0] [5]))))))))))));
                arr_14 [i_4] [i_0] [i_0] = ((-520865408 - ((((arr_3 [9] [i_0] [i_4]) != ((-1287498800 ? var_18 : (arr_4 [0] [i_0] [i_4] [i_4]))))))));
            }
            for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
            {
                arr_18 [i_0] [i_0] [i_0] = (((~var_15) == var_13));
                var_30 = (max((((!(arr_3 [i_0] [i_0] [i_3 + 1])))), (((arr_3 [i_3] [i_0] [i_3 + 1]) % (arr_3 [9] [i_0] [i_3 + 1])))));
                var_31 = (min(var_31, (((((max(-5218111465178291483, (max(-22, (arr_10 [i_0] [i_0] [i_3 + 1] [2])))))) ? (((((-44 ? var_12 : 53))) ? (((arr_1 [7]) % (arr_3 [0] [i_5] [6]))) : ((((arr_4 [i_5] [i_5] [i_5] [i_0 - 1]) <= (arr_5 [i_0] [i_3] [i_5])))))) : ((((arr_16 [i_0 - 1] [i_0] [i_0 - 1]) <= (~var_17)))))))));
                var_32 -= (((((min(520865408, 0))) ? (arr_17 [i_0] [i_3] [i_3] [i_5]) : ((((!(arr_12 [i_0] [i_5] [i_0]))))))));
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        arr_27 [i_0] [i_6] [i_7] [i_8] = -8064;
                        var_33 = ((((-1 & -6) ? (((arr_26 [i_0] [i_0 - 2] [i_7] [i_8] [8]) ? var_17 : 127)) : 33)));
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            {
                                var_34 *= (!-87);
                                arr_36 [i_0] [i_9] [i_9] [i_7] [2] [i_6] [i_0] = ((~((((((arr_26 [1] [i_6] [10] [i_9] [i_10]) - (arr_2 [i_6] [i_7] [i_9]))) != (arr_20 [8] [8]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
