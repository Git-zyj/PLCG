/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!var_3);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = (arr_1 [i_0]);
        var_12 = ((!((((((!(arr_1 [i_0]))))) > (arr_0 [2])))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_9 [i_1] [i_1] [i_2] = (min((min((((arr_7 [2] [i_1] [0]) ? (arr_2 [i_1]) : var_6)), ((((arr_8 [i_1] [i_1]) / (arr_1 [i_1])))))), ((((arr_3 [i_2]) % (arr_7 [i_1] [i_1] [i_2]))))));
            var_13 = (((((((arr_0 [0]) <= var_5)) ? (min((arr_0 [3]), (arr_2 [i_1]))) : (((min((arr_8 [i_1] [i_2]), (arr_1 [i_1])))))))) ? ((min(var_6, ((!(arr_8 [i_1] [14])))))) : 250);
        }
        arr_10 [i_1] [8] |= (-2740498717454533196 || ((((8535117528759975445 ? 1 : 1336528081)))));

        /* vectorizable */
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            var_14 = (!var_0);
            arr_13 [i_1] [2] = (arr_11 [i_3 - 1]);
            arr_14 [0] [i_1] = (((!var_5) == 0));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    {
                        var_15 = (min(((-(arr_22 [i_6] [i_4]))), (arr_22 [i_1] [i_4])));

                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            var_16 = (arr_2 [i_1]);
                            var_17 *= ((~((min((arr_15 [i_1] [1] [i_1]), (arr_12 [i_1] [i_1] [i_5]))))));
                        }
                    }
                }
            }
            arr_25 [i_1] [i_4] = (arr_19 [i_1] [i_1] [i_1]);
        }
        arr_26 [i_1] = (((4294967288 != (var_0 == -1418369136))));
    }
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        var_18 = ((((228 - 27004) && 9223372036854775807)));
        var_19 = (min((arr_20 [14] [i_8]), var_6));
        arr_31 [i_8] = (-((-(0 > 4294967295))));
        var_20 = ((!var_9) <= ((~(min(var_0, var_1)))));
        arr_32 [i_8] [i_8] &= (((arr_1 [i_8]) | ((+(((arr_4 [i_8]) & (arr_21 [9] [i_8] [i_8] [i_8])))))));
    }
    var_21 -= ((var_6 ? (min(1400439705687167636, -7305416349035636266)) : (min(var_4, (var_3 <= var_4)))));
    #pragma endscop
}
