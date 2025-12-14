/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = ((arr_1 [i_0] [i_0]) || ((((arr_1 [i_0] [i_0]) ? 215 : (arr_1 [i_0] [i_0])))));
        var_13 -= ((((1 ? (arr_1 [i_0] [i_0]) : -2074437946))) ? var_11 : (((arr_1 [i_0] [1]) ? 1 : 1)));
    }
    var_14 = ((((((((var_3 ? var_5 : var_1))) ? ((1 ? var_9 : var_0)) : (var_2 & var_11)))) ? ((((var_8 ? 1884863468 : var_2)) - -126)) : var_8));
    var_15 &= var_2;
    var_16 = ((~(max((var_10 - 1), (65 != var_5)))));

    /* vectorizable */
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        var_17 = ((var_4 <= 47314) ? (!var_5) : (arr_3 [i_1 + 1]));

        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            var_18 = ((!var_5) ? 47308 : ((106 ? 1 : (arr_2 [i_1 + 1] [i_2]))));
            arr_6 [i_1 - 1] [i_1 - 1] [i_1 - 1] = (((-(arr_3 [i_1]))) - (arr_3 [i_1 - 1]));

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
                {

                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        var_19 *= (((arr_8 [i_1] [i_4] [i_3]) < ((126 ? 47315 : var_6))));
                        var_20 = ((86 ? -var_2 : (1 && var_8)));
                        arr_15 [i_3] [i_3] = ((arr_7 [i_2 + 3] [i_3]) <= (((arr_10 [i_1] [i_4] [i_1] [i_4] [11] [1]) ? (arr_8 [i_1] [i_1] [i_1]) : var_2)));
                        var_21 ^= ((arr_7 [i_1] [0]) ^ (arr_7 [i_2 + 3] [16]));
                        var_22 = var_6;
                    }
                    arr_16 [i_3] [12] [i_3] [i_3] = (((arr_5 [i_2 + 1] [i_1 + 1] [i_2 + 1]) ? (arr_5 [i_2 + 2] [i_1 - 1] [i_4]) : (arr_13 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_2 + 1])));
                    arr_17 [i_1 + 1] [i_3] = (((var_10 ? (arr_5 [1] [i_2] [i_2]) : 0)));
                }
                for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                {
                    var_23 = (!((1 >= (arr_4 [i_3]))));
                    var_24 = (((arr_11 [i_2 + 2] [i_2 + 3] [i_2 - 1] [i_2 + 1]) ? ((var_11 ? var_7 : -91)) : (154 - var_11)));
                    arr_20 [i_3] = (91 - 1074834194);
                    var_25 = var_7;
                }
                var_26 += ((-(!var_1)));
                arr_21 [i_1 + 1] [1] [i_3] [i_3] = (var_8 ^ 106);
                var_27 = (arr_11 [5] [5] [5] [i_1]);
            }

            for (int i_7 = 0; i_7 < 0;i_7 += 1)
            {
                var_28 = (min(var_28, 1));
                var_29 = (min(var_29, ((((((var_0 ? var_11 : var_3))) ? (!0) : (((arr_11 [0] [0] [i_2] [1]) & 126)))))));
            }
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                var_30 = (((arr_26 [i_1] [6] [1] [5]) * (1 | var_6)));
                var_31 = (((arr_7 [i_2] [i_8]) * var_9));
                var_32 = (!(arr_22 [i_1 - 1]));
            }
        }
    }
    #pragma endscop
}
