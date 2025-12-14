/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_2 ? 1 : -3607695301459414796));
    var_19 = var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] &= (arr_1 [i_0] [i_0]);
        arr_3 [i_0] = var_14;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_6 [i_1] = (-0 >= (1240418601 | 7545601986855573801));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 14;i_4 += 1)
                {
                    {
                        arr_14 [i_1] [i_1] = (3346187061 + 1);
                        arr_15 [i_1] [i_2] [i_3] [i_4] = (arr_4 [i_4]);

                        for (int i_5 = 2; i_5 < 16;i_5 += 1)
                        {
                            arr_18 [i_5] [i_5] [i_5] [i_5] [i_1] = ((((arr_10 [i_1] [i_5 + 2]) ? (arr_13 [i_2]) : (arr_12 [i_5 + 2] [i_4] [i_1] [i_2] [i_1]))));
                            arr_19 [i_4] [i_2] = var_5;
                        }
                        arr_20 [i_1] [i_3] [i_3] [15] [i_1] [i_1] = ((25 ? -93 : 1799599577));
                    }
                }
            }
        }
        arr_21 [1] = (3611723001 ? (arr_16 [i_1] [i_1] [i_1]) : 6923119008690906504);
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        arr_24 [i_6] [i_6] = (min((((arr_22 [i_6] [i_6]) << (((arr_23 [i_6]) - 53579)))), var_17));
        arr_25 [i_6] &= (arr_22 [i_6] [i_6]);
        arr_26 [i_6] &= var_1;
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        arr_29 [i_7] = ((!(10 ^ 0)));
        arr_30 [i_7] = (max((((arr_27 [i_7]) ? (arr_27 [i_7]) : (arr_27 [i_7]))), (1 == -2484265666209014431)));
        arr_31 [i_7] = min(126, 234);
    }
    var_20 = (min(1, 41951));
    #pragma endscop
}
