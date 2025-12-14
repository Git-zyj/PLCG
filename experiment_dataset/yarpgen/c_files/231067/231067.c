/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_14 ^= (-1 ? 0 : 1382087181);
                            var_15 = ((((((var_2 ? var_9 : (arr_5 [i_3] [i_2] [i_0]))) - ((max(0, 1)))))) || (arr_7 [i_1]));
                            var_16 = -241;
                            var_17 = (min(var_17, (arr_4 [i_3])));
                        }
                    }
                }

                for (int i_4 = 3; i_4 < 22;i_4 += 1)
                {
                    var_18 &= var_13;
                    var_19 = ((!((((var_8 + 9223372036854775807) << (arr_8 [i_4 - 3] [i_4 - 1] [i_0]))))));
                    arr_15 [i_0] = (((max((arr_8 [i_4 - 3] [i_4 + 3] [i_0]), (arr_14 [i_4 + 2] [i_4] [i_4 + 3] [i_4 + 1]))) << ((((arr_0 [i_4 + 3]) || (arr_14 [i_4 + 2] [i_4 - 2] [i_4 - 2] [i_4 - 3]))))));
                    var_20 -= var_9;
                }
                for (int i_5 = 1; i_5 < 24;i_5 += 1)
                {
                    var_21 = ((~((273 << (8 || -378)))));
                    var_22 &= (~var_8);
                    var_23 = (((~(!1))));
                }

                /* vectorizable */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            {
                                var_24 = (min(var_24, (((126 ? (arr_16 [i_0] [i_1] [i_6] [i_8]) : (arr_9 [i_8] [i_1] [i_6] [i_1] [i_0]))))));
                                var_25 -= (arr_7 [i_7]);
                            }
                        }
                    }
                    arr_25 [i_0] [i_0] [8] [i_0] = (!123);
                }
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    var_26 = (((((var_4 << ((((var_0 ? (arr_11 [i_0] [i_1] [i_9] [i_9]) : (arr_20 [i_0] [i_0] [10]))) - 36))))) || (((-(((!(arr_3 [i_0])))))))));
                    var_27 = ((((((arr_4 [i_0]) ? (arr_4 [i_0]) : 127))) || 2098640621451806495));
                    var_28 += ((-((((arr_13 [4] [5] [i_1] [2]) || (((3 ? (arr_20 [i_0] [i_1] [i_0]) : (arr_13 [i_0] [15] [i_9] [i_9])))))))));
                    arr_28 [11] [i_1] [i_0] = var_9;
                }
            }
        }
    }

    for (int i_10 = 1; i_10 < 13;i_10 += 1)
    {
        var_29 = ((-(arr_22 [i_10])));
        var_30 = ((min(((-(arr_21 [i_10] [i_10] [i_10]))), (((!(arr_4 [1])))))));
        var_31 += (((((arr_24 [18]) || (arr_24 [14]))) || (((arr_24 [16]) || (-127 - 1)))));
        arr_32 [i_10] [i_10] = -383;
    }
    var_32 = ((var_4 ? -var_7 : var_13));
    #pragma endscop
}
