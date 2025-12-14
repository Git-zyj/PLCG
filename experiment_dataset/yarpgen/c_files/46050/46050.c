/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (!var_0);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        arr_9 [i_3] = 0;
                        arr_10 [i_1] [i_3] = (!var_7);
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            {
                                arr_17 [10] [1] [i_1] [i_2] [1] [0] [1] = var_5;
                                arr_18 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4] [6] [i_4] = var_5;
                                var_11 = 6036023489537614072;
                                arr_19 [i_0] [i_1] [i_2] [3] [i_5] = (arr_0 [i_4 - 2]);
                                arr_20 [i_0] [8] [i_2] = var_7;
                            }
                        }
                    }
                }
            }
        }
        arr_21 [i_0] = max((((!(((63 ? -38632683 : var_7)))))), (((((min((arr_16 [i_0]), var_3)))) + var_9)));
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_27 [i_6] [i_7] = (max(1114668252, ((((((var_0 ? (arr_23 [i_6] [1]) : var_6))) ? (arr_14 [i_6] [i_7] [i_7] [7] [i_6]) : (~var_6))))));
            var_12 += ((((3749311468 % (arr_16 [i_7]))) != var_6));
            var_13 = (((((-2075063793 ? var_2 : 4294967284)) ? (var_4 & var_5) : (~var_2))));
        }
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            arr_30 [i_6] [i_6] = var_6;
            arr_31 [i_6] = (arr_5 [i_6]);
            arr_32 [i_6] [i_6] [i_6] = var_5;
            var_14 = (min(var_14, var_4));
        }
        var_15 = (max(var_15, (((var_6 ? (((-5142518883234111199 ? var_9 : (arr_29 [i_6] [i_6] [i_6])))) : (!var_2))))));
    }
    var_16 = var_4;
    #pragma endscop
}
