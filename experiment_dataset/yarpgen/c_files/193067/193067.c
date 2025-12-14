/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_5 - ((((5 ? var_5 : var_5)) & 206))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_11 = max((((var_7 <= var_9) ? -var_0 : (((arr_1 [i_0] [i_0]) ? var_4 : var_1)))), ((((arr_0 [i_0]) == ((min(67, (arr_1 [1] [i_0]))))))));
        arr_3 [i_0] [i_0] = ((-((((arr_1 [i_0] [i_0]) > (arr_1 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_8 [i_2] [i_1] [i_2] = (((((((1 ? 201 : var_9))) ? (((arr_6 [i_2] [20] [i_1]) ? (arr_6 [i_1] [i_2] [i_2]) : var_8)) : 1)) + (((-(max(2381122965, (arr_4 [i_1] [i_1]))))))));
            var_12 = (((((var_0 > 2037) ? ((((arr_5 [i_1]) ? -1785317522 : (arr_4 [i_1] [i_2])))) : (arr_6 [i_1] [i_2] [i_2]))) - (max(var_8, (max(33236, 2114233522127917425))))));
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
        {
            var_13 = (arr_10 [i_1] [i_1] [i_3]);
            var_14 ^= (arr_5 [i_3]);
            arr_11 [i_1] [i_3] [1] = (arr_10 [i_1] [7] [i_3]);
        }
        for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
        {
            var_15 = ((((((-2147483636 ? 15060072656804588902 : var_0)))) ? (max((min(1, (arr_7 [i_1]))), (arr_7 [i_1]))) : var_7));
            var_16 = (max(var_16, var_0));
        }
        var_17 &= (~27);

        for (int i_5 = 2; i_5 < 21;i_5 += 1)
        {
            var_18 = 32764;
            var_19 = ((var_5 ? (arr_13 [i_1] [i_1] [i_1]) : ((-(max((arr_10 [i_5] [i_5] [i_5]), (arr_15 [i_5])))))));
        }
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {

            for (int i_7 = 1; i_7 < 18;i_7 += 1)
            {
                var_20 = ((min((arr_6 [i_7 + 4] [i_7 + 4] [i_7]), (((arr_9 [i_1] [i_6]) ? 15060072656804588914 : var_3)))));
                arr_21 [i_1] [i_6] [10] [i_6] = (max((min(-var_8, var_9)), (((var_9 / var_7) / (arr_6 [i_1] [i_6] [i_7])))));
            }
            var_21 *= 15284882057604584099;
            var_22 = max(((((max(var_9, (arr_14 [13])))) ? var_5 : (max(2190935661, 20982)))), (((!(arr_13 [10] [i_1] [10])))));
            var_23 = ((var_2 ? -var_4 : 73));
        }
    }
    var_24 = ((var_6 > var_7) ? (24508 - var_7) : var_8);
    #pragma endscop
}
