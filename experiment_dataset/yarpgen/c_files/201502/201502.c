/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= (max(((max(var_7, (var_17 - -47)))), (max(var_2, var_11))));
    var_19 = (max(2047, (((var_1 ? ((4294967295 ? -67 : 149067402)) : 149067404)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_20 += (((max(412316860416, var_6))) ? ((3465636942 + (arr_8 [i_2] [i_1]))) : (4294967276 + 7));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_21 = (~65535);
                        arr_12 [5] [i_0] = (((arr_4 [i_3]) - var_14));

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            arr_15 [i_0] [8] [i_2] [5] [i_4] = var_13;
                            var_22 = ((~(arr_13 [i_0] [i_0] [i_2] [1])));
                            arr_16 [i_0] [5] [i_0] [i_0] [i_0] [i_0] [i_0] = (-171747738 - 65535);
                        }
                    }
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_23 = ((var_10 ? var_8 : (var_8 ^ var_1)));
                            var_24 = -4294967295;
                            var_25 -= var_1;
                        }
                        for (int i_7 = 2; i_7 < 10;i_7 += 1) /* same iter space */
                        {
                            arr_24 [i_0] [4] = (((max(-117, (arr_17 [i_7 - 2] [i_7 + 1] [i_7 - 2]))) >> (65535 >= -24)));
                            var_26 = 15331663230135036023;
                            arr_25 [i_0] [i_5] [0] [i_0] = 384;
                            var_27 = (((arr_20 [i_7 - 1] [3] [i_7] [i_7] [i_7] [i_7 - 1] [i_2]) >> (((max(0, 3115080843574515580)) - 3115080843574515563))));
                        }
                        for (int i_8 = 2; i_8 < 10;i_8 += 1) /* same iter space */
                        {
                            var_28 = (max((min(((-1477248545 ? var_3 : (arr_10 [i_0] [i_1] [i_2] [i_5]))), -479484722)), ((var_8 ? 46 : (arr_13 [9] [i_1] [i_1] [i_8 + 1])))));
                            var_29 = -388;
                            arr_30 [i_2] [i_5] [i_2] [i_1] [i_2] |= (((((-(arr_10 [i_0] [i_1] [7] [i_0])))) ? ((min(-1, ((var_11 - (arr_10 [3] [3] [i_2] [i_2])))))) : var_6));
                        }
                        var_30 = ((((max(13635512423376095620, 1502105283))) ? (arr_18 [i_1] [i_0] [i_5]) : -1));
                        arr_31 [i_5] [i_0] [i_2] [i_5] = (((((max(-1, 3124)))) ^ ((-(arr_23 [i_0] [i_0] [i_2] [i_2] [i_5])))));
                    }
                    var_31 = ((15 ? (((0 ? 1 : (arr_11 [i_0] [i_1] [i_2])))) : (min(var_8, (arr_13 [i_0] [i_0] [i_0] [i_0])))));
                    var_32 = (max((((max(var_8, 4095)) % (arr_13 [i_0] [i_0] [i_0] [i_2]))), (((-1 ? 31 : 2273962949)))));
                }
            }
        }
    }
    var_33 -= ((var_9 >> (var_15 + 92)));
    #pragma endscop
}
