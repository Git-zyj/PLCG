/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_6 [7] &= (var_9 || ((min(52381, var_10))));
            arr_7 [6] = (((((var_12 ? var_3 : -100))) ? ((var_6 ? var_5 : 102)) : var_2));
            arr_8 [3] [i_1] = (((((-78 ? var_11 : ((max(var_11, var_0)))))) ? var_12 : 1));
        }
        arr_9 [i_0] [i_0] = ((((max(2178032152, var_9))) ? var_4 : (~1920)));
        arr_10 [i_0] = (((((((var_4 ? var_12 : 8267710909784645437))) ? 28672 : 98))) ? ((((min(var_11, var_0))))) : (((var_12 ^ var_12) ? (~var_5) : ((var_10 ? 8477552148323557200 : var_3)))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            arr_16 [i_2] [8] [i_2] &= ((0 << (var_5 - 87)));
            arr_17 [i_2] = (var_12 + 1890142851340162177);
            arr_18 [16] [2] [i_3] = var_3;
            arr_19 [i_3] = 1;
        }

        for (int i_4 = 3; i_4 < 15;i_4 += 1)
        {
            arr_22 [i_4] = ((var_6 ? var_6 : var_2));
            arr_23 [i_2] [i_2] [i_4] = var_1;
            arr_24 [i_2] = -44;
            arr_25 [i_2] &= var_1;
            arr_26 [i_2] [i_2] [i_2] = -283684497;
        }

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_31 [i_2] [i_5] [9] = (1 ? (((var_2 ? var_1 : 0))) : (522931992 + var_4));
            arr_32 [i_2] = ((var_12 ? var_5 : var_8));

            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                arr_35 [2] [1] [15] [i_2] = ((1364514392 ? var_7 : 197));
                arr_36 [i_2] [i_2] = ((var_0 ? var_10 : var_0));
            }
            arr_37 [i_2] [13] [i_5] = (!-13344);
        }
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            arr_40 [i_2] = ((0 ? ((1 ? var_4 : 1223066892)) : var_11));
            arr_41 [i_2] [i_7] = (var_11 > 15738);
            arr_42 [0] [i_7] [i_7] = var_11;
            arr_43 [i_2] [i_2] = var_5;
            arr_44 [i_7] = (!158);
        }
    }
    var_14 |= 204;
    var_15 = 1;
    #pragma endscop
}
