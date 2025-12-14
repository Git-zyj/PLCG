/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_14 += (arr_0 [i_0]);

        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            arr_6 [i_1] = ((((((((13 ? 66 : 18446744073709551610))) ? 10 : (((arr_3 [11]) % 18446744073709551610))))) ? (arr_2 [i_0]) : var_6));
            var_15 ^= ((+(((arr_4 [i_0] [i_1 + 1] [i_1 + 1]) ? (arr_4 [i_1] [i_1 - 1] [i_1 - 1]) : 214))));
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {
            var_16 += -29549;
            var_17 -= (-4459470650626608014 / var_13);
            arr_11 [i_0] [i_2] [3] = (((((42 ? 151 : -2088371003))) ? (arr_9 [i_2] [13] [i_2]) : (arr_7 [i_0] [i_0])));
            arr_12 [i_2 + 1] [i_2 + 1] [i_2 + 1] = (((arr_7 [i_2 - 1] [i_2 + 2]) || 7));
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            var_18 -= (max((max((arr_9 [i_0] [i_3] [6]), 201)), ((((((min((arr_10 [19] [19] [i_0]), 42)))) == 6)))));
            var_19 -= 0;
            var_20 = min((min(56893, 17071737229254434349)), var_2);
            arr_15 [22] [i_3] = ((((!(arr_14 [i_0])))));
        }
    }
    var_21 += (((var_6 ? var_6 : (min(19, var_13)))));
    var_22 = ((var_11 ? var_7 : 4459470650626608014));
    #pragma endscop
}
