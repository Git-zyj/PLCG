/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [18] = 125;
        arr_3 [10] [2] = (!9223372036854775807);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        arr_6 [6] = (((arr_1 [i_1 - 1]) - (arr_4 [i_1 + 1] [i_1 + 1])));
        arr_7 [i_1] = (((arr_4 [i_1 - 1] [i_1 - 1]) || (arr_4 [i_1] [i_1 - 1])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_10 [i_2] = ((~(arr_0 [1])));
        arr_11 [i_2] = ((5981033861575413836 ? 4193280 : 206));
        arr_12 [i_2] = (((arr_9 [i_2]) ^ (arr_9 [i_2])));
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {

        for (int i_4 = 1; i_4 < 22;i_4 += 1) /* same iter space */
        {
            arr_19 [i_4] = ((max((arr_16 [i_4] [i_4]), (arr_16 [i_4] [i_4]))) ? (((arr_15 [i_4 - 1] [i_3]) ? var_5 : (arr_16 [i_4] [i_4]))) : (((4193277 + (arr_15 [i_4 + 2] [i_3])))));
            arr_20 [i_4] = -4193284;
            arr_21 [i_4] [i_4] [i_4] = -var_9;
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        {
                            arr_31 [i_3] [i_4] [i_5] [i_6] [i_4] = ((var_10 ? ((((!(arr_26 [i_3] [i_4] [i_3]))))) : ((var_3 ? (arr_13 [i_5] [i_4 + 1]) : (((arr_25 [i_3]) ? (arr_18 [1] [i_4]) : 1))))));
                            arr_32 [i_4] [i_6 + 2] [i_5] [i_4] [i_4] = -4193288;
                            arr_33 [i_4] = -4193272;
                        }
                    }
                }
            }
        }
        for (int i_8 = 1; i_8 < 22;i_8 += 1) /* same iter space */
        {
            arr_37 [i_8 + 1] [i_8 + 1] = ((9223372036854775807 ? 18 : 9326491207563517571));
            arr_38 [i_8] = (36 <= 11219);
            arr_39 [i_3] [i_3] [i_3] = (arr_26 [i_3] [i_3] [i_3]);
            arr_40 [i_3] [i_8] = (min(((-9223372036854775807 / (5134 - 9326491207563517595))), (min(16075130884160201319, 3425008531))));
        }
        /* vectorizable */
        for (int i_9 = 1; i_9 < 22;i_9 += 1) /* same iter space */
        {
            arr_44 [15] [i_9 + 1] = 9120252866146034027;
            arr_45 [i_9] [i_9] = ((arr_26 [i_9 + 2] [i_9 - 1] [i_9 + 1]) ? (arr_41 [i_9 + 3] [i_9 + 3] [i_9 + 1]) : (arr_26 [i_9 - 1] [i_9 + 2] [i_9 - 1]));
            arr_46 [i_9 + 2] &= (-971691192 < 4193285);
            arr_47 [i_3] [i_3] [i_3] = ((222 ? 13522986057946095577 : (arr_30 [i_9] [i_9] [i_9 + 1] [i_9] [i_9] [i_9 - 1] [i_9 + 1])));
        }
        /* vectorizable */
        for (int i_10 = 1; i_10 < 22;i_10 += 1) /* same iter space */
        {
            arr_50 [i_3] [i_10] = var_4;
            arr_51 [0] |= (((arr_23 [i_3] [1] [i_3]) ? (arr_23 [i_3] [24] [i_10 - 1]) : var_7));
        }
        arr_52 [15] = var_14;
    }
    var_19 = (((((2807111277 ? -var_0 : var_5))) ? (((!(!var_11)))) : ((((((223 ? -103 : 7787)) + 2147483647)) >> (9223372036854775807 - 9223372036854775794)))));
    #pragma endscop
}
