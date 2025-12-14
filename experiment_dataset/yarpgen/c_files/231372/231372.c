/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 145;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_2] = ((~(((arr_2 [i_0]) >> var_5))));

                    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
                    {
                        var_14 &= (min(2147483647, ((min((arr_4 [i_0] [16] [i_3]), (33538048 >= var_0))))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            arr_15 [i_0] [i_1] [i_0] [i_0] [i_3] [i_4] = (!(127 + 3211062400));
                            var_15 = (max(var_15, (!70368744177662)));
                            var_16 = (((((var_12 ? (arr_13 [i_4]) : var_11))) >= ((1 ? (arr_13 [i_0]) : var_7))));
                            var_17 = (min(var_17, ((((arr_11 [14] [i_0] [i_1] [i_4] [14] [i_4] [i_4]) ? (arr_8 [i_3] [i_4] [i_4] [i_0]) : (arr_11 [i_4] [i_3] [i_2] [i_4] [i_1] [i_1] [10]))))));
                        }
                        var_18 = (min((max(((min(var_1, (arr_6 [i_0] [i_1] [i_0] [0])))), ((70368744177659 << (1083904892 - 1083904879))))), ((((arr_0 [i_3] [i_1]) <= (!var_11))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                    {
                        arr_18 [i_0] = (((arr_14 [i_5] [i_0] [i_2] [i_2] [i_0] [i_0]) + (arr_12 [i_0] [i_2] [i_5])));
                        var_19 -= ((((((arr_0 [i_0] [i_0]) ? (arr_2 [i_0]) : (arr_4 [i_0] [1] [i_5])))) || 2));
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_6 = 1; i_6 < 17;i_6 += 1)
    {
        var_20 -= (!238);
        var_21 &= (((arr_13 [i_6 + 1]) ? (arr_3 [i_6 + 1]) : (~-1783057454)));
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 17;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            {

                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    var_22 &= (!((((5 > 3211062400) ? (arr_10 [8]) : ((((arr_29 [i_7] [1] [i_9]) ? (arr_22 [i_7]) : 197)))))));
                    var_23 = (((~240) % ((((min((arr_19 [i_8]), -611701681)) >= (min(31, -70368744177662)))))));
                    var_24 = ((~(((arr_11 [i_7 - 1] [13] [i_7 - 1] [i_8] [14] [i_9] [i_7 - 1]) & (arr_11 [i_7 + 1] [i_7 + 1] [i_7] [i_8] [i_9] [i_9] [i_7 + 1])))));
                }
                var_25 = var_2;
                var_26 = ((-(((arr_21 [i_8]) ? var_4 : 134))));
                arr_30 [i_7] [i_8] [i_8] = (((arr_14 [2] [i_8] [i_7] [i_7 + 1] [i_8] [i_7]) % (arr_12 [i_8] [i_7 + 1] [i_7 + 1])));
            }
        }
    }
    var_27 = max(1, var_3);
    #pragma endscop
}
