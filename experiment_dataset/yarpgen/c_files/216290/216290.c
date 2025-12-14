/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = (((218 << (93 - 77))));
            arr_6 [i_0] [i_0] [i_0] = -1;
        }
        arr_7 [i_0] = ((95 + (((arr_3 [i_0]) ? ((-(arr_4 [i_0] [i_0]))) : -var_7))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = -var_8;
        arr_11 [12] = (((((max(1, var_1)) / var_11)) << ((var_3 / (arr_4 [i_2] [i_2])))));
    }
    for (int i_3 = 1; i_3 < 23;i_3 += 1)
    {
        arr_14 [i_3] [i_3] = (((((~(!var_12)))) ? (((((arr_12 [i_3]) | var_5)))) : (!0)));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    {
                        arr_21 [i_3] [i_5] = ((-((((var_4 != (arr_16 [i_3]))) ? ((var_7 ? var_12 : (arr_15 [i_3 + 1] [i_4]))) : 1))));
                        arr_22 [i_5] [i_3] [i_5] = (0 || -1282636339175403232);
                        arr_23 [i_3] [i_4] [i_4] [i_3] [i_3] [20] = ((((max(1, (max((arr_19 [i_3] [9] [i_5] [9] [i_3]), 1))))) % ((~(arr_20 [i_4] [i_4] [i_4])))));
                        arr_24 [i_5] [i_5] = ((-((var_3 ? ((1 ? 9 : var_6)) : ((max(var_0, (arr_15 [17] [17]))))))));
                        arr_25 [i_3] [i_3] [i_4] [14] [i_3] = (arr_17 [i_3] [i_4] [i_6] [i_6]);
                    }
                }
            }
        }
        arr_26 [i_3] [12] |= (((arr_12 [1]) ? ((var_10 + (((min(var_0, (-32767 - 1))))))) : var_5));
        arr_27 [i_3] [i_3] = ((~(~var_10)));
    }
    var_13 = -5600661172446802336;
    var_14 = ((var_10 ? (max(((48 ? 9223372036854775807 : var_2)), var_1)) : var_8));

    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        arr_32 [i_7] = ((!(((-646907154581429562 + (arr_16 [i_7]))))));
        arr_33 [i_7] [i_7] = max((((((var_2 ? -500 : 254))) || var_3)), (1 > var_3));
        arr_34 [i_7] = (((((var_9 / (var_0 != 33554431)))) ? (((!((max(646907154581429546, var_7)))))) : (((((var_9 ? var_11 : var_12))) ? (arr_12 [i_7]) : var_7))));
        arr_35 [i_7] = ((!((max((var_4 != var_2), (min(148, (arr_31 [i_7]))))))));
        arr_36 [i_7] = 1;
    }
    var_15 = (((((min(var_6, var_10)) / var_3)) != (((min(var_5, var_2))))));
    #pragma endscop
}
