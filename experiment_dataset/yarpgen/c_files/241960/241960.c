/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-((1 ? ((var_1 ? var_3 : 1)) : var_0))));
    var_14 = (max(var_4, var_10));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_4 [1] = (min((arr_0 [i_0] [i_0]), ((var_1 & (arr_3 [i_0] [i_1] [i_0])))));
            var_15 += arr_0 [i_0] [i_1];
        }
        for (int i_2 = 4; i_2 < 11;i_2 += 1)
        {
            arr_7 [i_0] = (((((!(arr_1 [i_2 - 3])))) < ((var_0 ? var_9 : var_11))));
            arr_8 [i_0] [i_2] = var_6;
            arr_9 [i_0] [1] [i_0] |= (max((arr_6 [i_0] [i_2 - 2]), (((var_4 ? (!-150402407) : (arr_2 [10] [i_2 - 3] [i_2 - 3]))))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            var_16 = ((-(arr_5 [7] [0] [i_3])));
            var_17 = (~-var_9);
        }

        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            var_18 = (max(var_18, (!254)));

            for (int i_5 = 2; i_5 < 9;i_5 += 1) /* same iter space */
            {
                var_19 = min(-var_7, (((max(-150402407, 18182)) + (arr_14 [i_0] [i_0]))));
                arr_18 [i_0] [i_0] [i_0] [i_0] = var_7;
            }
            for (int i_6 = 2; i_6 < 9;i_6 += 1) /* same iter space */
            {
                var_20 = (-47361 > -150402407);
                arr_21 [i_0] [i_0] [i_4] [i_4] = (((((arr_17 [3] [i_6 - 1] [i_6 + 1]) ? (arr_13 [i_0] [i_6 - 1] [i_6]) : (arr_13 [i_0] [i_6 - 2] [i_6])))) ? -1 : (((arr_3 [i_0] [i_6 + 2] [10]) - (arr_17 [i_0] [i_6 + 3] [7]))));
                arr_22 [i_4] |= ((var_3 ? 241 : (6414473931607524153 * 1)));
            }
            arr_23 [8] [i_4] = (min((((arr_1 [i_0]) | (arr_1 [i_4]))), (arr_1 [i_0])));
        }
    }
    #pragma endscop
}
