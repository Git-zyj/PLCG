/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (-2147483647 - 1)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [13] [i_0] = (~0);
                arr_5 [11] [11] [i_0 + 2] = var_0;
                var_17 = ((((+((0 ? (arr_0 [i_0] [0]) : -7061798342521687351)))) >= 162));
                arr_6 [11] [i_1 - 1] = (((((2367858974 ? -1 : 25973))) ? (arr_1 [i_1] [i_0 - 1]) : (-6812007912236143775 ^ 3130731888)));
                arr_7 [i_0 + 1] [i_1 + 1] [i_0 + 1] = ((-(arr_1 [3] [i_1])));
            }
        }
    }

    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 20;i_5 += 1)
                {
                    {
                        arr_17 [i_2] = (((((((min((arr_16 [i_3] [i_3] [18] [i_3] [i_3] [i_3]), (-2147483647 - 1)))) ? (var_0 / var_3) : 1668864277257847495))) | (((min(9691976566530008583, (arr_12 [i_2] [i_2] [i_2] [i_2]))) + (arr_9 [i_3])))));
                        arr_18 [i_5 - 1] = (arr_11 [i_2] [19] [i_4]);
                    }
                }
            }
        }
        arr_19 [i_2] [i_2] = ((-((~(arr_13 [i_2] [i_2] [i_2])))));
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        arr_23 [i_6] = arr_1 [i_6] [i_6];
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 14;i_8 += 1)
            {
                {
                    var_18 = (min(var_18, -64));
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 15;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 15;i_10 += 1)
                        {
                            {
                                var_19 = var_9;
                                var_20 ^= ((~(0 - -793070547)));
                                var_21 = ((var_6 / (arr_32 [i_7])));
                                arr_36 [i_7] [i_7] [i_7] [i_7] [i_7] = 456700330;
                            }
                        }
                    }
                    var_22 = (min((((((24 ? -1 : -2009723892))) ? (((var_9 - (arr_30 [i_6] [i_7] [i_8 - 1] [i_8])))) : ((var_10 ? (arr_3 [5]) : (arr_12 [i_8 + 1] [i_8 + 2] [i_7] [6]))))), (((!(arr_3 [i_8]))))));
                }
            }
        }
        var_23 = ((-5078430000090042818 & (arr_33 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])));
    }
    #pragma endscop
}
