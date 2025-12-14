/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 10;i_4 += 1)
                    {
                        {
                            var_18 = (((4049057967769015275 || -227621366) / (((max(-260151813, var_13))))));
                            var_19 = (max(var_19, (arr_4 [i_0])));
                            arr_14 [2] [12] [0] [7] [i_3] [12] = ((((var_13 ? 525871935 : ((max(-1956, -1956)))))) & var_12);
                            arr_15 [9] [11] [6] [i_3] [12] [2] = ((-(((!(arr_9 [i_4 + 1]))))));
                        }
                    }
                }
            }
            arr_16 [i_1] [i_0] &= (!-8238556558134435683);
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
        {
            var_20 = 0;
            /* LoopNest 2 */
            for (int i_6 = 4; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        arr_28 [4] = ((var_16 ? var_15 : (arr_0 [11] [i_6 - 1])));
                        arr_29 [i_7] [i_7] [i_6] [1] [6] [i_0] = ((var_11 > (4945893916113742844 || var_17)));
                        arr_30 [i_0] [i_5] [i_6] [i_6] [3] [i_0] = ((var_14 ? (arr_12 [i_0] [4] [i_6] [i_6 - 2] [i_6]) : var_1));
                    }
                }
            }
        }
        var_21 = 423247118;
        arr_31 [i_0] = ((!(((var_5 ? var_2 : 4945893916113742844)))));
        var_22 = (7676 > 7676);
        arr_32 [i_0] = 0;
    }
    for (int i_8 = 2; i_8 < 17;i_8 += 1)
    {
        var_23 = var_3;
        arr_35 [i_8] = (max(var_3, (((arr_33 [i_8 + 1]) ? var_15 : var_17))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 16;i_9 += 1)
    {
        arr_38 [i_9] = (9205173611271708448 < 8662484842256632913);
        var_24 = (!var_5);
    }
    var_25 = (((((min(var_10, var_12)))) ? var_8 : 37));
    #pragma endscop
}
