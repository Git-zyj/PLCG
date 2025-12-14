/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (arr_2 [i_0]);
        arr_4 [i_0] [i_0] = (min(((min((min((arr_2 [12]), var_14)), var_15))), (((arr_2 [i_0]) >> (((arr_1 [i_0] [i_0]) - 1103943511770920406))))));
        arr_5 [i_0] = -var_6;
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            arr_11 [i_2] [i_2] = ((((((var_0 + 2147483647) >> (((arr_6 [i_2]) - 33))))) ? (arr_0 [i_1 + 2]) : (((-(arr_7 [i_2]))))));
            arr_12 [i_2 + 2] = arr_8 [i_2 + 3];
        }
        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            arr_17 [i_1] = (~(arr_15 [i_3]));
            arr_18 [i_3] [i_3 - 2] = ((((((arr_2 [i_1]) ? (((min((arr_8 [i_1]), (arr_7 [i_1]))))) : (arr_1 [i_3 + 2] [i_1 + 1])))) ? var_3 : ((-883034472295888979 ? ((~(arr_10 [13] [i_1]))) : (~-883034472295888979)))));
            arr_19 [i_3] [i_1] [i_1] = var_15;
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            arr_24 [12] [i_4] = (((arr_1 [i_1] [i_1 + 1]) + (arr_1 [i_1 + 1] [i_1 + 1])));
            arr_25 [i_4] [i_1] = ((-2094224332 - (arr_23 [i_1 + 2])));
            arr_26 [i_4] [i_1] = (arr_6 [i_1 - 1]);
            arr_27 [i_1 + 1] = ((-((var_15 ? (arr_0 [i_1]) : (arr_0 [i_4])))));
            arr_28 [i_1] = (arr_20 [i_1] [i_4]);
        }
        arr_29 [i_1] = ((((-(arr_16 [i_1 + 2] [i_1] [i_1 + 2]))) + (arr_16 [i_1 + 1] [2] [2])));
    }
    for (int i_5 = 1; i_5 < 14;i_5 += 1) /* same iter space */
    {
        arr_33 [i_5 + 2] = (max(((max((var_5 / var_5), (((var_11 == (arr_1 [i_5 + 2] [i_5 + 2]))))))), ((((min((arr_15 [i_5]), (arr_6 [i_5 - 1])))) ? var_2 : (min(var_16, -883034472295888979))))));
        arr_34 [i_5] = (arr_21 [i_5] [i_5]);
    }
    for (int i_6 = 1; i_6 < 14;i_6 += 1) /* same iter space */
    {
        arr_38 [i_6] [i_6] = (((arr_10 [i_6 - 1] [i_6]) ? var_9 : 1));
        arr_39 [i_6] = (23742 || 883034472295888978);
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    {
                        arr_46 [2] [2] [i_8] = (arr_7 [i_9]);
                        arr_47 [i_6] [i_7] [i_8] [i_6] = 21269;
                    }
                }
            }
        }
        arr_48 [i_6] = (max(((~(arr_31 [i_6 + 1]))), var_3));
    }
    #pragma endscop
}
