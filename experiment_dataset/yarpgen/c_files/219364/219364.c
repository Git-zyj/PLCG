/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= (max(22051, var_12));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_16 &= (((((-(max(1, 10))))) % (((((var_11 ? var_11 : 1))) ? (arr_0 [16]) : (1 + 1)))));
        var_17 *= ((+(min((max((arr_1 [i_0]), (arr_0 [10]))), 120))));
        var_18 = var_0;
        var_19 = (max(var_19, 1));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_20 &= (((arr_3 [i_1]) ? ((1180890602 ? var_13 : 1)) : (-30207 / 1)));
        var_21 = (min(var_21, ((min(((((arr_3 [11]) > (((min((arr_2 [i_1] [i_1]), var_6))))))), (arr_3 [11]))))));

        for (int i_2 = 4; i_2 < 11;i_2 += 1)
        {
            var_22 = (max(var_22, (arr_4 [i_2 - 3] [i_2 + 3])));
            var_23 = (min((((!((max(7116, (arr_0 [i_2]))))))), -var_14));
            var_24 = var_13;
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    {
                        var_25 = var_12;
                        var_26 = (max(var_8, var_11));
                        var_27 = (arr_12 [i_1] [i_3] [i_4] [i_5] [i_4]);
                        var_28 = var_3;
                        var_29 = (max(var_29, ((((!var_8) & (((min((arr_10 [i_3] [i_4 + 3] [i_4 - 1] [i_4]), ((var_10 < (arr_11 [i_5] [i_5] [i_1]))))))))))));
                    }
                }
            }
        }
        var_30 |= ((var_2 / (max(((var_0 ? (arr_3 [1]) : var_13)), (arr_3 [i_1])))));
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        arr_16 [i_6] = ((((((((var_11 ? (arr_15 [i_6]) : (arr_15 [i_6]))) + (((-(arr_14 [i_6])))))) + 9223372036854775807)) << (((max((arr_0 [i_6]), (arr_1 [5]))) - 10607804207398830011))));
        var_31 = var_6;
    }
    var_32 = (min(var_32, var_11));
    #pragma endscop
}
