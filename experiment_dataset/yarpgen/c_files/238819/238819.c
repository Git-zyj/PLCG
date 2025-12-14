/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_15 = (min(var_15, (((var_1 ? ((var_0 ? var_0 : var_11)) : (arr_0 [6] [6]))))));
        var_16 = (arr_1 [i_0 + 1] [i_0]);
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_17 = (min(var_17, (((((((arr_0 [i_1] [14]) ? var_9 : var_2))) ? (min(var_1, var_13)) : ((((var_14 < (arr_0 [i_1] [14]))))))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        var_18 = (min(var_18, (max((max(((min((arr_9 [i_3] [i_2]), (arr_0 [i_1] [i_4])))), ((var_1 + (arr_8 [i_4] [i_3] [4] [4]))))), var_9))));
                        arr_11 [i_1] [i_2] [i_1] [i_3] [4] = var_14;
                        var_19 = (max(var_19, (((~((var_4 ? (arr_6 [i_1] [i_1] [i_1] [i_1]) : (arr_6 [i_1] [i_2] [i_3] [i_4]))))))));
                        var_20 += var_4;
                    }
                }
            }
        }
        var_21 = (max(var_21, (max((min((arr_7 [14]), (((arr_0 [i_1] [12]) ? var_11 : (arr_3 [8]))))), (arr_1 [i_1] [i_1])))));
    }

    for (int i_5 = 1; i_5 < 10;i_5 += 1) /* same iter space */
    {
        arr_16 [i_5] [5] = (((((((arr_5 [i_5]) || var_2)))) / ((~(arr_8 [i_5 - 1] [i_5] [i_5 - 1] [i_5])))));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    {
                        var_22 = (max(var_22, ((max((((arr_23 [i_5 + 2] [i_5] [i_5 + 2] [i_5 + 2] [i_5 + 1] [i_7]) ? ((min(var_11, var_3))) : (max((arr_17 [i_5 + 3] [i_5]), (arr_3 [8]))))), var_4)))));
                        var_23 = (((arr_12 [i_5 + 1]) ? (arr_12 [i_5 + 2]) : (~var_7)));
                    }
                }
            }
        }
    }
    for (int i_9 = 1; i_9 < 10;i_9 += 1) /* same iter space */
    {
        var_24 = (min(var_24, ((((((~(~var_6)))) ? ((((((var_14 ? (arr_20 [i_9 - 1] [8] [i_9 + 2]) : var_3))) ? ((var_5 / (arr_12 [i_9 + 2]))) : (!var_3)))) : (min(var_11, (arr_21 [i_9 - 1] [6] [6] [i_9 + 3]))))))));
        var_25 ^= (min((((!((max((arr_17 [i_9 + 3] [i_9 + 2]), (arr_5 [12]))))))), (max((arr_8 [0] [i_9] [6] [i_9 + 1]), (arr_2 [0])))));
        var_26 = (min(var_26, -5152));
        arr_26 [i_9] = var_0;
    }
    var_27 = (max(var_27, var_10));
    var_28 = (max(var_28, (~var_11)));
    #pragma endscop
}
