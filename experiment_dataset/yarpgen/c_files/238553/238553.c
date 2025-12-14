/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_18 = (min(153, 70));

        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            var_19 = ((var_7 >> ((((((arr_3 [i_0] [i_1 - 1] [i_0]) ? var_1 : 64))) ? (arr_1 [i_0]) : (arr_2 [i_0 + 1])))));
            var_20 = (min(var_20, (((38405 < 177) | ((7126023440900788091 ? 728686658 : 164))))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 10;i_4 += 1)
                {
                    {
                        var_21 = (min(((((arr_3 [i_0] [i_2] [i_3]) ? (((153 ? 1144536949 : 3491335500))) : (min((arr_3 [i_0] [8] [i_4]), (arr_9 [i_0])))))), (max((var_13 - -20670), ((max(var_9, 764051999)))))));

                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_22 = 20021;
                            var_23 = ((((((195 < (arr_3 [i_0] [i_0 + 1] [i_4 + 1]))))) ^ (max((arr_6 [i_0]), (arr_3 [i_0] [i_0 + 1] [i_4 + 1])))));
                        }
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            var_24 = ((181 ? ((((arr_11 [i_0 + 1] [i_0 + 3] [i_4 - 1] [i_4 - 1]) || (arr_13 [i_0 + 3] [i_4 - 1] [i_6] [i_6] [i_6])))) : (max((var_14 || 23877), ((113 ? (arr_0 [i_0]) : var_12))))));
                            arr_16 [i_0 - 1] [i_4] [i_4] [i_2] [i_6] [i_0] [i_0] = (max(((min((arr_1 [i_0]), (arr_1 [i_0])))), ((max(var_6, (arr_13 [i_0 - 1] [i_2] [i_0 - 1] [i_4] [i_0 - 1]))))));
                        }
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            var_25 ^= ((arr_4 [i_4 - 1] [i_7] [i_0 + 1]) ? (((var_17 ^ (arr_4 [i_4 - 1] [i_4 - 1] [i_0 + 3])))) : (max((arr_1 [i_7]), var_6)));
                            var_26 = (max(((min(764051994, 68))), 2723753137));
                        }
                    }
                }
            }
            arr_20 [i_0] [i_0] = (((~159) ? (((-(((!(arr_2 [i_0]))))))) : ((+(((arr_14 [i_0]) ? (arr_18 [i_0] [i_0] [i_0]) : 2723753139))))));
        }
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            arr_23 [i_0] [i_0] = max((((!((max(var_1, var_12)))))), (((((arr_15 [i_8] [i_8] [i_8] [i_0] [i_0 - 1] [i_0]) != (arr_1 [i_0]))) ? (arr_8 [i_0] [i_0] [i_0 + 2]) : ((((arr_0 [i_0]) ? (arr_13 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_8]) : (arr_22 [i_8])))))));
            /* LoopNest 3 */
            for (int i_9 = 4; i_9 < 9;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        {
                            var_27 = (((arr_26 [i_0] [i_0] [i_0] [i_10] [10]) + (min((arr_10 [i_0 + 1] [i_9] [i_9] [i_10]), (arr_13 [i_0 + 3] [i_8] [i_9] [i_9 + 2] [i_11])))));
                            arr_31 [i_0] [i_9] &= (45390 >= 4034247765);
                            var_28 = (arr_18 [i_0 + 2] [i_0] [i_11]);
                        }
                    }
                }
            }
        }
        arr_32 [i_0] = (max((max(20550, 71916856549572608)), ((((arr_28 [i_0 + 1] [6] [i_0 + 1]) && (arr_28 [i_0 - 1] [i_0] [i_0 - 1]))))));
        var_29 = (min(var_29, -30085));
    }
    var_30 = var_5;
    var_31 = ((-((max(var_15, var_12)))));
    #pragma endscop
}
