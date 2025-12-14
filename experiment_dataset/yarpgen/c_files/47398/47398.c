/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_17 = arr_0 [i_0 - 1];
        arr_2 [i_0] [i_0 + 1] = arr_1 [i_0 + 1];
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_18 -= (((arr_3 [4]) ? (arr_5 [0]) : (var_10 * 0)));
        arr_6 [i_1] [i_1] = ((var_2 ? (arr_5 [i_1]) : var_11));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_2] = (arr_9 [i_1] [i_2] [i_1]);
                    var_19 += ((var_1 ? (arr_7 [i_1]) : (arr_3 [i_2])));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] = (1 / -8584);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        var_20 = ((-(arr_13 [i_4])));
                        arr_28 [i_5] [i_4] = (((arr_3 [i_4]) ? ((24455 ? -15015 : ((var_8 ? (arr_9 [i_4] [i_5] [i_5]) : var_9)))) : (arr_3 [i_4])));
                        var_21 = ((4294967295 ? 24455 : (arr_8 [i_4] [i_4] [i_4])));
                        var_22 &= ((max((arr_27 [i_4] [i_6] [i_6] [i_7]), (arr_27 [i_4] [i_4] [i_4] [i_4]))));
                    }
                    arr_29 [i_4] [i_6] = (((((min(24455, 9450)))) % (min((arr_8 [i_4] [i_5] [i_6]), (arr_8 [i_4] [i_5] [i_6])))));
                    arr_30 [i_4] [i_4] = (((arr_23 [i_4] [i_4] [10]) + ((1 ? 1 : 511))));
                    var_23 = (max(var_23, (((-(((arr_5 [i_5]) ? (arr_5 [i_5]) : (arr_5 [i_5]))))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            arr_35 [i_9] = 7;
            var_24 = (max(var_24, (((1 ? (arr_31 [i_8] [i_9]) : (arr_34 [i_8] [i_8]))))));
        }
        var_25 = ((~((-507 ? 2734239216 : (arr_32 [i_8])))));
    }
    var_26 = 1;
    #pragma endscop
}
