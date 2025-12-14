/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_3] = (min((arr_10 [i_1 - 1]), (min((arr_10 [i_1 + 2]), var_8))));
                        arr_12 [i_0] [i_3] [i_3] [i_3] = (arr_1 [i_0]);
                        var_19 = ((!(arr_3 [i_2 - 1] [i_1 + 4])));
                        var_20 = (min(var_20, (((12 ? 16757 : -16757)))));
                    }
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        arr_15 [i_0] [i_1 - 1] [i_0] [i_4] = ((((((((arr_8 [i_0] [i_0] [1] [i_0]) << (-105 + 109)))) ? (((arr_13 [i_0]) << (var_15 - 42764))) : (((!(arr_1 [i_0])))))) << (7197278020462884178 - 7197278020462884174)));
                        arr_16 [i_0] = (var_5 & 14);
                        var_21 = (((((~((-1047 ? var_8 : (arr_7 [i_0] [i_1 + 1] [i_0] [i_0])))))) ? (arr_9 [i_2] [i_4] [i_2] [i_0]) : (((!(arr_6 [i_0] [i_2 + 1] [i_4 - 1]))))));
                    }
                    for (int i_5 = 3; i_5 < 9;i_5 += 1)
                    {

                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 8;i_6 += 1)
                        {
                            var_22 = (-((~(arr_10 [i_6 - 1]))));
                            arr_23 [i_2] [i_2 - 2] [i_0] = (arr_18 [i_0] [i_1 + 2] [i_0] [i_6 - 1]);
                        }
                        for (int i_7 = 4; i_7 < 8;i_7 += 1) /* same iter space */
                        {
                            arr_26 [i_0] [i_1] [i_2 - 2] [i_5] [1] [i_2 - 2] [i_0] = (((!(arr_5 [5] [i_1 + 4] [i_2]))) ? ((+(max((arr_4 [i_0] [i_0] [i_5 - 1]), 1422391878)))) : ((((arr_4 [i_0] [i_5 - 2] [i_2]) ? var_12 : var_0))));
                            arr_27 [i_0] [i_0] = (~(-97 > -105));
                        }
                        for (int i_8 = 4; i_8 < 8;i_8 += 1) /* same iter space */
                        {
                            arr_31 [i_0] [i_1] [i_1] [i_1] [i_1 + 2] = ((-(min((arr_14 [i_0] [i_1 + 3] [i_2] [i_8 + 1] [i_8 - 2]), (arr_14 [i_0] [i_1 + 4] [i_2] [i_5 + 2] [i_8 - 3])))));
                            arr_32 [i_0] [i_0] [i_5 - 3] = ((-1422391882 ? 0 : 1074));
                        }
                        arr_33 [i_0] [i_0] [i_2] = 5267001859719327261;
                        var_23 = ((((arr_4 [i_0] [i_2 - 1] [i_5 + 1]) ? (arr_13 [i_0]) : (arr_7 [i_2 - 2] [1] [i_0] [i_2 + 1]))));
                    }
                    var_24 &= ((1422391873 | (arr_10 [i_0])));
                }
            }
        }
    }
    var_25 = (max(var_9, var_2));
    var_26 = var_1;
    #pragma endscop
}
