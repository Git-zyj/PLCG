/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 65534;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_14 = (min(var_14, var_1));
        var_15 = var_11;
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_16 &= (84 % ((-(-127 - 1))));
                        var_17 = (min(171, (((!(((var_2 ? var_6 : 18))))))));
                        arr_10 [i_0] [i_1] [i_1] [i_3] [i_3] = ((((~(arr_0 [i_0]))) > (min((~var_1), ((var_11 ? (arr_1 [i_3] [i_1]) : 18))))));
                        var_18 &= ((!((min(7, 1)))));
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_19 = (((var_2 + 9223372036854775807) << ((((((var_10 ? var_4 : var_9)) ^ ((((-14 + 2147483647) >> (3176 - 3175)))))) - 2423338537))));
            var_20 = (min(var_20, (((!((var_4 >= (~84))))))));
            var_21 = ((((((~4294967289) % 7936))) ? ((((-64 >= ((218 ? 0 : -110)))))) : ((1 ? var_11 : ((9223372036854775807 - (arr_9 [i_4] [i_0] [i_4])))))));
            var_22 = (4294967295 ? 104 : 0);
        }
        var_23 *= (min((arr_3 [8] [i_0] [i_0]), (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
    }
    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        var_24 += (((((var_11 ? 171 : (arr_14 [1] [1])))) ? ((1 ? (arr_14 [i_5 + 1] [0]) : (arr_14 [12] [12]))) : ((~(arr_14 [i_5] [10])))));
        arr_18 [i_5] [i_5] = ((((min(var_0, (arr_15 [i_5])))) == 3132907977));

        for (int i_6 = 1; i_6 < 17;i_6 += 1)
        {
            arr_21 [i_5] [i_5] [i_5] = -55692;
            var_25 &= (+((((arr_20 [i_5 + 1] [i_5 - 1]) == var_10))));
        }
        for (int i_7 = 4; i_7 < 15;i_7 += 1)
        {
            arr_25 [i_5] [i_5] = (((-32758 ? -16482 : 7755983088358461039)));
            var_26 = ((var_2 ? (16481 > -9624) : ((min(((((arr_15 [i_5]) && 65))), (min((arr_22 [i_5] [i_5] [i_5]), 177)))))));
            var_27 += var_8;
        }
        var_28 ^= (arr_20 [i_5 + 1] [i_5 + 1]);
    }
    var_29 = ((min(48987, ((min(var_11, var_10))))));
    var_30 = 0;
    var_31 = (min(var_31, (~var_6)));
    #pragma endscop
}
