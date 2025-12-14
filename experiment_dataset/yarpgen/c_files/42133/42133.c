/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= (max(((min(var_6, var_9))), -27457));

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = ((-(max(6530509388051477809, 1601622334))));
        arr_3 [i_0] = var_8;
        var_16 = ((-((var_9 - (-9223372036854775807 - 1)))));
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        arr_8 [i_1] = (((min(185, var_4))) ? (((arr_1 [i_1 + 1]) / (arr_0 [i_1] [i_1]))) : (((!((min(171, 59271)))))));
        var_17 ^= (((((arr_1 [i_1]) ? -8640901092586492129 : (arr_5 [i_1 + 1]))) > var_1));
        arr_9 [i_1] [i_1] = (arr_7 [i_1]);
        var_18 = (min(var_18, (((var_2 | var_13) ? -var_14 : (arr_6 [i_1] [i_1])))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 10;i_5 += 1)
                        {
                            var_19 = -27467;
                            arr_20 [i_1] [i_1] [i_2] [i_3] [i_4] [i_4] [i_5] = (!var_4);
                            arr_21 [i_1] [i_2] [i_4] [i_3] [i_4] [i_4] [i_5] = ((~(arr_19 [i_4] [i_5] [i_4] [i_1] [i_1] [i_4])));
                            var_20 = ((!(arr_1 [i_1 - 1])));
                        }
                        for (int i_6 = 1; i_6 < 9;i_6 += 1) /* same iter space */
                        {
                            arr_25 [i_4] [i_4] [i_3] [i_2] [i_4] = (min((arr_11 [i_6 + 1] [i_1]), -75));
                            var_21 -= (min((((~var_13) & ((min(var_13, -13943))))), (((!(arr_11 [i_6 + 2] [i_1 - 1]))))));
                            var_22 = (+(max((-9223372036854775807 - 1), -172)));
                            var_23 = arr_24 [i_1] [i_3];
                        }
                        for (int i_7 = 1; i_7 < 9;i_7 += 1) /* same iter space */
                        {
                            var_24 ^= (min(((~((min((arr_0 [i_1] [i_2]), 60))))), (max((max(-116, -555958098)), ((var_8 ? (arr_22 [i_3] [i_3] [i_3]) : (arr_17 [i_1] [i_1] [i_1] [i_1] [i_1])))))));
                            var_25 = 6;
                            arr_29 [i_2] [i_3] [i_4] = (((arr_19 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) << 0));
                        }

                        for (int i_8 = 4; i_8 < 11;i_8 += 1)
                        {
                            var_26 = (max(3445675841, ((~(arr_33 [i_1] [i_1] [i_1] [i_1 - 2] [i_1 + 1])))));
                            var_27 ^= (min((min(1431288251, (arr_10 [i_8 - 1]))), ((var_8 ? (arr_10 [i_8 - 4]) : (arr_10 [i_8 + 1])))));
                        }
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        var_28 += ((min(849291454, var_11)));
        var_29 = (min(((-(-127 - 1))), ((((arr_0 [i_9] [i_9]) > (min((arr_35 [i_9]), -106)))))));
    }
    #pragma endscop
}
