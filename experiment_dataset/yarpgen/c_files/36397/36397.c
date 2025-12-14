/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_6 [i_0] [1] [i_0] = 184344590;
            arr_7 [i_1] [i_1] [i_1] = (max(((((arr_0 [i_0 + 2]) > (arr_5 [11])))), ((0 ? 32766 : var_1))));
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_11 [i_2] = (min((arr_5 [i_0 + 2]), (~215)));
            arr_12 [i_2] = ((-((((((var_11 <= (arr_4 [i_0]))))) * (min((arr_2 [i_0]), 0))))));
        }
        for (int i_3 = 1; i_3 < 24;i_3 += 1)
        {
            arr_17 [i_3] = var_9;
            arr_18 [i_3] = (((max(((var_5 >> (var_1 - 12781906944106322317))), ((var_5 << (var_4 + 299436673))))) + ((-(((arr_8 [i_3]) | var_12))))));
            arr_19 [i_3] [i_3 - 1] = (215 && 41);
            arr_20 [i_3] [i_3] [i_0 - 1] = ((((max(24, ((12 >> (((arr_4 [i_0 + 3]) - 1823568233))))))) ? (arr_8 [i_3]) : ((((!(((0 ? 1 : 15304045440687459785)))))))));
        }
        arr_21 [22] = ((var_1 << (((((var_3 + 2147483647) << ((((((arr_2 [i_0 + 2]) || 215))) - 1)))) - 2147466477))));
        arr_22 [4] [i_0 + 2] = var_2;
        arr_23 [i_0] [i_0 + 2] = 15304045440687459785;
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        arr_27 [3] = (max((-1 * 45), ((((((arr_16 [0] [i_4] [i_4]) + (arr_9 [16] [i_4] [i_4])))) + (((arr_26 [i_4]) & 25998))))));
        arr_28 [i_4] &= 16777215;
        arr_29 [i_4] = var_12;
        arr_30 [i_4] = ((((arr_2 [i_4]) ? -1 : (((arr_16 [i_4] [i_4] [i_4]) ? var_7 : -6)))));
        arr_31 [11] = ((!(((arr_26 [i_4]) != (arr_26 [i_4])))));
    }
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                {
                    arr_40 [11] [i_6] = ((max((arr_5 [11]), (arr_14 [20]))));
                    arr_41 [9] [9] [i_7] [i_7] = (max((((arr_15 [i_7] [20] [i_7]) || ((max(var_7, 12174))))), (((max(var_4, (arr_33 [i_5]))) > ((max(var_0, (arr_9 [i_7] [i_5] [i_5]))))))));
                    arr_42 [i_5 - 1] = (max(((((max((arr_34 [i_5]), var_9))) ? var_1 : (min(var_0, var_9)))), var_7));
                }
            }
        }
    }
    var_13 = var_5;
    #pragma endscop
}
