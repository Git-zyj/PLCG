/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = ((var_12 ? (arr_1 [i_0]) : var_2));
        arr_3 [i_0] = arr_1 [i_0];
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_10 [i_1] [i_2] = (-124 ^ -114);
            arr_11 [i_1] [i_2] = var_7;
            arr_12 [i_1] [i_1] = ((121 << (var_10 - 104)));
            arr_13 [i_1] = 110;
        }
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            arr_16 [i_3] = ((((3 ? -var_16 : -var_10)) | ((min((!var_16), (var_10 < var_12))))));
            arr_17 [i_1] [i_1] = -33;
            arr_18 [i_3] [i_3] = ((((min(((-1 ? var_18 : var_6)), var_7))) ? ((~((min(var_17, var_3))))) : -107));
            arr_19 [i_1] = var_3;
        }
        for (int i_4 = 1; i_4 < 16;i_4 += 1)
        {
            arr_22 [i_1] [i_1] [i_4] = ((~(((arr_5 [i_1]) ? ((min(var_13, -88))) : (-127 - 1)))));
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 13;i_6 += 1)
                {
                    {
                        arr_28 [i_1] [i_1] &= ((!(((!62) <= 123))));
                        arr_29 [i_1] [i_4] [i_4] [i_6] = ((((~(arr_15 [i_1]))) <= (arr_5 [i_1])));
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            arr_33 [i_1] = (((arr_9 [i_7] [i_1]) <= ((~((max(-21, var_0)))))));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    {
                        arr_40 [i_1] [i_1] [i_8] [i_9] [i_8] = (min(((max(var_8, var_2))), (~var_13)));
                        arr_41 [i_1] = ((!(((-(arr_31 [i_1]))))));
                    }
                }
            }
            arr_42 [i_7] [i_1] = (min(var_14, ((~((16 << (39 - 20)))))));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 14;i_11 += 1)
                {
                    {
                        arr_47 [i_11] = -var_16;
                        arr_48 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] &= (max(-var_17, (((((arr_5 [i_11 + 3]) + 2147483647)) << (((((arr_34 [i_11 + 1] [i_11 + 3] [i_11 - 1]) + 83)) - 11))))));
                    }
                }
            }
        }
        arr_49 [i_1] = ((!(arr_8 [i_1])));
        arr_50 [i_1] = min(39, 15);
        arr_51 [i_1] [i_1] = (~var_3);
        arr_52 [i_1] = (((max((var_2 - var_14), ((min(var_12, (arr_23 [i_1] [i_1] [i_1])))))) | (((var_16 && (arr_31 [i_1]))))));
    }
    for (int i_12 = 0; i_12 < 20;i_12 += 1)
    {
        arr_56 [i_12] = min(-49, var_0);
        arr_57 [i_12] = (max((arr_55 [i_12]), (max(((var_18 * (arr_55 [i_12]))), (~-62)))));
        arr_58 [i_12] [i_12] = ((~(((arr_54 [i_12]) & (arr_53 [i_12] [i_12])))));
    }
    /* LoopNest 2 */
    for (int i_13 = 4; i_13 < 12;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 14;i_14 += 1)
        {
            {
                arr_63 [5] [i_14] [i_14] = (((min(((-(arr_44 [i_14] [i_14] [i_13]))), (arr_30 [i_13] [i_14] [i_13 - 4]))) / var_8));
                arr_64 [1] [7] = max((max((arr_46 [i_14] [i_13] [i_13] [i_13 - 3]), (arr_46 [i_13] [i_13] [i_13] [i_13 - 1]))), -32);
            }
        }
    }
    #pragma endscop
}
