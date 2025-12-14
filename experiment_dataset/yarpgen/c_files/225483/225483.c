/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_20 = (min(var_20, var_18));
        var_21 = -30;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_22 += (((arr_4 [i_1 - 1]) << (((arr_4 [i_1 + 1]) - 4093173695173978683))));
        var_23 = -18;

        for (int i_2 = 4; i_2 < 12;i_2 += 1) /* same iter space */
        {
            var_24 = ((~(arr_9 [i_1 - 2] [3] [i_2 - 3])));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        {
                            var_25 = ((!(arr_6 [i_5 + 1])));
                            arr_17 [i_1] [i_1] |= ((66 ? (arr_10 [i_2 - 2] [i_2 + 1] [i_2 - 1]) : var_1));
                        }
                    }
                }
            }
            var_26 = (((arr_6 [i_1 + 1]) ? (arr_6 [i_1 + 1]) : (arr_6 [i_1 - 1])));
        }
        for (int i_6 = 4; i_6 < 12;i_6 += 1) /* same iter space */
        {

            for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
            {
                arr_23 [i_1] [i_6] [i_6] [i_6] = (((var_8 && var_16) >> (12582087859341470190 - 12582087859341470161)));
                var_27 ^= (((arr_4 [i_1 - 2]) ? (((-(arr_9 [4] [i_6] [i_7])))) : (arr_4 [i_1])));
                var_28 += (((var_1 < (arr_0 [i_6] [i_6]))));
                var_29 = (52029 & 13507);
                var_30 = ((((((arr_22 [i_1] [i_1]) - var_17))) ? ((var_0 ? (arr_15 [i_1] [i_1] [i_1] [i_1] [i_1]) : (arr_3 [i_1 - 1]))) : (arr_10 [i_6 + 1] [i_6 + 2] [i_6 - 2])));
            }
            for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
            {
                arr_26 [i_1] [i_1] [i_1] = ((2218281519 ? (arr_3 [i_6 - 3]) : var_9));
                var_31 = 1;
                var_32 = (min(var_32, (arr_24 [i_8] [i_8] [i_1 - 2] [i_1 - 2])));
                var_33 = (min(var_33, (((!(arr_13 [i_6] [2] [i_8] [i_6] [i_1 - 2] [i_1 - 2]))))));
            }
            arr_27 [i_1] [i_1] [i_6] = ((-(arr_12 [i_6 - 3] [i_1 - 1] [i_1])));
            var_34 = (((arr_9 [i_6 - 3] [i_6 + 1] [i_1 - 1]) + (arr_25 [i_6 - 1] [i_6 - 3] [i_1 - 2])));
            var_35 = var_17;
        }
        for (int i_9 = 4; i_9 < 12;i_9 += 1) /* same iter space */
        {
            var_36 |= -2063926000564959044;
            var_37 = ((2477875643 ? var_1 : (((arr_4 [i_1]) | var_8))));
            /* LoopNest 3 */
            for (int i_10 = 1; i_10 < 13;i_10 += 1)
            {
                for (int i_11 = 3; i_11 < 12;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 12;i_12 += 1)
                    {
                        {
                            var_38 = (arr_19 [i_10] [i_12]);
                            var_39 = var_19;
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 20;i_13 += 1) /* same iter space */
    {
        var_40 = var_4;
        var_41 ^= ((((arr_38 [i_13]) + 2147483647)) >> (62063 < 1360874916));
        var_42 = (((arr_38 [i_13]) ? (arr_38 [i_13]) : 139));
    }
    for (int i_14 = 0; i_14 < 20;i_14 += 1) /* same iter space */
    {
        arr_42 [i_14] = ((((9409400558726341069 || ((min(var_7, (arr_39 [i_14]))))))));
        var_43 = (((((~(arr_41 [i_14])))) & 3002155183));
        arr_43 [i_14] [i_14] = (((66 ? 8995565059456548273 : 9077124098449111175)));
        var_44 = (arr_38 [i_14]);
    }
    var_45 = -var_18;
    var_46 = (min((((~((var_10 ? 18918 : var_6))))), ((~((8995565059456548273 >> (66 - 65)))))));
    #pragma endscop
}
