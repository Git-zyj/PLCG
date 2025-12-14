/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((max(var_4, var_9)) - var_1))) ? var_2 : var_7));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            var_15 = (max(var_15, (-127 - 1)));
            var_16 = (((max((arr_4 [i_1] [i_1 + 1]), (arr_0 [i_1 + 1]))) == ((((arr_0 [i_1 - 2]) | 125)))));
            var_17 = (max((((arr_4 [i_1] [i_1 + 2]) % (arr_4 [i_1] [i_1]))), var_11));
            arr_5 [i_1] = var_10;

            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                var_18 = (max(var_18, (((var_3 >= (125 < 120))))));

                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    arr_13 [i_0] [i_1] = (((arr_2 [18]) | ((min(var_4, var_3)))));
                    var_19 = (((arr_9 [i_1] [i_2 - 1] [i_1]) == (arr_9 [i_1] [i_2 - 2] [i_1])));
                    var_20 = ((arr_8 [i_1] [i_2] [i_2]) > (-5209 < var_13));
                    arr_14 [i_0] [i_1] = ((130 && ((min((arr_10 [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_3 - 1] [i_3 + 1]), -5209)))));
                    arr_15 [i_1] [i_2] [i_1 - 1] [i_1] = var_13;
                }
                var_21 ^= ((-(8191 | var_4)));
            }
        }
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            arr_19 [i_4] = (((8166 >> 30) >> (32767 - 32761)));
            arr_20 [i_0] [i_4] = (((1 > var_13) > (((((arr_6 [18] [i_4] [i_0] [i_4]) + 2147483647)) << (((arr_8 [i_0] [i_4] [i_4]) - 120287806))))));
            var_22 = var_3;
        }
        for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
        {
            arr_23 [i_0] [i_0] [6] = (min(((((var_0 ? 0 : var_12)) ^ (var_0 | 113))), (((2776349731 * ((5216 ? var_7 : var_0)))))));
            var_23 = (((((arr_18 [i_5]) >> (var_8 - 84)))) ? (((((arr_2 [i_0]) + 2147483647)) >> (((arr_2 [i_5]) + 16787)))) : (arr_2 [i_0]));
        }
        for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
        {
            var_24 = -var_5;
            var_25 = 65535;
            var_26 = (((((!(arr_11 [i_0] [i_0] [i_0] [i_6])))) / var_8));
        }
        var_27 = ((((max(var_11, var_8))) < ((30 + (arr_12 [i_0])))));
        var_28 = (max(var_28, ((((min((var_0 > -6602046560656757275), (var_9 / var_7))) % var_2)))));
    }
    #pragma endscop
}
