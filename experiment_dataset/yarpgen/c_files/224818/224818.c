/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((!((((max(var_12, var_3)) & var_13)))));
    var_17 = (max(32767, ((((min(var_8, var_3))) ? ((7934909881206644236 ? var_3 : var_9)) : (var_3 > var_7)))));
    var_18 = var_1;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [9] [9] |= (arr_3 [i_0] [1]);
        arr_5 [i_0] = ((!(((~(arr_2 [i_0] [i_0]))))));
        arr_6 [i_0] = ((((arr_1 [i_0]) ? ((17481 ? (arr_1 [i_0]) : (arr_3 [i_0] [i_0]))) : ((((-1 >= (arr_2 [i_0] [i_0]))))))) & (((((((arr_2 [i_0] [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_2 [i_0] [0])))) ? 183 : (arr_1 [i_0])))));
        arr_7 [i_0] = (((arr_1 [i_0]) ? ((((arr_1 [i_0]) && (arr_1 [i_0])))) : (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_10 [i_1] [i_1] = ((+((var_6 ? (arr_9 [i_1] [i_1]) : (arr_9 [i_1] [i_1])))));
        arr_11 [i_1] = ((~(arr_8 [i_1] [i_1])));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 24;i_4 += 1)
                {
                    {
                        arr_19 [i_1] [i_1] [i_2] [i_4] = (max(((((arr_18 [i_2] [i_2] [i_3]) * ((((!(arr_8 [i_1] [i_2])))))))), (((arr_16 [i_3 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 2]) / (arr_17 [13] [13])))));

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                        {
                            arr_23 [i_5] [7] [i_2] [i_2] [i_2] [i_1] [i_1] = (((arr_14 [i_1] [i_3] [i_4] [17]) == (arr_17 [i_1] [i_1])));
                            arr_24 [i_1] [i_2 + 1] [i_2] [i_4 - 1] [i_5] = ((arr_12 [i_2] [i_2]) ? (arr_12 [i_2] [i_2]) : (arr_12 [i_2] [i_2]));
                        }
                        for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                        {
                            arr_27 [i_2] [i_2] [12] [i_6] = -17481;
                            arr_28 [i_2] = (((((var_0 ? (arr_16 [i_1] [i_2] [i_4] [i_6]) : (arr_20 [i_1] [i_3] [i_3] [i_2] [i_2] [23] [i_1]))) * (arr_15 [i_3 + 3] [i_3 + 3]))));
                            arr_29 [i_6] [i_4 + 1] [i_2] [i_2] [i_1] = (((min(((~(arr_14 [19] [i_2] [i_1] [i_4]))), (arr_22 [i_1] [i_2] [i_3 + 3] [i_4] [i_6]))) <= (((((arr_26 [i_1] [i_1] [i_1]) && ((((arr_18 [i_2] [i_2 - 1] [i_2]) / -739985482551053650)))))))));
                        }
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        arr_33 [i_7] [i_7] = ((((((((((arr_26 [i_7] [i_7] [i_7]) >= var_0)))) & (min((arr_16 [i_7] [i_7] [i_7] [i_7]), -27711))))) ? (((max((arr_15 [16] [i_7]), (!7934909881206644226))))) : (max(12, ((((arr_26 [i_7] [1] [i_7]) ? (arr_31 [i_7]) : (arr_1 [i_7]))))))));
        arr_34 [i_7] [i_7] = (((((var_10 ? (arr_31 [i_7]) : (((arr_9 [i_7] [22]) % (arr_26 [i_7] [1] [i_7])))))) ? (arr_31 [i_7]) : ((((((arr_20 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) ? (arr_21 [21]) : 12))) & (((arr_16 [i_7] [i_7] [i_7] [i_7]) ? (arr_16 [i_7] [1] [i_7] [i_7]) : (arr_16 [i_7] [i_7] [i_7] [i_7])))))));
        arr_35 [i_7] [i_7] = (min(32763, ((var_11 % (((arr_2 [i_7] [i_7]) & (arr_16 [i_7] [16] [i_7] [i_7])))))));
        arr_36 [i_7] = arr_15 [12] [12];
    }
    var_19 = ((~(((var_6 < (((1 ? var_0 : var_14))))))));
    #pragma endscop
}
