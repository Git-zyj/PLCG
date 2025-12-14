/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, 15650137112852051196));
    var_17 = (min(var_17, ((min(((1 | (min(18446744073709551615, 255)))), var_2)))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_18 = (arr_0 [i_0 - 2]);
        var_19 *= (1 / 1);
    }
    for (int i_1 = 3; i_1 < 13;i_1 += 1)
    {
        arr_5 [i_1] |= var_5;
        var_20 = (min(var_20, ((min((min(8314426926733187930, 0)), ((1 ? ((((arr_1 [i_1]) ? 64 : (arr_3 [i_1])))) : (min((arr_4 [i_1] [i_1]), var_8)))))))));
        arr_6 [i_1] [i_1] = (((min(var_3, (arr_3 [i_1 + 2]))) - (min(-1340294444, 57))));
    }
    for (int i_2 = 3; i_2 < 10;i_2 += 1)
    {
        var_21 += arr_1 [i_2];
        var_22 *= min((arr_0 [i_2]), (min((((0 >= (arr_0 [i_2 - 3])))), (min((arr_7 [i_2] [i_2 + 2]), (arr_2 [i_2 - 2]))))));
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 9;i_5 += 1)
                {
                    {
                        arr_17 [i_4] = (arr_1 [i_2]);

                        for (int i_6 = 4; i_6 < 11;i_6 += 1)
                        {
                            var_23 *= (arr_15 [i_5] [7] [i_5]);
                            var_24 = (max(var_24, ((min((min((1 + var_1), 18446744073709551615)), 12)))));
                            arr_20 [i_2] [i_6] &= ((arr_2 [i_2]) < ((((min((arr_7 [i_3] [i_4]), (arr_0 [i_5 - 1])))) ? (((arr_7 [i_2] [i_2]) ? var_5 : (arr_14 [i_6] [i_5 + 2] [i_2]))) : (arr_13 [i_2 - 3] [i_3] [i_5] [i_6]))));
                        }
                        for (int i_7 = 3; i_7 < 11;i_7 += 1)
                        {
                            var_25 *= (arr_3 [i_7]);
                            var_26 = (min(var_26, (12111 <= 12)));
                        }
                        var_27 = (min(var_27, 0));
                        arr_24 [i_4] [i_5 + 1] = var_1;
                    }
                }
            }
        }
    }
    for (int i_8 = 1; i_8 < 21;i_8 += 1)
    {
        arr_27 [i_8] |= (arr_25 [i_8] [i_8 - 1]);
        arr_28 [i_8] |= min((arr_26 [i_8]), (min(((min((arr_26 [i_8 - 1]), 1))), (min(var_3, 1)))));

        for (int i_9 = 1; i_9 < 1;i_9 += 1)
        {
            var_28 = (max(var_28, ((min((min(var_13, ((((arr_30 [i_8 + 1] [i_8]) + (arr_25 [i_8] [i_9 - 1])))))), (arr_29 [i_9] [i_8] [i_8]))))));
            var_29 += (arr_32 [i_8]);
        }
        var_30 -= (1 * var_6);
    }
    #pragma endscop
}
