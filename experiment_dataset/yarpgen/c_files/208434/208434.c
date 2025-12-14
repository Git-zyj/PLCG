/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_8 ? (max((10848 - var_4), -10835)) : var_8));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_15 = (((((((((arr_2 [i_0] [i_0]) ^ (arr_3 [i_0] [13] [i_1])))) ? 18446744073709551615 : ((-25 ? 0 : var_9))))) / (((arr_0 [i_1]) ? (arr_0 [i_0]) : 0))));
            arr_5 [i_1] = ((!((min((arr_0 [i_0]), 1)))));
            var_16 = ((-5247429410867413016 ? (((arr_4 [i_0] [i_0]) ? ((2124666808 ? var_1 : 35184372088831)) : var_9)) : var_5));
            var_17 = 5247429410867413033;
        }
        var_18 = (max(var_18, 5247429410867413016));
        var_19 = ((arr_1 [i_0] [i_0]) && (arr_2 [i_0] [i_0]));
        var_20 += var_11;
        var_21 = -664950953660480095;
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_22 = (min((((arr_6 [i_2]) ? (arr_6 [i_2]) : (arr_0 [i_2]))), (((~((~(arr_1 [i_2] [i_2]))))))));
        arr_8 [i_2] = (arr_3 [i_2] [i_2] [i_2]);
    }
    for (int i_3 = 2; i_3 < 14;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 1; i_4 < 15;i_4 += 1)
        {
            arr_15 [i_4] [1] [i_3 + 2] = (arr_2 [i_3 - 2] [i_3 + 2]);
            var_23 = ((arr_6 [i_3 + 2]) <= (arr_6 [i_4 - 1]));
        }
        arr_16 [i_3] = (~-8273620442065609072);
        var_24 = (min(var_24, ((~(((var_1 ? -5247429410867413016 : 10843)))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        var_25 = (min(var_25, (((var_6 + (arr_6 [i_5]))))));
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 13;i_7 += 1)
            {
                {
                    var_26 = (((arr_9 [6] [6]) ? (arr_2 [i_5] [i_7 - 1]) : (arr_6 [i_6 - 2])));
                    var_27 = 1;
                    var_28 = (max(var_28, (((var_12 ? (~-31) : var_11)))));
                }
            }
        }
        var_29 -= (~34129);
        var_30 = ((-(arr_12 [i_5])));
        arr_25 [i_5] = ((var_7 ? ((~(arr_4 [21] [21]))) : (arr_22 [1] [1] [1])));
    }
    var_31 = (var_3 ^ var_8);
    var_32 *= -326229107507259252;
    var_33 &= var_13;
    #pragma endscop
}
