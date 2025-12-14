/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= var_8;
    var_12 = var_10;

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0 + 2] [i_0] = (min(((var_2 ? (2302105534 / -92) : var_3)), (((arr_2 [i_0 + 1] [i_0 + 2]) ? (arr_2 [i_0 + 2] [i_0 + 2]) : var_0))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_13 &= -8132157374138698568;
                        var_14 = (min(var_14, (var_3 & var_0)));

                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            var_15 = (-var_5 * var_0);
                            var_16 = ((((((~6497041719534946150) ? ((6497041719534946141 >> (2264608778 - 2264608745))) : var_5))) ? (min(6497041719534946141, (arr_9 [i_0 - 2] [i_1 - 1]))) : (((-(((arr_8 [i_0] [i_0] [i_2] [i_3]) ? var_5 : var_6)))))));
                        }
                    }
                }
            }
        }
        arr_14 [i_0] [i_0] = (min(var_9, (arr_9 [i_0 - 2] [i_0])));
        var_17 = var_8;
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_18 = (((arr_18 [i_5]) ? -3524206977 : (((arr_18 [i_5]) - 6497041719534946130))));
        arr_19 [i_5] = ((((arr_9 [i_5] [i_5]) ? (((arr_15 [5]) ? 1 : 62)) : 1)));
        var_19 = ((((arr_3 [i_5]) ? -6497041719534946163 : 4196030194)));

        /* vectorizable */
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 3; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 13;i_8 += 1)
                {
                    {
                        var_20 = ((var_0 ? (var_0 + var_3) : (arr_18 [i_8 - 1])));
                        var_21 *= -1488;
                        var_22 += (!1);
                    }
                }
            }
            var_23 = (max(var_23, ((((((1 / (arr_2 [i_5] [i_5])))) ? ((var_0 ? 1482 : var_0)) : -29032)))));
            var_24 = (min(var_24, (((var_9 ? 1499 : ((var_10 ? 10599237937406478101 : -1471)))))));
            arr_28 [i_5] = ((1 ? var_9 : (arr_10 [i_5] [i_5] [i_6] [i_6])));
            arr_29 [i_5] [i_6] [i_5] |= (((arr_10 [i_6] [i_5] [i_5] [20]) | var_0));
        }
        arr_30 [i_5] [i_5] = var_2;
    }
    #pragma endscop
}
