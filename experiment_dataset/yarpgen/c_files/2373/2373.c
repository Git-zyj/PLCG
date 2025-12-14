/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((min((!1), -4158888327472324790))) ? var_5 : var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_13 = (min(var_13, ((((min(-5965258070214382350, 133)) ^ (arr_3 [i_0] [i_1]))))));

                for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
                {
                    var_14 = (((((227 * (arr_6 [i_0] [i_1] [i_1] [i_2])))) - var_11));
                    var_15 = ((~(((!17611) ? 0 : (max((arr_6 [i_0] [i_0] [i_2] [i_2]), var_6))))));
                    var_16 = (min(var_16, ((max((max(2217, 1)), (!22521))))));
                    var_17 = arr_1 [i_0];
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
                {
                    arr_12 [i_3] [i_0] [i_3] [i_3] = 3135898206;
                    var_18 = (((((236 ? var_6 : (arr_2 [i_0])))) ? (arr_0 [i_0]) : var_6));
                    var_19 = 1;
                    arr_13 [i_3] [i_0] [i_0] [i_0] = (arr_3 [i_0] [i_0]);
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                {
                    var_20 = (((arr_15 [i_0] [i_1] [i_4]) / (arr_15 [10] [i_1] [i_4])));
                    var_21 = (((arr_0 [i_4]) ? (arr_0 [i_0]) : (arr_0 [i_0])));
                    var_22 = (((arr_5 [i_0] [i_4]) ? (arr_10 [i_0] [i_1] [i_0] [i_4]) : (arr_2 [i_1])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            {
                arr_21 [i_6] = (min((((~((~(arr_17 [i_5])))))), (max(var_8, -414202741))));
                arr_22 [i_5 - 1] = ((1 ? (arr_11 [i_6] [6] [i_6]) : (min((arr_7 [5] [i_6] [i_5 + 2] [i_5]), (arr_7 [i_6] [i_6] [i_5 + 2] [2])))));
            }
        }
    }
    var_23 ^= var_8;
    var_24 = var_8;
    #pragma endscop
}
