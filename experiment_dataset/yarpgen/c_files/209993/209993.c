/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= var_11;
    var_19 &= (var_1 ? ((201 ? var_1 : -456705442)) : (-8130837140052380252 | var_0));

    for (int i_0 = 1; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_20 &= ((((((arr_2 [i_0 + 1]) ? 0 : (arr_2 [i_0 - 1])))) / (((arr_1 [i_0 - 1]) ? (arr_0 [i_0 - 1]) : 0))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_21 = ((~(arr_6 [i_0 + 1] [i_0] [i_0 + 1])));
                        var_22 += var_13;
                        var_23 = -1859984773;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 21;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 4; i_5 < 20;i_5 += 1)
        {
            arr_15 [i_4 - 1] [i_4 - 1] [i_4 - 1] |= (arr_8 [i_4 + 1] [i_4] [i_5 - 1] [i_4]);

            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                arr_19 [i_4] [i_5] [i_6] &= var_4;
                var_24 &= ((~(arr_9 [i_4 + 1] [i_4] [i_5] [i_6])));
            }
            var_25 = -1859984773;
        }
        for (int i_7 = 2; i_7 < 20;i_7 += 1) /* same iter space */
        {
            arr_23 [i_7] = -410194880;
            var_26 *= ((~(arr_17 [i_7] [i_4 + 1] [i_4])));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    {
                        arr_29 [i_9] [i_7] [i_8] [i_9] [i_4] &= (((var_6 & 1) ? ((var_13 ? 1 : 161)) : ((~(arr_26 [i_9] [i_8] [i_8] [i_8] [i_4] [i_4])))));
                        var_27 = (max(var_27, var_8));
                        arr_30 [i_9] [i_8] [i_9] |= (~(arr_10 [i_9]));
                    }
                }
            }
        }
        for (int i_10 = 2; i_10 < 20;i_10 += 1) /* same iter space */
        {
            var_28 ^= (((arr_7 [i_4 + 1] [i_4 - 1]) ? (((16 ? var_14 : 1))) : (arr_6 [i_10 - 1] [i_10 - 1] [i_10])));
            arr_34 [i_10] [i_4] [i_10 + 1] = ((-(arr_12 [i_4 - 1])));
            var_29 = (min(var_29, (((((arr_7 [i_4 - 1] [i_10 - 2]) ? 240 : 1))))));
            arr_35 [i_10] = -9223372036854775792;
        }
        var_30 = (max(var_30, (((arr_9 [i_4] [i_4] [i_4] [i_4 + 1]) ? 49214417365688113 : (arr_13 [i_4 + 1] [i_4 + 1])))));
    }
    #pragma endscop
}
