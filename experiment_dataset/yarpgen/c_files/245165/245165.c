/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_20 = (min(var_20, ((min(((~((~(arr_3 [i_1]))))), (arr_1 [i_0] [i_0]))))));

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    arr_6 [i_0] [i_1] [i_0] = ((~((max(4294967295, -4)))));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_21 = (((arr_0 [i_0]) ? 14336 : (~36093)));

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            var_22 = 1;
                            arr_13 [i_0] [i_1 + 2] [i_2] [i_3] [i_1] = ((min(-2322, var_15)));
                        }
                        for (int i_5 = 2; i_5 < 18;i_5 += 1)
                        {
                            arr_17 [i_0] [8] [i_1] [8] [i_5] = (arr_15 [i_0] [i_1 + 3] [i_1 + 3] [15] [i_3] [i_1 + 3]);
                            var_23 ^= ((((((127 <= -78) ? (-55 <= 68) : -50))) ? ((-50 ? (((var_1 ? -27 : 29056))) : (((arr_8 [i_1] [i_1]) ? (arr_8 [i_0] [i_5 - 2]) : (arr_11 [i_0] [i_0] [i_0] [i_3] [i_5 + 2]))))) : (((arr_12 [i_0] [i_0]) ? 21421 : var_4))));
                            var_24 = (((arr_1 [i_1 - 1] [i_1 + 3]) ? 0 : (((arr_1 [i_1 - 1] [i_1 + 3]) ? (arr_1 [i_1 - 1] [i_1 + 3]) : 2183235136))));
                        }
                    }
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        var_25 += ((8589934591 ? (arr_2 [i_6] [i_6]) : ((max(((31080 ? 22 : -8)), ((((arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? 0 : (arr_8 [i_0] [i_0])))))))));
                        var_26 = (max(var_26, (((((var_11 ? -8 : (min(var_14, -2325)))) == (((((arr_9 [i_0] [i_0] [i_1 + 2]) == (arr_1 [i_1 + 3] [i_1 + 3]))))))))));
                        var_27 = ((5 ? (arr_19 [i_0] [i_1 + 1] [i_1 + 1] [i_1 + 1]) : (max(65535, ((var_19 ? 16244243088278791574 : var_19))))));
                        arr_20 [i_0] [i_1] [i_1] [i_6] = (((((128 ? (min(127, (-9223372036854775807 - 1))) : (arr_12 [i_1 - 1] [i_1 + 3])))) ? (((~127) ? (!1656492815683215) : (max((arr_10 [18] [i_2]), (arr_9 [i_1] [i_1] [i_6]))))) : 15));
                    }
                    for (int i_7 = 4; i_7 < 21;i_7 += 1)
                    {
                        var_28 = 127;
                        var_29 = (max(var_29, (((((((min(-13019, var_7))) == (~-90))) ? (min(-2653942612348071319, 18)) : (((~(-2147483647 - 1)))))))));
                    }
                    var_30 = ((((max(var_5, -23752))) ? (arr_16 [i_1 + 3] [i_1 + 2]) : (((arr_16 [i_1 + 3] [i_1 + 2]) ? -13019 : (arr_16 [i_1 + 3] [i_1 + 2])))));
                    var_31 = (min(var_31, ((((((13041 ? (arr_8 [i_1 + 3] [i_1]) : 4294967295))) ? (arr_8 [i_1 - 1] [i_2]) : ((~(arr_8 [i_1 - 1] [i_1 + 3]))))))));
                    var_32 = (arr_11 [i_0] [i_1] [i_0] [i_1] [i_2]);
                }
            }
        }
    }
    var_33 = (max(var_33, ((max(var_0, var_9)))));
    var_34 = (min(var_34, (((-(~var_5))))));
    var_35 = (((((min(var_17, var_6)))) ? var_7 : var_18));
    var_36 = (((-((127 ? var_10 : var_12)))));
    #pragma endscop
}
