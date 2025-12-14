/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_5 [i_0] = var_6;
            var_19 *= 32;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_20 -= ((var_4 ? (min(((1 ? (arr_1 [i_0]) : 90)), (!var_18))) : 1));
                        var_21 = (max(var_21, (arr_8 [i_0] [i_0] [i_0] [i_1] [11] [i_3])));
                    }
                }
            }
        }
        arr_10 [i_0] = ((-(arr_9 [i_0] [18] [i_0] [i_0])));
        var_22 = (min(var_22, ((min((((var_15 ? (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : ((var_17 ? var_12 : var_18))))), var_10)))));
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        var_23 = var_13;
        var_24 = (min(((((var_10 ? var_9 : 34711)) - var_7)), 0));
        var_25 = (((((var_12 ? var_4 : var_16))) ? ((var_17 ? var_13 : (arr_11 [i_4]))) : (arr_11 [i_4])));

        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            var_26 -= 32;
            var_27 = arr_11 [i_5];
            arr_18 [14] = var_11;
            arr_19 [i_4] [i_5] = var_9;
            var_28 -= ((var_13 ? var_3 : (~var_17)));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_23 [i_4] [i_4] = (((max((((arr_20 [i_4] [i_4] [14]) ? 14 : var_3)), ((min(var_17, var_0))))) - ((83 ? var_5 : var_13))));
            var_29 = (min(var_29, (1 / 2596756066067498899)));
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 20;i_9 += 1)
                {
                    {
                        var_30 = var_10;
                        arr_30 [i_4] [i_7] [i_8] [1] = ((((max(826676719, 0)) ^ ((-60 ? 0 : -32)))));
                        var_31 = (((((min(-103, (arr_25 [i_7] [i_7])))) ? (arr_22 [7]) : (arr_26 [i_7] [i_7] [i_7] [i_8 - 1]))));
                    }
                }
            }
            arr_31 [17] [i_7] [i_7] = (min(((max((arr_14 [i_4]), ((var_18 ? var_12 : (arr_12 [i_4] [i_4])))))), (min(var_5, (arr_28 [15] [i_7] [i_7] [i_7] [i_7])))));
            var_32 = (min(var_32, ((((arr_27 [i_4] [1] [1]) ? ((1 ? (~var_6) : var_0)) : (((!(arr_27 [i_4] [i_7] [i_7])))))))));
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
        {
            var_33 += (((arr_29 [i_4] [i_4] [1] [i_4] [i_10] [i_10]) ? (arr_29 [1] [i_4] [16] [i_4] [i_4] [i_10]) : (arr_21 [i_10])));
            arr_34 [i_4] [i_10] = (!var_15);
            var_34 *= 1;
        }
        var_35 += (arr_22 [i_4]);
    }
    var_36 = (min(var_36, 152));
    #pragma endscop
}
