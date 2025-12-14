/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_15 = (max((arr_1 [i_0]), (((arr_1 [i_0]) ^ (arr_1 [i_0])))));
        var_16 *= var_13;

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_17 = (min((((28998 ? 1787125092 : 36537))), ((((max(18446744073709551615, (arr_4 [i_0] [i_1] [i_0]))) <= ((((!(arr_1 [8]))))))))));
            arr_7 [2] [i_0] [2] &= var_14;

            /* vectorizable */
            for (int i_2 = 4; i_2 < 10;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 3; i_3 < 8;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        {
                            arr_16 [i_2] [i_1] [i_2] [i_3] [7] [i_3] [i_0] = ((arr_14 [1] [6] [i_0] [i_2 - 4] [i_3 + 2] [i_2 + 1]) + (arr_6 [i_1] [i_1] [i_4]));
                            arr_17 [i_1] [i_3] [i_3] [i_4] = -1181406818115236821;
                            var_18 += ((((-(arr_6 [i_3 + 1] [i_3 + 3] [i_3]))) > (-5617 <= 92)));
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    var_19 = (max(var_19, (((~(92 || var_14))))));
                    var_20 &= (((((9210906156672960338 ? (arr_3 [i_0]) : (arr_10 [5] [1])))) ? 225 : var_7));
                }
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    var_21 *= 5507545850623505991;
                    var_22 ^= var_3;
                }
            }
            for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
            {
                var_23 += var_6;
                arr_25 [1] [i_1] [i_7] = var_7;
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        {
                            arr_32 [5] = var_9;
                            var_24 = -1727605328;
                        }
                    }
                }
                var_25 -= var_2;
            }
            var_26 = (min(var_26, ((max(((((((arr_8 [i_1]) - var_14)) / var_9))), ((-(arr_31 [i_0] [i_0] [i_1] [9] [i_1] [i_1]))))))));
        }
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            arr_36 [i_11] = ((21183 < (~8518)));
            var_27 = ((-(((!(!167))))));
            var_28 = ((((max(-24506, 9))) || ((min(var_3, 12481)))));
            var_29 = arr_18 [i_0] [5] [i_11] [i_0] [10] [8];
        }
        for (int i_12 = 0; i_12 < 11;i_12 += 1)
        {
            arr_40 [9] [i_12] [i_12] = (max(9223372036854775807, 17168905920398288876));
            var_30 ^= (((((((arr_19 [i_0] [i_0] [i_0] [i_12] [i_12]) != (var_5 || 1))))) * ((222 - (arr_19 [i_12] [i_12] [5] [i_0] [i_0])))));
        }
    }
    var_31 = var_14;
    var_32 = (var_3 ? -32762 : ((var_6 ? (~9235837917036591277) : var_13)));
    var_33 &= var_9;
    #pragma endscop
}
