/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] = var_0;
        arr_5 [0] &= ((((min((min(var_10, var_0)), (((var_5 ? var_9 : (arr_0 [12]))))))) >= (((var_7 >= -101) ? (var_4 / var_5) : (~var_11)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_8 [i_1] = (var_2 != var_2);
        arr_9 [i_1] = (arr_7 [i_1]);

        for (int i_2 = 1; i_2 < 24;i_2 += 1)
        {
            arr_12 [i_2] = var_6;

            for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
            {

                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    arr_19 [i_2] [i_3] [i_2] [14] [i_1] = var_4;
                    arr_20 [i_4] [i_2] [i_3] [i_3] [i_4] = ((+(((arr_16 [i_1] [i_1] [i_4] [i_1]) * var_8))));
                }
                for (int i_5 = 0; i_5 < 0;i_5 += 1) /* same iter space */
                {
                    arr_23 [i_1] [i_1] [i_1] [i_1] [i_2] [i_1] = var_3;
                    arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [i_2] = (var_6 | var_9);
                }
                for (int i_6 = 0; i_6 < 0;i_6 += 1) /* same iter space */
                {
                    arr_28 [i_2] [1] = (((arr_27 [i_2] [i_3 - 1] [i_6 + 1]) ^ var_4));
                    arr_29 [i_1] [i_1] [i_1] [i_6] [i_1] |= (arr_17 [i_1] [i_2] [i_3 - 1] [i_6 + 1]);

                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        arr_33 [i_1] [i_2] [i_3] [i_1] [i_7] = ((!(arr_17 [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1])));
                        arr_34 [i_1] [i_1] [i_3] [i_6 + 1] [i_6] [i_2] = ((arr_30 [i_2]) ? var_10 : (arr_30 [i_2]));
                        arr_35 [i_1] [7] [i_3] [i_2] [10] = arr_21 [i_2] [i_2] [i_2] [14] [i_2];
                    }
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        arr_38 [i_2] [i_2 - 1] [i_6] = ((((arr_32 [i_2]) < (arr_32 [i_2]))));
                        arr_39 [i_2] = ((!(arr_25 [i_2] [i_2 - 1] [i_3 - 1] [i_6 + 1] [i_6 + 1] [i_2])));
                    }
                }
                arr_40 [i_1] = (arr_18 [i_2] [i_1] [i_2 - 1]);
                arr_41 [i_1] [i_2] [i_2] [i_3 - 1] = ((var_7 * (arr_18 [i_2 + 1] [i_2] [i_3 - 1])));
                arr_42 [i_1] [i_1] [i_1] [i_2] = ((~93) ? (var_9 || var_0) : ((-(arr_26 [i_2] [8] [i_2] [i_2]))));
            }
            for (int i_9 = 1; i_9 < 1;i_9 += 1) /* same iter space */
            {
                arr_45 [i_1] [i_1] [i_1] &= (arr_17 [i_2] [i_2 + 1] [i_9 - 1] [i_9 - 1]);
                arr_46 [i_1] |= 119;
            }
            for (int i_10 = 1; i_10 < 1;i_10 += 1) /* same iter space */
            {
                arr_50 [i_1] [i_2] [i_1] [i_1] = (26 / 100);
                arr_51 [i_2] [4] [1] [4] = var_7;
            }
            arr_52 [i_2] [i_2] [i_1] = (((var_8 && 100) - (arr_32 [i_2])));
        }
        for (int i_11 = 0; i_11 < 25;i_11 += 1)
        {
            arr_56 [i_11] [i_11] [i_11] = 818825335;
            arr_57 [i_1] [i_1] [i_11] &= ((1 && (arr_49 [i_1] [i_1] [i_1])));
        }
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            arr_61 [i_12] = ((var_3 ? (arr_32 [i_1]) : (arr_25 [4] [14] [i_1] [i_1] [4] [i_1])));
            arr_62 [i_1] [i_12] = ((-var_6 ^ (arr_36 [14] [i_1] [i_12] [i_12] [i_1] [12])));
            arr_63 [i_1] = var_7;
        }
        arr_64 [i_1] [i_1] = var_1;
        arr_65 [i_1] [i_1] = (arr_48 [i_1]);
    }
    /* LoopNest 3 */
    for (int i_13 = 0; i_13 < 24;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 24;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 24;i_15 += 1)
            {
                {
                    arr_75 [i_14] [i_14] [i_14] [i_14] = max(7212363724473348447, ((((((var_9 | (arr_26 [i_14] [6] [i_13] [i_14])))) && (var_0 / var_11)))));
                    arr_76 [i_13] [i_14] = (((((98 ? (((-2147483647 - 1) & (arr_7 [i_14]))) : ((((235 || (arr_25 [i_13] [i_13] [i_13] [13] [i_13] [i_14])))))))) ? ((((max(92844311, var_4))))) : (((((arr_11 [i_14]) > (arr_53 [i_13] [i_14]))) ? (6653233081561384589 || var_8) : (~15951543001289487963)))));
                    arr_77 [i_14] [20] [i_14] [i_15] = (max(((var_3 ? (arr_16 [i_13] [i_13] [i_14] [i_14]) : 1654607164643260656)), ((max((var_6 ^ var_12), (((arr_58 [i_13]) & var_1)))))));
                }
            }
        }
    }
    #pragma endscop
}
