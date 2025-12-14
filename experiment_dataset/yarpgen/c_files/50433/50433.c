/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = ((1 ? ((max((arr_2 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) : (((1 == ((min((arr_0 [i_0]), (arr_2 [i_0] [i_0])))))))));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = arr_4 [i_0];
            arr_7 [i_0] [i_1] [i_0] = (((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_1]))) ? (((arr_1 [i_0] [i_0]) ? 3032863366 : (arr_1 [i_0] [i_1]))) : (((-(arr_1 [i_0] [i_1]))))));
            arr_8 [i_0] = (arr_2 [i_0] [i_1]);
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            arr_11 [i_0] = ((~(((((arr_10 [i_0] [i_2]) ? (arr_2 [i_0] [i_2]) : (arr_10 [i_0] [i_0]))) ^ (arr_9 [i_0])))));
            arr_12 [i_0] [i_0] [i_2] = (((min((arr_9 [i_0]), (min(18446744073709551615, (arr_1 [i_0] [i_2]))))) - ((var_10 ? (arr_4 [i_0]) : ((65535 ? 18446744073709551615 : -8650928165687715205))))));
        }
        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        arr_22 [i_0] [i_3] [i_5] [i_5] [i_5] = ((((min((arr_9 [i_3]), (((arr_17 [i_4] [i_3] [i_0]) || 1))))) != (arr_16 [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 - 1])));
                        arr_23 [i_4] [i_3] = (~4294967295);
                        arr_24 [i_0] [i_3] [i_4] [i_3] = (min((((((min(841539034, (arr_4 [i_3 + 1])))) < (arr_10 [i_3 + 1] [i_3])))), (arr_21 [i_0] [i_3] [i_4] [i_5] [i_5])));
                        arr_25 [i_3] [i_3 + 1] [i_3] [i_3] = ((((30430 & -76) ? (!-5502) : (arr_17 [i_0] [i_0] [i_4]))) << (arr_1 [i_0] [i_0]));
                    }
                }
            }
            arr_26 [i_0] = (min((((!(arr_9 [i_3 - 1])))), ((((var_3 ^ (arr_14 [i_0]))) / (~65527)))));
        }
    }
    for (int i_6 = 0; i_6 < 0;i_6 += 1)
    {
        arr_30 [i_6] = (arr_29 [i_6]);
        arr_31 [i_6] = var_8;
    }
    for (int i_7 = 3; i_7 < 23;i_7 += 1)
    {
        arr_34 [6] [i_7] = (min((max(((-8816 ? 15 : (arr_33 [i_7 - 2]))), ((((arr_33 [i_7]) ? var_4 : -239611152))))), (arr_32 [20] [20])));
        arr_35 [i_7] = (((-(arr_32 [i_7 - 3] [i_7]))));
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 10;i_8 += 1)
    {
        arr_38 [i_8] = (((45331 ? -7968621143987944571 : 186)));
        /* LoopNest 2 */
        for (int i_9 = 4; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                {
                    arr_46 [i_9] [i_10] = arr_4 [i_8 + 2];
                    arr_47 [i_9] [i_9] [i_9] [i_10] = ((-((14 ? 65535 : (arr_43 [i_8] [i_8 - 1] [i_8 - 1])))));
                }
            }
        }
    }
    var_14 = ((var_11 ? ((var_3 % ((min(var_11, var_7))))) : (((var_13 ^ ((7968621143987944564 ? 65535 : 4294967284)))))));
    var_15 = -30431;
    var_16 = (~2360606069716523530);
    #pragma endscop
}
