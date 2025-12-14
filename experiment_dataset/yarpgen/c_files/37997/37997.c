/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_21 = var_9;
        var_22 = (-(!var_0));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_23 ^= (-1 - ((var_16 ? (arr_2 [i_1]) : (arr_2 [i_0]))));
                    var_24 = ((-(arr_1 [i_0] [i_2 + 2])));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_25 = ((!((min(((65535 ? -1 : 7583884483737267364)), (arr_9 [i_3] [i_3]))))));

        /* vectorizable */
        for (int i_4 = 1; i_4 < 23;i_4 += 1)
        {
            var_26 = (arr_13 [i_3] [i_3]);
            var_27 = (arr_11 [17] [i_3]);
            var_28 = (--6);
        }
        for (int i_5 = 2; i_5 < 23;i_5 += 1)
        {
            var_29 = (min(var_29, (((-((~(-1 & var_2))))))));
            var_30 = ((~(((!(!7583884483737267364))))));
        }

        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            var_31 = ((((max((arr_13 [i_3] [i_6]), var_8))) ? ((~(((arr_18 [i_6]) ? (arr_16 [i_3] [i_6] [i_6]) : 9249854929338340547)))) : ((((!((((arr_12 [i_6] [i_6]) ? (arr_10 [i_3] [i_6]) : var_6)))))))));

            for (int i_7 = 1; i_7 < 21;i_7 += 1)
            {
                var_32 = (min(((((var_10 ^ var_6) <= (((1023 ? 7583884483737267389 : 6)))))), (min(((835578480 ? -475784329805276224 : 835578464)), (arr_18 [i_3])))));
                var_33 = ((((var_1 - 0) ? (!100) : 252)));
                var_34 = (arr_9 [i_3] [i_6]);
                var_35 = (((((((max(23, var_2))) ? var_2 : (max(var_4, 4))))) ? (arr_19 [i_6]) : (!4)));
            }
            for (int i_8 = 3; i_8 < 24;i_8 += 1)
            {
                var_36 = (min(((-835578480 ? (((arr_21 [i_3] [i_6] [i_8] [i_6]) ? var_9 : var_7)) : (((((arr_22 [i_8 - 2] [i_6] [i_6] [i_3]) > (arr_16 [3] [3] [i_8]))))))), (!var_7)));
                var_37 ^= ((-1832894668 ? (max((((arr_23 [i_3] [i_6] [22] [i_3]) * 0)), (!var_16))) : ((max((arr_19 [i_3]), (arr_19 [i_3]))))));
                var_38 = (min(((max((arr_24 [i_6] [i_8 + 1] [i_8 - 1]), (arr_24 [i_6] [i_8 - 1] [i_8 - 1])))), 1807397918271218289));
                var_39 |= (max((((((arr_20 [24] [6] [i_8 - 1]) % var_19)) / (13 | 125))), (((~(min(var_17, 111)))))));
            }
        }
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            var_40 = ((((((~(arr_11 [i_3] [i_9]))) + 2147483647)) << ((((((~(arr_20 [23] [i_9] [i_9]))) + 11634)) - 21))));
            var_41 = ((((max((arr_11 [i_3] [1]), var_2))) || ((max(37980, (arr_11 [i_3] [i_9]))))));
            var_42 -= (5108603775028479661 || -7478667956668033234);
            var_43 = ((!(arr_10 [i_9] [i_3])));
        }
    }
    #pragma endscop
}
