/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_10 = (max(var_10, ((((((10251565173860937168 == (min(309610032, var_3))))) < -309610033)))));
            arr_5 [i_0] [i_0] [i_0] = (arr_3 [i_0]);
        }
        for (int i_2 = 3; i_2 < 17;i_2 += 1)
        {
            var_11 = (((((!(arr_7 [i_0 - 1] [i_2 + 1])))) << ((((min((arr_7 [i_0 + 1] [i_2 + 2]), (arr_7 [i_0 - 1] [i_2 - 1])))) + 49))));
            var_12 = 9223372036854775795;
        }
        var_13 = var_5;
        var_14 |= ((var_5 - ((-18720 - (~414516349712367931)))));
    }
    var_15 = var_0;

    for (int i_3 = 2; i_3 < 9;i_3 += 1)
    {
        var_16 *= (((arr_3 [i_3 + 1]) & (arr_3 [i_3 + 1])));
        var_17 = ((((var_2 ? -32757 : (arr_2 [i_3 - 2])))) ? ((~(arr_6 [i_3 + 2] [i_3]))) : (min(15794209190290047004, (arr_0 [i_3 + 2]))));
        arr_10 [i_3] [i_3] = (-28480 / -1269400575);

        for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
        {
            arr_14 [i_3] [i_3] = (((arr_0 [i_3 - 1]) ? ((min(255, (arr_0 [i_4])))) : (((arr_0 [i_3 - 1]) >> (3018704586038714950 - 3018704586038714934)))));
            var_18 ^= (min((((((max((arr_13 [i_3 + 1]), 61967009))) ? (!55316) : -3573427330064031400))), (min((arr_11 [i_3 - 1]), var_9))));
            arr_15 [i_3] [i_3] [7] = 0;
            var_19 = (min(var_19, ((min(((min(var_4, 28465))), ((~(arr_8 [i_4]))))))));
        }
        for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
        {
            arr_19 [i_5] [i_3] = (arr_1 [i_5]);

            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                var_20 = var_5;
                arr_23 [i_5] [i_3] = (max((arr_1 [i_3 + 1]), (((var_7 == (-9223372036854775807 - 1))))));
            }
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                arr_26 [i_7] [i_5] [i_3] = (((((-(arr_12 [i_7] [i_3])) / ((var_1 ? -619 : var_0))))));
                arr_27 [2] [2] [2] [2] = ((var_1 ? (((!(arr_0 [i_5])))) : ((~(arr_25 [i_3] [i_3 + 1] [i_3 - 1] [i_3 + 2])))));
            }
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                var_21 ^= max(1269400575, 15428039487670836677);
                var_22 = 745714920;
                var_23 = (((max(14, 2652534883419504612)) / (((((max((arr_28 [i_3] [i_8]), 15428039487670836670))) ? ((~(arr_29 [i_5]))) : ((((arr_30 [i_3] [i_5] [i_5]) < 15794209190290047004))))))));
                var_24 = arr_30 [i_3] [7] [i_3];
                arr_31 [i_5] [i_5] = ((!(((~(~15428039487670836670))))));
            }
            var_25 = (min(var_25, (min((max((((arr_11 [i_3]) * var_5)), ((max(-1032098255, var_3))))), (((!(arr_4 [i_3] [i_3 + 2]))))))));
        }
    }
    #pragma endscop
}
