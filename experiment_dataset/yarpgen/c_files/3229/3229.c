/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_18;
    var_21 = (((((var_16 ? ((var_17 ? var_15 : 37)) : var_4))) - var_18));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_22 = (~var_12);
        var_23 = (max(((-1926676332 ? -97 : (arr_1 [i_0 - 1]))), var_1));
    }
    for (int i_1 = 4; i_1 < 18;i_1 += 1)
    {
        var_24 = ((min(218, var_17)));
        var_25 = ((+((((var_9 & var_8) != (((max(-5298, (arr_5 [i_1] [i_1 - 3]))))))))));
    }
    for (int i_2 = 3; i_2 < 14;i_2 += 1)
    {
        var_26 = (arr_2 [11] [i_2 - 1]);
        arr_8 [i_2] [i_2] = var_7;
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_27 = ((max(-11739570836373529530, ((max(var_10, var_2))))) != (arr_4 [1] [1]));

        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            arr_15 [i_3] [i_4] [i_3] = (arr_5 [i_3] [i_4]);
            arr_16 [i_3] [i_4] = ((((max(var_11, (arr_13 [i_3])))) ? (min(((min(var_8, var_1))), 60)) : (~var_9)));
            var_28 = 9223372036854775807;
        }
        /* vectorizable */
        for (int i_5 = 2; i_5 < 17;i_5 += 1)
        {
            var_29 = (var_13 ? (arr_18 [i_5 - 1]) : (((arr_14 [i_5] [i_3]) & 1866977503)));
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    {
                        var_30 = (((arr_5 [i_7 - 1] [i_6 + 1]) ? (arr_5 [i_7 - 1] [i_6 + 1]) : (arr_5 [i_7 - 1] [i_6 + 1])));

                        for (int i_8 = 1; i_8 < 17;i_8 += 1)
                        {
                            arr_27 [i_3] [i_7] [i_3] = ((9223372036854775807 ? (arr_17 [i_3] [i_5] [i_6]) : (arr_23 [i_3] [i_3])));
                            var_31 *= var_10;
                            var_32 = ((-5280 == (arr_22 [i_7] [i_7 - 1] [i_8 + 1] [i_6 + 1])));
                        }
                        var_33 = (((arr_14 [i_7 - 1] [i_3]) ? (((6707173237336022073 ? 218 : 5092552787876154671))) : var_18));
                    }
                }
            }
            var_34 *= ((var_7 > (arr_24 [i_5 - 2] [i_5 - 2] [i_3] [i_3] [i_3] [i_3])));
        }
        arr_28 [i_3] = ((((min(var_17, 57236346740324693) << (((((arr_9 [i_3]) ? (arr_5 [i_3] [8]) : (arr_14 [i_3] [i_3]))) - 31617))))));
    }
    #pragma endscop
}
