/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_12 = (max(var_12, ((((((((arr_5 [i_1] [i_0] [i_0]) - (arr_3 [i_1] [i_0]))) - ((max((arr_2 [i_1]), (arr_4 [i_0])))))) + (((((arr_1 [i_0]) || (arr_1 [i_0]))))))))));
            arr_7 [i_0] = (((arr_2 [i_0]) < (((var_11 ? ((var_8 ? (arr_4 [i_0]) : (arr_0 [i_0] [i_1]))) : (-1893124450 / 27))))));
            arr_8 [18] [i_0] [i_1] = (max(((((arr_6 [i_0]) && ((min(-7892, 3147149721)))))), (min((((arr_5 [i_0] [i_0] [1]) & (arr_6 [i_0]))), (arr_2 [i_0])))));
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 4; i_3 < 21;i_3 += 1)
            {
                var_13 = (arr_6 [i_3 - 4]);
                var_14 -= (var_1 == var_6);
                arr_16 [i_2] [i_2] [i_2] = (30 << var_4);
                var_15 = ((((arr_6 [i_2]) ? var_2 : 27)));
                arr_17 [i_0] [i_2] [3] = var_6;
            }
            arr_18 [i_2] [20] [i_2] = ((((!(((var_6 ? (arr_1 [i_0]) : (arr_5 [i_0] [i_0] [i_0])))))) ? (((arr_5 [i_0] [i_0] [i_2]) ? var_6 : (arr_5 [i_0] [i_0] [i_0]))) : ((((var_6 <= (arr_15 [i_2] [i_2] [i_2])))))));
            arr_19 [i_2] = ((var_0 | (arr_15 [i_2] [i_2] [11])));
        }
        var_16 -= var_5;
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
    {
        var_17 *= (((((((var_5 * (arr_14 [i_4] [i_4])))) >= (min((arr_10 [i_4] [i_4]), (arr_0 [i_4] [i_4]))))) && ((((30 && (arr_3 [14] [i_4]))) && ((((arr_1 [i_4]) ? 52 : (arr_5 [i_4] [5] [i_4]))))))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 22;i_6 += 1)
            {
                {
                    var_18 *= (max(((!(((arr_21 [i_6]) && -2147483642)))), ((!((((arr_5 [i_4] [i_4] [i_4]) ? (arr_1 [i_4]) : var_0)))))));
                    var_19 = (max(var_19, (arr_5 [i_4] [i_5] [3])));
                    arr_28 [i_5] [i_4] [i_5] = (arr_5 [i_4] [1] [i_6 - 3]);
                    arr_29 [i_4] [i_5] [i_5] = (min((!var_3), (((arr_13 [i_5] [i_6 - 1] [i_6] [i_5]) + (arr_15 [i_5] [i_4] [i_5])))));
                }
            }
        }
    }
    var_20 = (var_0 || var_1);
    #pragma endscop
}
