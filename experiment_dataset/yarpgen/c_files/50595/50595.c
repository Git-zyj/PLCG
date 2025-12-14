/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (((min(((max(var_6, -29423)), (min(var_17, var_0)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_19 = ((var_17 ^ ((((arr_2 [i_0] [i_1 - 1]) ? (arr_2 [i_0] [i_1 - 1]) : (arr_3 [12] [i_1 + 1] [10]))))));
                var_20 = (max(var_20, var_4));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_21 = max(var_10, (arr_9 [i_2 - 1] [i_1] [i_2 - 1] [i_1 - 1] [i_4]));
                                arr_12 [i_4] [i_1] [i_2 - 1] [i_1] [i_0] = var_8;
                            }
                        }
                    }
                }
                var_22 = (min((-32767 - 1), 2251799276814336));
            }
        }
    }

    for (int i_5 = 1; i_5 < 9;i_5 += 1) /* same iter space */
    {
        arr_16 [1] [i_5] |= var_13;

        for (int i_6 = 1; i_6 < 9;i_6 += 1)
        {
            var_23 = 2251799276814346;
            arr_21 [i_5] = max(-8055, 118);
        }
        var_24 = (min(var_2, ((((arr_18 [i_5]) <= (arr_18 [i_5]))))));
    }
    for (int i_7 = 1; i_7 < 9;i_7 += 1) /* same iter space */
    {
        arr_24 [i_7] = ((((var_2 == (arr_4 [i_7 - 1] [i_7])))));
        var_25 |= var_1;
    }
    for (int i_8 = 1; i_8 < 9;i_8 += 1) /* same iter space */
    {
        var_26 |= 8055;
        var_27 = (((-1507566593 + 2147483647) << (var_12 - 1545048)));
        arr_27 [i_8] [i_8] = ((~(((arr_2 [i_8 + 1] [i_8 + 1]) / var_2))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                {
                    var_28 = ((var_7 * ((-(118 * var_13)))));
                    arr_34 [i_8] [i_8] [i_8] [i_8 - 1] = (max(118, (arr_18 [i_10])));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 1; i_11 < 9;i_11 += 1) /* same iter space */
    {
        var_29 = var_10;
        var_30 = (-1931233460 | var_12);
        arr_38 [i_11] = (((arr_0 [i_11 - 1]) || (arr_0 [i_11 - 1])));
    }
    var_31 = (((min(4294967278, ((min(0, var_5))))) ^ var_17));
    #pragma endscop
}
