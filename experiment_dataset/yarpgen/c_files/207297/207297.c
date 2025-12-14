/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, ((max(var_4, ((44951 ? -126 : 145)))))));

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_11 = ((var_2 == (min(((~(arr_7 [i_0] [i_0] [i_0]))), 20548))));
                        var_12 = (max(var_12, var_4));

                        /* vectorizable */
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            arr_15 [i_0] [i_1] = 0;
                            arr_16 [i_1] [i_1] [i_2] [i_2] |= ((((((arr_0 [i_1]) + (arr_5 [i_1] [i_1] [i_0])))) && (((var_3 ? (arr_10 [i_4] [i_3] [i_2] [i_0]) : 1)))));
                        }

                        for (int i_5 = 1; i_5 < 16;i_5 += 1)
                        {
                            var_13 ^= min(3973576465, (arr_17 [i_0 + 2] [i_3] [i_2] [11] [i_0 + 2]));
                            arr_21 [i_0] [i_0] [i_0] [i_3] [i_5] = -var_7;
                        }
                    }
                }
            }
        }
        var_14 = (max(var_14, ((max(0, ((max((arr_18 [i_0] [i_0] [i_0] [i_0]), (arr_18 [i_0 - 3] [i_0] [i_0 - 3] [i_0])))))))));
        var_15 *= (((((795591361 ? 35 : 40418))) ? ((26773 ? (-9223372036854775807 - 1) : (arr_8 [i_0 + 1]))) : (((-(arr_8 [i_0 + 2]))))));

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_16 = ((((((!var_9) ? 107 : (arr_20 [i_0 + 1] [i_0 + 1])))) ? (((arr_13 [i_0] [i_0] [i_0] [i_6] [i_6] [i_6]) ? (arr_14 [12] [i_6] [12] [i_0 - 2]) : 1)) : -121));
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    {
                        arr_30 [1] [1] [i_7 + 2] [i_0] = 40;
                        arr_31 [i_0] [i_6] [i_7 + 1] [i_7] [i_7 + 1] [i_0] = (((min((min(57264, 255)), (arr_10 [i_0 - 3] [i_0 - 2] [i_0 + 1] [i_0 + 2])))) ? ((((arr_5 [i_7 - 1] [i_0 + 3] [i_0 + 3]) ? var_5 : (arr_4 [i_0] [16] [i_0])))) : (min(((var_8 - (arr_17 [i_0] [i_0] [i_0] [i_0] [7]))), 0)));
                        var_17 = ((((!(((20 ? var_6 : (arr_17 [i_0] [i_6] [i_7] [i_6] [i_8])))))) ? (var_1 % var_4) : ((((-9223372036854775807 - 1) <= (arr_28 [i_0] [i_7] [i_7] [i_8]))))));
                    }
                }
            }
            var_18 = (max(var_18, 8574365671010324475));
        }
        arr_32 [i_0] = (min(((50151 ? (arr_18 [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_0 + 2]) : (arr_18 [i_0 - 1] [i_0] [i_0 - 1] [11]))), (arr_18 [i_0 - 2] [i_0 - 2] [i_0 + 2] [i_0])));
    }
    var_19 = (min(var_19, var_8));
    var_20 |= var_4;
    #pragma endscop
}
