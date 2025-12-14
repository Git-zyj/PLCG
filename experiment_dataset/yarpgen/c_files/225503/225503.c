/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_18 -= ((max(((max(12, 29042))), (min(186, 2459166516)))));
                            var_19 ^= ((((max((var_4 > 13938027904537999795), 1835800780))) * (!-7691094832043320632)));
                            var_20 *= ((!(arr_8 [i_2] [i_2 + 2] [i_1])));
                            arr_14 [i_2] [i_2] = (min(((((((arr_4 [i_3] [i_0]) ? (arr_4 [i_3] [i_1]) : (arr_4 [i_1] [i_1]))) * var_5))), ((-(arr_11 [i_0] [i_0] [i_0] [i_0])))));
                        }
                    }
                }
                arr_15 [i_1] = (((max(var_7, ((18446744073709551592 ? -465540594 : 32767)))) != (((((arr_5 [6] [6]) / 2))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_21 ^= (((-((-(arr_18 [i_4] [i_5] [i_6]))))));
                    arr_24 [i_6] [i_6] = var_5;
                    arr_25 [6] [10] [6] [6] |= var_3;
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        arr_28 [i_7] = (min(((2 ? (arr_9 [i_7] [i_7] [i_7] [16]) : (arr_9 [2] [18] [i_7] [2]))), var_10));
        var_22 = (min(var_8, (arr_7 [4])));
    }
    for (int i_8 = 1; i_8 < 17;i_8 += 1)
    {
        arr_31 [i_8] [i_8] = -13365;
        var_23 = (((arr_4 [i_8] [i_8]) + (arr_17 [i_8])));
    }
    #pragma endscop
}
