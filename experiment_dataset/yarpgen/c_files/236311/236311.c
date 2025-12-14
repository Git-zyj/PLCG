/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= ((-((((var_1 ? 4294967295 : var_2)) | (0 >= var_0)))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {
                    {
                        var_11 *= ((((((((var_0 ? var_1 : 921335419))) ? (arr_4 [i_3 + 1]) : var_1))) || (arr_8 [i_3] [i_3 + 1] [i_3] [i_3 - 1])));
                        arr_12 [i_0] [i_2] [i_2] [i_3] = (((arr_8 [i_3 - 1] [i_3 - 1] [i_2] [i_3]) % var_3));
                        var_12 = (min(((~((min(var_8, var_7))))), ((((max(var_2, var_6))) & 2))));
                    }
                }
            }
        }
        arr_13 [i_0] [i_0] = (((arr_0 [i_0] [3]) ^ (max((arr_0 [i_0] [i_0]), 1810617642))));
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
    {
        arr_18 [i_4] = (((((~(arr_9 [i_4] [i_4])))) ? (((arr_9 [i_4] [i_4]) ? (arr_14 [i_4]) : var_6)) : (0 >= -1211732454)));
        arr_19 [i_4] [i_4] = (min(var_2, (arr_6 [i_4] [i_4] [i_4])));

        /* vectorizable */
        for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
        {
            arr_24 [i_4] [i_5] [i_4] = 2;
            var_13 = ((var_6 ? ((6650168593938430721 ? 1211732453 : 3373631876)) : ((((arr_11 [i_4] [17] [i_4] [i_5] [i_4]) + var_7)))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
        {
            arr_29 [i_4] [i_6] [i_6] = ((~(((arr_9 [i_6] [i_4]) ? var_8 : var_7))));
            var_14 = var_6;
            var_15 = ((!(var_0 > var_1)));
        }
        var_16 = (((arr_25 [i_4] [i_4]) ? (arr_21 [i_4]) : ((~(arr_5 [i_4])))));
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
    {
        var_17 = (((~-1211732454) >= (((!(arr_9 [8] [i_7]))))));
        var_18 = ((-(arr_23 [i_7] [i_7] [i_7])));
        var_19 = ((-((var_6 * (arr_15 [i_7] [18])))));
    }
    var_20 = (max(var_8, (-32767 - 1)));
    #pragma endscop
}
