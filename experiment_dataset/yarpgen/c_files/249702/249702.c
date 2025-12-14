/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_13 = (31 ? 12074429184143896181 : 6372314889565655440);

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_7 [i_0] = (!12074429184143896174);
            var_14 = (min(var_14, ((max(((((arr_5 [12]) ? (arr_6 [i_0] [i_0 + 2]) : (arr_3 [14])))), (max(var_9, (arr_6 [i_1] [i_0 + 2]))))))));
            arr_8 [i_0] = ((-((((arr_1 [i_0]) != (arr_1 [i_0]))))));
            arr_9 [i_0] [i_0] = 12074429184143896170;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                var_15 = (min(var_15, ((((arr_12 [i_0 + 1] [i_0 - 1] [i_0]) ? ((((arr_11 [i_0] [i_3]) ? var_10 : (arr_3 [i_3])))) : (arr_11 [i_2] [i_3]))))));
                var_16 = (((~-1248601708) | (((arr_5 [i_0]) | (arr_0 [i_0])))));
                arr_14 [i_0 + 2] [i_2] [4] [i_0] = ((var_8 ? (arr_1 [i_0]) : (arr_6 [i_0] [i_0])));
            }
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                var_17 *= ((0 && (arr_2 [i_4])));
                arr_18 [2] [i_0] [5] = (((~var_11) & var_7));
                var_18 = ((((!(arr_1 [i_0]))) ? (arr_17 [i_0 + 2] [i_4]) : (((arr_10 [1] [i_2] [3]) ? (arr_10 [i_0] [i_2] [i_4]) : var_1))));
                var_19 = (((arr_4 [i_0 + 2] [i_4] [i_4]) ? (arr_4 [i_0 + 1] [i_2] [i_4]) : 13317593839837580179));
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 4; i_6 < 16;i_6 += 1)
                {
                    {
                        var_20 = (((arr_4 [i_2] [i_2] [i_2]) ? (arr_20 [i_0 + 1] [i_0 + 1] [i_0] [i_0]) : (-7 == var_12)));
                        arr_24 [i_6 - 1] [i_5] [i_0] [1] [i_0] = (((var_2 & var_1) & (arr_6 [i_0] [4])));
                        var_21 *= (arr_5 [i_6]);
                        var_22 = (min(var_22, (arr_20 [i_6 - 2] [i_6 - 3] [i_6 - 2] [i_6 - 3])));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_7 = 3; i_7 < 15;i_7 += 1)
        {
            var_23 = 13112385990407487095;
            var_24 = (((arr_13 [i_0 - 1] [i_0 + 1] [i_7 + 1]) == (arr_13 [i_0] [i_0 - 1] [i_7 + 1])));
            var_25 = (min(var_25, (~65535)));
        }
        arr_27 [10] |= ((var_0 != (((var_9 | (arr_23 [i_0] [i_0 - 1] [i_0 + 2]))))));
        arr_28 [i_0] = (max((((arr_11 [i_0] [i_0 + 1]) ? var_0 : var_10)), (((!(arr_11 [i_0] [i_0 + 1]))))));
        var_26 = (((((arr_20 [i_0] [i_0 + 2] [i_0 + 1] [i_0 + 1]) ? ((((var_0 < (arr_26 [i_0] [i_0 + 2] [i_0]))))) : (((arr_21 [i_0 - 1] [i_0 + 1] [5] [i_0 + 1]) ? var_4 : 100663296))))) && ((max((var_11 / 1), ((((((arr_0 [12]) + 2147483647)) >> (((arr_17 [i_0] [i_0 + 2]) - 63644)))))))));
    }
    var_27 = ((~(max(0, var_5))));
    #pragma endscop
}
