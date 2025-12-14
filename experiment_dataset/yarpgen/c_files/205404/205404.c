/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= ((var_6 * (max((1 <= 1232854026387087741), (min(var_9, var_3))))));
    var_17 &= (((((var_12 || var_8) ? 1 : (max(2147483632, 1))))) || var_9);
    var_18 = (min(var_18, ((((-var_11 ? 1 : var_1))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_19 = (max(var_19, (arr_3 [i_0] [i_1])));
                        var_20 &= (arr_5 [i_1] [i_1 - 1]);
                        var_21 = (((arr_1 [i_0]) && (arr_2 [i_0])));
                    }
                }
            }
        }
        var_22 = ((~((1 * (arr_0 [i_0])))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        arr_14 [i_4] [i_4] = ((1 ? -7418162587731184204 : 0));
        arr_15 [i_4] [i_4] = ((1 || (((var_9 ? var_15 : var_2)))));

        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            var_23 = -62;
            arr_19 [i_4] [i_5] = -6278397487874345985;

            for (int i_6 = 1; i_6 < 13;i_6 += 1)
            {
                arr_22 [i_5] [i_5] [i_5] [i_5] &= ((((((arr_5 [i_5] [i_5]) ^ var_4))) ? -11673 : (((arr_6 [i_4] [i_5] [i_6]) & (arr_20 [i_4] [i_5] [i_6])))));
                var_24 ^= (((~(arr_1 [i_6 + 1]))));
                arr_23 [i_4] [i_5] [i_4] = ((arr_1 [i_6 + 2]) < (arr_1 [i_6 - 1]));
            }
        }
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        var_25 = (((arr_9 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) / (((arr_8 [i_7]) ? (arr_21 [i_7] [i_7] [i_7] [i_7]) : ((max((arr_20 [i_7] [i_7] [i_7]), 1)))))));
        arr_27 [10] |= 1007820736;
        arr_28 [i_7] = (((arr_0 [i_7]) ? (((arr_0 [i_7]) ? (arr_0 [i_7]) : 4294967278)) : (((min((-32767 - 1), (arr_0 [12])))))));
        var_26 = (max(var_26, ((((arr_7 [i_7] [4] [i_7]) ? ((13 ? 32762 : 18446744073709551588)) : ((((arr_1 [i_7]) ? (arr_8 [i_7]) : 1))))))));
    }
    var_27 = (((((((var_7 ? 1 : 13926)) <= (((-136325521 + 2147483647) << (1 - 1)))))) / ((var_9 ? var_3 : var_14))));
    #pragma endscop
}
