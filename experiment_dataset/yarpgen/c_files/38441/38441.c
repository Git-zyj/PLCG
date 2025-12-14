/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~(!25)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (((((((max(3161177220, -3430023815735236512)) <= ((min(-5528, (arr_2 [i_0])))))))) + ((var_0 ? (((min(var_7, (arr_1 [i_0] [i_0]))))) : ((~(arr_2 [i_0])))))));

        /* vectorizable */
        for (int i_1 = 3; i_1 < 12;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_0] = (arr_1 [i_1] [i_1 - 2]);
            var_14 = (((arr_4 [1] [i_1]) >= (arr_0 [i_0] [i_1 - 2])));
            arr_7 [i_0] [i_1] [i_1] = (~(arr_1 [i_1 - 2] [i_1 - 3]));
            arr_8 [i_0] [i_1] = ((((((arr_4 [i_0] [i_1 - 2]) ? (arr_2 [i_1]) : 15))) ? (((arr_0 [i_1] [i_0]) + (arr_1 [i_0] [2]))) : 121));
            var_15 = (((arr_0 [i_1 - 1] [i_1 - 3]) > var_0));
        }
        for (int i_2 = 3; i_2 < 12;i_2 += 1) /* same iter space */
        {
            var_16 = (((((!((max((arr_5 [6] [i_0]), 5247161358534864887)))))) ^ (max(((-489011107 % (arr_4 [i_0] [i_0]))), ((26001 ? -489011095 : 46595))))));
            var_17 = ((arr_2 [i_2 - 1]) ? ((var_12 ? (arr_5 [i_0] [i_2 - 1]) : -3430023815735236522)) : var_9);
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            var_18 = (min(((var_9 ? 12 : (min(var_12, 0)))), var_5));
            var_19 = (((min(var_12, 242)) | ((((var_2 || (((-5896675265732693589 ? (arr_2 [i_3]) : var_0)))))))));
        }
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] = ((!(((var_5 ? 72 : var_9)))));

        /* vectorizable */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            arr_19 [i_4] [i_4] = (arr_12 [i_5] [3]);
            var_20 = 16262;
            arr_20 [i_4] [i_4] = (((arr_2 [i_4]) + 18));
        }
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            var_21 = ((((((arr_4 [i_4] [i_4]) ? (arr_4 [i_6] [i_4]) : (arr_4 [i_4] [i_4])))) <= (arr_18 [i_6])));

            /* vectorizable */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                arr_26 [i_4] = (((9223372036854775796 / -28459) && (var_12 && var_12)));
                arr_27 [i_4] [i_4] [i_7] = (((((arr_10 [i_6]) ? 176728126980656356 : (arr_2 [3]))) << (((((arr_1 [i_4] [i_4]) ? 242 : 1)) - 214))));
            }
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    {
                        arr_32 [i_4] [6] [i_8] [i_9] [i_4] [i_9] &= (arr_29 [10] [i_9] [i_9] [i_9]);
                        arr_33 [i_4] [i_4] [i_8] [i_9] = (((744157774 ? -1197078665 : 2147483647)));
                    }
                }
            }
        }
        for (int i_10 = 1; i_10 < 12;i_10 += 1)
        {
            arr_36 [i_10] [i_4] = ((~(((!((((arr_13 [i_4]) ? -884738917 : (arr_15 [i_4])))))))));
            /* LoopNest 2 */
            for (int i_11 = 1; i_11 < 11;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 11;i_12 += 1)
                {
                    {
                        var_22 = (((((arr_41 [i_4] [i_4] [9] [i_11] [i_12] [i_4]) << ((((1048512 ? var_5 : (arr_28 [i_4] [0] [i_11]))) - 53)))) >> (((!((max((arr_25 [5] [3] [i_10]), 0))))))));
                        arr_43 [i_12] [i_11 + 2] [i_4] [i_4] [i_4] [i_4] = (((((~(arr_2 [i_10 - 1])))) ? -18690 : (884738917 >> 1)));
                        var_23 = var_10;
                    }
                }
            }
        }
    }
    var_24 -= var_12;
    #pragma endscop
}
