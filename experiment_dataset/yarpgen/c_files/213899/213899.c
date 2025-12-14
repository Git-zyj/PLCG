/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_10 += ((!(arr_2 [i_0])));
        var_11 += (((((((arr_1 [i_0] [i_0]) > 116))) >= 255)) ? ((min(var_1, -112))) : var_0);
    }
    var_12 = var_7;
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 24;i_2 += 1)
        {
            {
                var_13 -= var_9;

                for (int i_3 = 1; i_3 < 22;i_3 += 1) /* same iter space */
                {
                    arr_12 [3] [i_3] [3] = var_7;
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 24;i_5 += 1)
                        {
                            {
                                arr_18 [i_2] [i_2] [0] [i_2] [i_2] = var_0;
                                arr_19 [i_1] [i_1] [i_3] [19] [i_1] = ((~(((arr_17 [i_5] [i_4 - 1] [i_4] [i_4] [4] [4] [18]) ? (((arr_9 [i_4] [i_4] [23] [i_4]) ? -113 : var_3)) : ((min((arr_14 [i_1] [10] [23] [10]), var_6)))))));
                                var_14 = ((((27899 ? (27899 || -54) : (arr_15 [i_1]))) | 10151));
                            }
                        }
                    }
                }
                for (int i_6 = 1; i_6 < 22;i_6 += 1) /* same iter space */
                {
                    var_15 = ((((max(458756492, 35552))) ? ((((255 >= ((max(var_9, (arr_3 [i_1])))))))) : (((arr_5 [i_1] [i_2 + 1]) ? (arr_14 [i_1] [i_2 + 1] [i_2 + 1] [i_2 + 1]) : (arr_14 [i_1] [i_2 + 1] [i_6] [i_6])))));
                    var_16 -= (arr_22 [i_1] [13] [i_2] [i_6]);
                    var_17 ^= (max((((((max(-27899, (arr_10 [18])))) ? (arr_14 [i_6 + 2] [i_6] [4] [i_2 - 1]) : (arr_7 [i_1])))), ((1158760279199141306 ? (arr_8 [10] [i_2] [i_1]) : (arr_10 [i_1])))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            {
                                arr_30 [i_6] [1] [2] [1] [i_8] [i_8] = (arr_9 [i_2] [i_2] [i_7] [i_8]);
                                var_18 = (arr_23 [i_1] [2] [i_6] [i_6]);
                                var_19 = ((-27901 ? -1756216608 : var_6));
                                var_20 = -7458666417227420535;
                            }
                        }
                    }
                    arr_31 [i_6] = ((max(((var_3 & (arr_15 [21]))), (((~(arr_15 [6])))))));
                }
                for (int i_9 = 1; i_9 < 22;i_9 += 1) /* same iter space */
                {
                    var_21 *= ((-((245 ? (arr_6 [i_9 + 2]) : (arr_6 [i_9 + 3])))));
                    arr_36 [i_1] [i_1] [1] = (15222201441306716954 * 0);
                    arr_37 [i_1] [8] [i_9] [1] = (arr_7 [i_2]);
                }
                arr_38 [i_1] [1] = ((((max((arr_35 [i_1] [9] [9] [1]), (arr_35 [i_1] [12] [13] [i_1])))) ? (arr_17 [i_2] [i_2 + 1] [i_2] [1] [1] [i_2] [i_2 + 1]) : ((((((arr_4 [i_1]) ? var_3 : var_1))) ? (arr_28 [i_2 - 1] [i_2 - 1] [6] [4] [i_1] [6] [i_2 + 1]) : var_9))));
            }
        }
    }
    #pragma endscop
}
