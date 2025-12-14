/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_15 = var_12;
        arr_2 [i_0] [i_0] = (((((var_12 ? 1627736777 : 1))) ? (arr_1 [1]) : (!582945980)));
        var_16 = var_12;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_17 = ((1 ? 1 : ((3712021334 ? 1 : 1050552606))));

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_18 += ((1130 ? 17 : 3712021308));
            var_19 = var_1;
            var_20 *= var_0;
            var_21 = (var_14 ? (arr_0 [i_1]) : 21);

            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
                {
                    var_22 |= (((arr_13 [i_1] [i_2] [i_3] [i_4]) ? (arr_12 [i_1] [i_3] [i_4]) : (arr_5 [i_3])));
                    var_23 -= var_4;
                }
                for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                {
                    var_24 = (min(var_24, ((((-(arr_13 [i_1] [i_1] [i_1] [i_5])))))));
                    var_25 = (((arr_12 [i_1] [i_2] [i_5]) ? (arr_12 [i_5] [i_2] [i_1]) : (arr_8 [i_2])));
                    var_26 = 60;
                    var_27 = (((var_1 + 4135519236) + var_3));
                }
                var_28 = ((((arr_17 [1] [i_1] [i_2] [i_2]) ? 1 : (arr_1 [i_1]))));
            }
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                var_29 *= (arr_8 [i_6]);
                var_30 &= var_1;
                var_31 = ((~((var_13 ? var_7 : var_8))));
                var_32 = (((((-13084 ? (arr_12 [i_2] [i_2] [15]) : 4294967295))) ? (((268304384 ? var_14 : var_10))) : (arr_10 [i_6] [i_6] [i_2] [i_1])));
                var_33 = (!((((arr_3 [15]) ^ var_3))));
            }
            for (int i_7 = 1; i_7 < 16;i_7 += 1)
            {
                var_34 = var_2;

                for (int i_8 = 1; i_8 < 15;i_8 += 1)
                {
                    var_35 |= ((((!(arr_17 [i_1] [i_2] [i_7] [1]))) ? ((-4791376922897874849 ? (arr_16 [i_1] [i_1] [i_7] [4]) : 42)) : var_9));
                    var_36 += -36;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 12;i_9 += 1)
    {
        var_37 = var_2;
        var_38 = var_8;
        var_39 = 582945955;
    }
    var_40 -= (((max(var_12, 116)) << (2093395616 - 44671)));
    #pragma endscop
}
