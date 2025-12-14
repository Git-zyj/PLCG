/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (!9369);
        var_18 = (((arr_1 [i_0] [i_0]) ? ((-(arr_1 [i_0] [i_0]))) : var_12));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            arr_6 [0] [11] = ((26336 || (((var_7 - (arr_3 [i_0] [i_1] [i_1]))))));
            var_19 -= (arr_0 [i_0]);
            arr_7 [i_0] [i_1 - 1] [i_1 - 1] = (arr_1 [i_1 + 2] [i_1 + 1]);
        }
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {
        var_20 = (((arr_9 [i_2] [i_2]) ? (26352 & 196) : (var_15 ^ 21953)));
        arr_12 [i_2] = var_7;

        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 3; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 10;i_5 += 1)
                {
                    {
                        var_21 = (min(var_21, ((((arr_14 [i_4 - 1] [i_3] [i_5 - 1]) & (arr_14 [i_4 - 3] [8] [i_5 + 1]))))));
                        var_22 = var_7;
                        var_23 = (((arr_3 [i_4 + 1] [i_3] [i_5 + 1]) >> (-13840 + 13863)));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_6 = 3; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 9;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 8;i_8 += 1)
                    {
                        {
                            arr_31 [i_6] [i_3] [i_6] [i_7 + 2] [i_6] = ((~((var_3 ? var_14 : (arr_9 [i_3] [i_7])))));
                            var_24 = (((((var_15 ? var_4 : var_2))) ? (((arr_9 [i_2] [i_8]) ? (arr_18 [i_2] [i_2] [i_2] [i_6]) : var_5)) : (var_10 >= var_12)));
                        }
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
        {
            var_25 = (min(var_25, (~192)));
            var_26 += 0;
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
        {

            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                var_27 = (arr_32 [i_10]);
                var_28 = ((!(((arr_15 [i_2] [i_2]) <= var_15))));
            }
            var_29 = 83;
            var_30 = (max(var_30, (((!(((26340 ? var_14 : var_10))))))));
            arr_38 [i_2] [i_2] = var_7;
        }
        var_31 ^= (arr_33 [i_2]);
    }
    for (int i_12 = 0; i_12 < 11;i_12 += 1) /* same iter space */
    {
        var_32 = (min(var_32, ((((5 % -28161) + (min((arr_22 [i_12] [i_12] [i_12] [i_12]), (arr_18 [i_12] [10] [i_12] [i_12]))))))));
        var_33 = (max(var_33, (((((((arr_3 [i_12] [i_12] [i_12]) ? var_13 : ((26348 ? (arr_4 [i_12]) : 1809))))) ? (max(var_16, 4294967290)) : (((arr_14 [i_12] [i_12] [i_12]) & (min(5, var_5)))))))));
        var_34 += (((((~(((arr_0 [i_12]) ? var_14 : var_0))))) ? 9369 : (((((!(arr_14 [7] [i_12] [7])))) % -14930))));
        var_35 = (max(var_35, (((26340 != (min((255 < var_3), -var_13)))))));
    }
    var_36 |= -3875;
    var_37 = var_1;
    #pragma endscop
}
