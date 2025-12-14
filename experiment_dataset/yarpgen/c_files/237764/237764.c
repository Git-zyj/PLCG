/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;
    var_16 = (((((~((39030 ? var_10 : var_7))))) || var_12));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_17 = (arr_2 [i_0]);
        var_18 = ((((((arr_3 [20]) ? 2926 : (arr_2 [1])))) ? (arr_3 [22]) : 3898021441));
        var_19 = 3898021441;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 20;i_4 += 1)
                {
                    {
                        var_20 = ((((arr_9 [i_1] [1] [i_1] [i_1]) ? (arr_0 [9]) : (arr_6 [18]))));
                        var_21 += (arr_8 [23] [i_2] [11] [i_2]);
                        var_22 *= ((-(arr_11 [i_1])));
                    }
                }
            }
            arr_13 [i_1] [1] = (arr_1 [9]);
        }
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            arr_18 [1] [i_5] = ((~(arr_16 [i_1])));

            for (int i_6 = 1; i_6 < 23;i_6 += 1) /* same iter space */
            {
                var_23 = arr_21 [17] [i_1] [i_1];
                var_24 = (~61052);
            }
            for (int i_7 = 1; i_7 < 23;i_7 += 1) /* same iter space */
            {
                var_25 = -1;
                var_26 = -5735;
                var_27 &= ((((!(arr_23 [i_1] [i_1]))) ? (arr_23 [i_1] [i_5]) : ((-5725 ? 1 : (arr_16 [19])))));
            }
            var_28 = ((+((26872 ? (arr_14 [0]) : (arr_21 [i_5] [14] [16])))));
        }
        var_29 ^= ((((39017 ? (arr_16 [9]) : (arr_20 [21] [21] [21] [i_1]))) % (arr_22 [6] [11] [21])));
    }
    for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
    {
        var_30 = 57;
        var_31 = (min(var_31, (((!(arr_26 [i_8] [i_8]))))));
        var_32 -= (((max((((arr_15 [19] [i_8] [i_8]) ? (arr_19 [i_8] [i_8] [11] [i_8]) : 1)), var_11))) ? (~7135) : ((((((~(arr_2 [1])))) && (~3186908688)))));
        var_33 = (max(var_14, (max((max(var_3, var_3)), ((~(arr_24 [i_8] [i_8] [4])))))));
    }
    #pragma endscop
}
