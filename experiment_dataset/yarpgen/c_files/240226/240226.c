/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_20 ^= ((((min(4294967282, -8))) != (arr_3 [12] [1])));

                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            var_21 ^= arr_0 [i_2 - 2];
                            var_22 *= var_10;
                        }
                        for (int i_5 = 3; i_5 < 11;i_5 += 1)
                        {
                            arr_16 [i_0] [i_0] [i_2] [i_2] [i_3 - 2] [i_5] = ((min((1 / -5), ((max(var_3, (arr_11 [i_3] [12])))))));
                            var_23 = (max(-5, (((arr_9 [i_0] [i_5] [i_2] [i_5] [4] [i_2]) * 25))));
                            var_24 = (!1);
                        }
                        var_25 = ((var_12 - ((var_14 ? (((arr_2 [i_0] [i_1] [i_2]) ? var_18 : 1)) : -9505))));
                        arr_17 [i_3 - 1] [i_2] [i_2] [i_2] [i_0] = (arr_12 [i_0] [i_1] [i_1] [0] [i_3 - 1]);
                        arr_18 [i_0] [i_2] [i_2] [i_3] = (arr_5 [i_0]);
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        var_26 = ((var_0 ? (((34184 ? var_17 : (arr_1 [i_0])))) : 2481234134));
                        var_27 = ((1 ? 4519048226479465541 : 21));
                    }
                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        arr_25 [i_0] [i_1] [i_1] [i_2] [11] = 9223372036854775788;
                        var_28 = ((-37 ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : (var_8 >= var_14)));
                        arr_26 [i_2] = (((arr_24 [i_7] [i_7 - 1] [i_7 - 1]) ? (arr_24 [i_7] [i_7 - 1] [i_7 - 1]) : 1));
                        var_29 = 1;
                    }
                    for (int i_8 = 2; i_8 < 9;i_8 += 1)
                    {
                        var_30 = ((var_10 >> (!49286)));

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_31 -= ((((!(arr_19 [i_0] [i_1] [i_2] [i_2]))) ? (var_18 | var_6) : (~var_9)));
                            arr_31 [i_0] [i_2] [i_0] = ((~(arr_14 [i_2 - 2] [i_2 - 2])));
                            arr_32 [i_0] [i_2] [i_0] [1] [1] = (arr_19 [12] [i_8] [10] [2]);
                            var_32 = ((1 * ((0 ? var_0 : 48863))));
                            var_33 = ((!(arr_1 [i_8])));
                        }
                    }
                }
            }
        }
    }
    var_34 = 1675627725;
    #pragma endscop
}
