/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_15 = -3429474063237480238;
            var_16 = (((((3429474063237480237 ? -2238158384 : ((3429474063237480237 / (-127 - 1)))))) ? ((max(-45, 3540448409))) : 2056808912));
        }
        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_17 = ((1 ? (arr_7 [i_2 - 1] [i_2 - 1] [1]) : (arr_1 [i_2 + 1] [2])));
                            var_18 = (((arr_1 [i_2 + 1] [i_3 + 2]) % 20893));
                            var_19 = 6462271427966448582;
                        }
                    }
                }
                var_20 -= (!1059475766);
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
            {
                var_21 *= ((+((32747 ? (var_14 / -114) : (arr_4 [i_0])))));
                var_22 = ((1 ? (((((2238158384 ? -1854725332 : 1))) + var_14)) : ((((!(arr_15 [i_0] [i_2 + 1] [i_2] [i_2] [i_0])))))));
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        {
                            var_23 = ((((arr_2 [i_2 + 1] [i_6] [1]) ? (arr_2 [i_0] [i_2] [i_8]) : (arr_2 [i_0] [i_0] [i_0]))));
                            var_24 += (-((min(0, 1))));
                            var_25 = ((var_5 ? ((((arr_16 [7] [7] [7] [7]) || 1))) : (((((arr_6 [i_0] [i_0] [i_0]) ? (arr_6 [8] [8] [i_6]) : (arr_20 [i_8] [i_7 + 2] [i_7] [1] [8] [6] [i_0]))) / (((arr_2 [i_0] [9] [i_6]) ? 31626 : 32767))))));
                            var_26 = var_6;
                        }
                    }
                }
            }
            for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
            {
                var_27 = ((max(((2147483647 ? (arr_21 [3] [3]) : -8026263704857536922)), (!-22366675))));
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        {
                            var_28 = ((min(((var_4 ? 1820948804 : 0)), 1)) % 2147483647);
                            var_29 *= -768250546;
                        }
                    }
                }
            }
            var_30 &= (max(1, (arr_11 [i_0] [i_2 - 1])));
            var_31 = (max(var_31, 4064));
        }
        for (int i_12 = 0; i_12 < 13;i_12 += 1)
        {
            var_32 = ((-(arr_12 [i_12])));
            var_33 = (max(45, 28));
            var_34 = ((((max((((7507098382084516159 ? (arr_0 [6]) : 188))), (max(1023, (arr_0 [i_12])))))) ? ((-3429474063237480238 ? (!768250550) : (((arr_12 [i_0]) ? var_2 : (arr_29 [i_0] [i_0]))))) : -1695919216));
        }
        var_35 = (((((arr_30 [i_0] [1] [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) && ((min((arr_3 [i_0] [i_0]), 0))));
    }
    var_36 = (max(0, var_1));
    #pragma endscop
}
