/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            var_12 = ((1 ? (arr_0 [i_1 + 1] [i_1]) : (((1376428887 ? var_0 : 32027)))));
            var_13 *= (4294967269 >= -var_6);
            arr_6 [0] = var_8;
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_14 = ((~((2097274508 ? 18446744073709551583 : var_11))));
            arr_11 [i_0] = var_10;
        }
        var_15 = var_0;
    }
    var_16 = (max(var_16, (3 | 14954655633257506805)));

    for (int i_3 = 1; i_3 < 21;i_3 += 1) /* same iter space */
    {
        arr_15 [i_3] = 24644;
        arr_16 [i_3] = (arr_13 [i_3]);
    }
    for (int i_4 = 1; i_4 < 21;i_4 += 1) /* same iter space */
    {
        var_17 ^= (((var_6 ? var_9 : (arr_20 [i_4 + 2]))));

        for (int i_5 = 4; i_5 < 23;i_5 += 1)
        {

            for (int i_6 = 1; i_6 < 23;i_6 += 1)
            {
                var_18 ^= -9088;
                arr_25 [i_4] [i_4 - 1] [i_4] [i_6] = (var_7 != 18446744073709551593);
            }

            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                arr_30 [0] [18] [i_7] = (min(((-26 ? 3492088440452044804 : 8336597823281442557)), (var_8 && 40966)));
                arr_31 [i_4] [i_5] [12] [i_7] = ((-((581435124529092852 ? 651679906 : 651679909))));
                var_19 = 651679917;
            }
            var_20 = ((-(arr_21 [i_5 - 2] [i_5 + 1])));
            var_21 = (((min(651679910, var_1))));
        }
    }
    for (int i_8 = 1; i_8 < 21;i_8 += 1) /* same iter space */
    {
        arr_35 [i_8] [i_8] = ((483011055 * ((((!(arr_34 [i_8 + 2] [i_8 - 1])))))));
        arr_36 [i_8] = ((((((-9223372036854775807 - 1) ? var_9 : var_4))) ? var_5 : ((min((arr_13 [i_8 + 1]), (arr_13 [i_8 + 3]))))));
    }
    var_22 = (((max(var_1, ((42721 ? var_9 : var_10))))) ? var_6 : var_5);
    #pragma endscop
}
