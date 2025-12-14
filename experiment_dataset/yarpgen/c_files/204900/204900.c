/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_5, (~var_7)));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_17 = (0 ^ 5701572901348791106);
        var_18 &= (((arr_0 [i_0]) ? (max(var_14, var_14)) : (((max(var_2, (arr_0 [i_0])))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        var_19 = (((arr_5 [i_1 + 1] [i_1 - 1]) ? var_0 : (arr_5 [i_1 - 1] [i_1 + 1])));
        arr_6 [i_1] = (((arr_3 [i_1] [i_1]) ? (((var_13 ? var_11 : var_5))) : (arr_5 [i_1] [i_1 + 1])));
        var_20 = var_1;
        var_21 = (arr_4 [i_1 - 1] [i_1 - 1]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = (arr_5 [i_2] [i_2]);

        for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
        {
            var_22 = 0;
            arr_14 [17] [i_2] = (((arr_8 [i_2]) ? (arr_8 [i_3]) : (arr_8 [i_2])));
        }
        for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
        {
            arr_17 [i_2] = (11836109866824486944 && 1);
            var_23 = var_13;
            var_24 |= (arr_12 [i_2]);
            var_25 -= (arr_4 [i_2] [i_4]);
            var_26 = ((!((((arr_7 [i_4]) ? var_14 : (arr_9 [i_2]))))));
        }
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        arr_21 [i_5] = ((var_1 < ((~(~var_4)))));
        arr_22 [3] = var_11;
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    {

                        for (int i_9 = 3; i_9 < 18;i_9 += 1)
                        {
                            arr_34 [i_5] [i_7] [i_6] [i_8] [i_9] [i_7] [i_5] = ((((var_14 < (arr_29 [i_9 - 1] [i_9 - 1] [i_7 + 1] [i_8]))) ? ((-14068 ? (arr_23 [i_6] [i_6]) : (((max(1, 187)))))) : ((~(max(var_4, 1))))));
                            var_27 -= (((((~((max(62774, 1)))))) ? ((((var_15 || ((max((arr_28 [i_8] [i_8]), (arr_18 [i_9 - 3] [5])))))))) : (var_3 - var_14)));
                            arr_35 [i_6] [i_6] [i_6] [i_6] [i_6] = (((((((((arr_20 [i_6] [i_5]) << (10793096538376435523 - 10793096538376435506)))) ? 2251448021201372887 : (arr_4 [i_5] [i_5])))) ? (((!(((var_9 ? var_1 : var_13)))))) : var_11));
                        }
                        var_28 += var_5;
                    }
                }
            }
        }
    }
    var_29 = (max(((max(var_11, var_9))), ((-((var_7 ? var_8 : var_14))))));
    #pragma endscop
}
