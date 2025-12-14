/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;
    var_15 = (min(var_13, var_5));
    var_16 = var_4;
    var_17 = (max(var_9, (var_8 / var_12)));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = ((((min(var_2, (min(var_12, var_2))))) ? (1361204910 - -2115662762) : ((~((var_6 ? var_8 : (arr_1 [i_0])))))));
        var_18 *= (((((((min(7, 11319485880725015682))) ? (var_0 >= 245) : (-127 - 1)))) || (((~(arr_1 [i_0]))))));
    }
    for (int i_1 = 3; i_1 < 19;i_1 += 1)
    {
        var_19 = ((!((min((min(8714846610256541492, 587450943)), (((arr_4 [i_1]) ? 7127258192984535955 : 1053683035)))))));

        for (int i_2 = 3; i_2 < 19;i_2 += 1) /* same iter space */
        {
            var_20 = (min(((-((var_8 ? var_13 : 4012470843010373875)))), (max(((var_12 ? var_11 : 3781083231334533914)), ((min(var_8, (arr_7 [i_2] [i_1]))))))));
            arr_8 [i_1] [i_2] = (arr_7 [i_1 + 1] [i_2 + 1]);
        }
        for (int i_3 = 3; i_3 < 19;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                var_21 *= (max(((((((arr_3 [i_4]) ? (arr_12 [i_4]) : var_6))) ? (!var_6) : -1053683035)), ((-((max(var_12, var_5)))))));
                arr_15 [i_1] [i_3 - 2] [i_3] [i_1] = var_4;
                var_22 = ((((min((((var_12 ? (arr_4 [i_1]) : var_12))), (arr_14 [i_4])))) ? ((max((((var_9 || (arr_4 [i_1])))), ((var_8 ? var_10 : 65532))))) : ((max(248, var_2)))));
                var_23 = (((((~(arr_12 [i_1])))) >= (max((arr_3 [i_1]), (arr_11 [i_1] [i_4])))));
                var_24 |= ((min((min(1053683039, 245)), (~-1866527502))));
            }
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {

                /* vectorizable */
                for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                {
                    var_25 = (arr_6 [i_1 - 3] [i_1]);
                    var_26 = var_12;
                }
                for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
                {
                    var_27 ^= (((((~(((arr_7 [i_3] [i_7]) - -1053683031))))) ? (arr_21 [i_1 - 2] [i_1 + 1] [i_1 - 3] [i_1 + 1]) : (min((arr_12 [8]), (((arr_6 [i_1] [16]) - var_7))))));

                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 19;i_8 += 1)
                    {
                        arr_27 [i_1] [i_3 - 3] [i_3 + 1] [i_3] [i_3] [i_3] [i_3 - 3] = (((((var_9 ? 4057381605 : var_11))) ? var_1 : var_5));
                        var_28 = (arr_19 [i_3] [i_5] [i_7] [i_8]);
                        var_29 -= ((((arr_6 [i_5] [0]) ? (arr_17 [i_7] [i_8 + 1]) : (arr_22 [i_8] [2] [2] [i_1 - 3]))) * 248);
                        var_30 = ((arr_24 [i_1]) ? (arr_24 [i_1]) : (arr_24 [i_1]));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        arr_30 [i_1] [i_1] [i_5] [i_7] [i_9] = (arr_17 [i_3 - 2] [i_3]);
                        var_31 = (max(var_31, (((-(arr_10 [i_5] [i_3 - 3] [i_1 - 2]))))));
                        var_32 = var_1;
                    }
                }
                var_33 = (max(112, (max(33, -21225))));
                arr_31 [i_1 - 1] [i_3] [i_1] = (min(((-(arr_14 [i_1 + 1]))), ((((max((arr_25 [i_1] [i_1] [i_1 + 1] [i_3 + 1] [i_5]), var_10))) ? ((var_3 << (var_9 - 14228911917215720617))) : (~248)))));
                arr_32 [i_1 - 1] [i_3] [i_5] [i_1] = (((((0 ? 1658436167 : 1053683030))) != (arr_13 [i_3 - 2])));
            }
            arr_33 [i_1 - 1] [i_1] = var_1;
            var_34 += (((((37 ? var_12 : (arr_3 [6])))) ? (((!(arr_18 [i_1 - 3])))) : ((((((arr_3 [12]) << (var_13 - 32709)))) ? (arr_19 [i_1 - 3] [i_1 - 2] [i_3] [i_3 - 1]) : (~var_10)))));
        }
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            var_35 *= (max((((var_3 ? ((((var_6 < (arr_35 [i_10]))))) : ((-(arr_3 [i_10])))))), ((((max(var_4, (arr_21 [i_1] [i_10] [i_10] [i_10])))) ? (arr_24 [i_10]) : ((var_2 ? var_2 : (arr_10 [i_10] [i_1 - 3] [i_1 - 3])))))));
            var_36 = (max((-156856370 / 219), ((((((arr_23 [i_10] [i_1] [i_1] [i_1 - 3]) ? 16 : (arr_24 [i_1])))) ? (108 * 5944794712362574324) : (arr_17 [i_1] [i_10])))));
        }
        var_37 = ((!((min(1053683039, 7403120941416321991)))));
    }
    #pragma endscop
}
