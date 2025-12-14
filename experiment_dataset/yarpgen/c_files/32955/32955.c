/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_15 = 9455;
        arr_3 [i_0 + 1] = ((arr_2 [i_0 - 1] [i_0 - 1]) ? (arr_2 [i_0 + 1] [i_0 - 1]) : (arr_2 [i_0 - 1] [i_0 + 1]));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = 7275027037835114079;
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        arr_15 [i_1] [1] [i_1] [1] [i_1] [1] = ((var_3 * (arr_12 [i_2 - 2] [i_2 - 1] [i_2 - 2] [i_2 + 1])));
                        arr_16 [i_1] [i_1] [i_1] [i_4] = (((!var_3) != ((var_0 ? 10845 : var_12))));
                    }
                }
            }
        }
    }
    var_16 *= ((!((((((51 ? var_12 : var_8))) ? (((var_4 ? var_4 : 31))) : ((562949953421311 ? var_2 : -1254849884)))))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            {
                arr_23 [10] = (!(((arr_22 [i_6] [i_6] [i_6]) >= 1)));
                var_17 = (((((var_9 ? -9231 : 2178430777))) ? ((((arr_19 [i_6]) >= (arr_19 [i_5])))) : (((((arr_18 [i_6]) + 2147483647)) >> (49751 - 59)))));
            }
        }
    }
    var_18 = (((((((138 ? 3793370869 : var_10))) ? var_1 : var_6)) * var_0));
    #pragma endscop
}
