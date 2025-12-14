/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1) /* same iter space */
    {
        var_18 = ((1 ^ (min((arr_2 [i_0] [0]), (~872179137)))));
        var_19 = 1;
        var_20 = ((((-14172 ? (arr_2 [i_0] [i_0 + 1]) : var_11))));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1) /* same iter space */
    {
        var_21 &= (arr_2 [i_1] [i_1]);
        var_22 = (min(((var_11 ? ((((-148106569 == (arr_0 [0]))))) : var_15)), (16777215 > 11709)));
        arr_5 [i_1] = ((((((((-872179152 - (arr_0 [i_1])))) ? ((148106569 >> (var_4 - 51232))) : (((var_11 < (arr_2 [i_1] [i_1]))))))) ? 5116362797418479387 : ((((((arr_4 [i_1] [i_1 + 1]) ? 4 : (-127 - 1))))))));
        arr_6 [i_1 + 1] = 1948229735;
        arr_7 [i_1] = var_4;
    }
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        arr_10 [i_2] = (min((!var_1), ((!(arr_9 [i_2 - 1] [i_2 - 1])))));
        arr_11 [i_2] = var_3;
        var_23 = (max(var_23, ((((arr_8 [i_2]) + ((min(var_11, var_0))))))));
        arr_12 [6] &= -var_14;
    }
    var_24 = var_1;
    var_25 = var_7;
    var_26 |= (((var_2 ? -var_0 : var_8)));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 24;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        {
                            arr_26 [i_6] [i_4 - 1] [i_4 - 1] [i_6] &= (arr_22 [i_3] [i_3]);
                            arr_27 [i_3] [i_3] [i_3] [i_3] [i_3] [i_5] = var_15;
                            var_27 = (min(var_27, ((1117103813820416 / (arr_25 [i_6] [i_3] [i_5 + 1] [i_5 - 1] [i_3] [i_3])))));
                        }
                    }
                }
                arr_28 [i_4] [i_3] = (arr_25 [i_3] [16] [i_4 - 2] [i_4 + 1] [i_3] [i_4]);
                arr_29 [i_4 - 1] = 1;
                arr_30 [i_4] [i_3] [i_3] = (((var_3 != (min(var_8, var_4)))));
                arr_31 [i_4 - 2] [11] [i_3] = 0;
            }
        }
    }
    #pragma endscop
}
