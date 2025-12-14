/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (((((40 ? -41 : 739758149))) ? 7 : ((((min(var_9, 32))) << (!120)))));

    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        var_11 = (min((((((!(arr_1 [i_0]))) && (((-108 ? -40 : (arr_0 [1]))))))), (((70 ? 18446744073709551599 : -35)))));
        arr_3 [i_0] = ((min(3271501346, (((19 ? var_0 : (arr_2 [i_0 - 3])))))));
        arr_4 [i_0] [i_0 - 1] = (min((min((arr_1 [i_0]), -var_6)), ((min((arr_1 [i_0 - 4]), 2088785602)))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                var_12 = var_3;
                var_13 = (min(var_13, ((((var_5 == 108) ? var_4 : (~-32))))));
                var_14 = (((arr_0 [i_0 - 2]) ? 8 : (arr_1 [i_0 - 4])));
            }
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                var_15 = (-37 & 1);
                arr_14 [i_1] [i_1] [i_1] = ((-(arr_8 [i_1] [i_0 - 3] [i_1])));
                var_16 = (~-32);
                arr_15 [i_1] [i_1] = ((-46 + 2147483647) << ((((-16 ? 1 : -55)) - 1)));
            }
            for (int i_4 = 4; i_4 < 9;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    var_17 = ((1 && (arr_19 [i_1 + 1] [i_1] [i_1])));
                    var_18 = (arr_1 [i_0 - 4]);
                    arr_21 [2] [8] [i_4 - 1] [i_4] |= ((~(!1)));
                }
                var_19 = (arr_17 [i_0] [i_1] [i_1]);

                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    var_20 ^= (2147475456 && ((((arr_7 [i_0] [i_0]) ? 39 : 27))));
                    var_21 = (min(var_21, (((((((arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? (arr_2 [i_0 - 3]) : (arr_20 [i_0])))) ? (!var_7) : (arr_6 [i_0 - 3]))))));

                    for (int i_7 = 1; i_7 < 10;i_7 += 1)
                    {
                        var_22 = ((arr_18 [i_0 - 1]) ? (arr_5 [i_1 + 1] [i_4 - 3] [i_6]) : ((var_7 ? 51 : 12382272014012021237)));
                        arr_26 [i_1] [i_1] = var_6;
                        var_23 = 9223372036854775807;
                        var_24 &= (!1);
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_25 = (((((var_0 ? (arr_10 [i_8] [i_6] [i_1 + 1] [i_0]) : (arr_25 [i_1] [i_6] [i_8])))) >= (arr_20 [i_0 - 4])));
                        var_26 = (!(~var_6));
                    }
                }
            }
            arr_29 [i_0] [i_1] |= (14 != 1);
        }
    }
    var_27 = 1;
    var_28 = var_9;
    #pragma endscop
}
