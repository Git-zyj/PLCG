/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (max(var_8, ((min((32767 || var_4), (var_0 && var_10))))))));
    var_15 = (max(var_15, var_6));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            var_16 += 47055;
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_17 = ((40580 ? -11819 : (arr_9 [i_4] [i_3] [i_2] [i_1] [i_0])));
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = var_10;
                        }
                    }
                }
            }
        }
        var_18 ^= (((arr_2 [0]) - (arr_2 [1])));
        var_19 += (arr_0 [8]);
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        var_20 = ((((0 <= ((1 ? 6144 : 7969587437507000288)))) ? 27 : ((-986502428702300431 ? 7245999111307003013 : 20301))));

        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
        {
            var_21 = min(9, 169212889);
            var_22 ^= -111;
            var_23 = ((-(((2104599744 || var_3) * var_1))));
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_8 = 3; i_8 < 22;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    {
                        var_24 = (min(var_24, (var_3 && var_0)));
                        arr_31 [i_8] [i_8] [0] [i_8] = (((((((var_0 ? var_3 : var_1)) * (-1134128380 / 700)))) ? var_1 : (arr_27 [i_5] [i_5] [i_5] [i_8])));
                        arr_32 [18] [i_7] [i_7] [i_8] = ((~(arr_24 [i_5] [i_9])));
                    }
                }
            }
            arr_33 [i_7] [i_7] [i_5] = ((((arr_24 [i_7] [i_7]) || var_2)) ? (((((arr_24 [i_7] [i_5]) <= (arr_24 [i_7] [i_5]))))) : ((-27 ? 5777337905098521777 : (arr_24 [i_5] [i_5]))));
            arr_34 [i_7] = ((var_1 || (!var_1)));
            arr_35 [i_5] [i_7] = (((~18446744073709551604) <= (((((((var_12 ? (arr_20 [i_7] [i_5]) : 3083519955381971838))) || (var_3 - 0)))))));
        }
        var_25 = (max(var_25, (((((((arr_22 [i_5] [i_5]) ? 1 : (arr_22 [i_5] [i_5])))) ? (((arr_22 [i_5] [i_5]) & 4294967289)) : (arr_22 [i_5] [i_5]))))));
    }
    for (int i_10 = 0; i_10 < 17;i_10 += 1)
    {
        var_26 = (min((min((arr_26 [i_10] [i_10]), (min(var_12, var_0)))), 2505661145));
        var_27 = (((((arr_22 [i_10] [i_10]) ? (((var_7 ? var_13 : 1))) : ((var_10 / (arr_24 [i_10] [i_10]))))) + (((-1 ? ((9 ? 1969130938 : 2147483647)) : (1196848235 / 1))))));
    }
    #pragma endscop
}
