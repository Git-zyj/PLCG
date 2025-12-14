/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;

    for (int i_0 = 0; i_0 < 0;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_10 [8] [8] [i_2] [i_3 + 1] [i_1 - 1] = (((((31019 && var_0) && (arr_2 [i_1 + 2])))) == (arr_5 [0] [0] [0] [i_0]));
                        arr_11 [i_0 + 1] [i_0] [i_0 + 1] [i_2] [i_0] [i_2] = (arr_2 [i_0]);
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    {
                        arr_19 [i_6] [i_0] [i_4] [i_0] [i_0] = (((arr_1 [i_0]) / ((((arr_15 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]) / (arr_15 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]))))));
                        arr_20 [i_0] [i_4] = (arr_15 [i_0] [i_0] [i_0 + 1] [i_0]);
                        arr_21 [i_6] [i_0] [i_4] [i_0] [i_0 + 1] = ((~((4294967295 ? (arr_2 [i_6]) : (((arr_9 [i_0 + 1] [i_4] [i_0] [i_6]) ? var_4 : (arr_12 [i_0])))))));
                        arr_22 [i_5] [i_5] [i_0] = (min((min((arr_15 [i_0] [i_0] [i_4] [i_5]), ((((arr_7 [i_0 + 1] [i_0] [i_5] [i_6]) * (arr_17 [i_5] [i_6])))))), ((min(((min(var_5, (arr_8 [i_6] [i_5] [i_5] [i_4] [i_0])))), ((var_9 ? (arr_13 [i_0]) : var_6)))))));
                    }
                }
            }
        }
        arr_23 [10] = (((arr_18 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1]) | (((-19990 ? (arr_4 [i_0 + 1]) : 1)))));
        arr_24 [i_0] = (((arr_3 [i_0] [i_0] [i_0 + 1]) & (~-1253485592)));
        arr_25 [2] = (((((1253485591 / 1253485592) * (min(var_2, -1599683011)))) * (((min(-81, (arr_13 [i_0 + 1])))))));
    }
    for (int i_7 = 0; i_7 < 0;i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                {
                    arr_34 [i_8 - 1] [i_8] [i_8 - 1] [i_7 + 1] = (min(((((~-81) ^ (~var_3)))), var_7));
                    arr_35 [i_7 + 1] [i_8] [i_9] |= var_4;
                }
            }
        }
        arr_36 [i_7 + 1] = ((((((((var_3 ? -1253485592 : 1649205904))) ? (arr_1 [12]) : (((1 ? 1253485601 : (arr_28 [i_7 + 1] [i_7]))))))) ? (min(var_7, (arr_30 [i_7] [i_7 + 1]))) : (arr_33 [i_7] [i_7 + 1] [i_7 + 1] [i_7 + 1])));
    }
    var_12 = ((var_3 - (((((var_9 ? 6307 : var_0)) - (((var_9 ? -80 : 15))))))));

    /* vectorizable */
    for (int i_10 = 0; i_10 < 22;i_10 += 1)
    {
        arr_40 [i_10] = 1649205904;
        arr_41 [i_10] [i_10] = var_6;
    }
    #pragma endscop
}
