/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_2;

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_17 = 40;
        arr_2 [i_0] [i_0 + 2] = 12295193945628276227;
        arr_3 [i_0] = (min(192, (min(18, 2116249932))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    {
                        var_18 = (((min(765835763, 34)) * (65518 >> 1)));
                        var_19 = (max(var_19, 1));

                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            arr_13 [i_0] [i_4 + 2] [i_2 - 1] [i_3] [i_3 + 1] = -4183819581975193946;
                            var_20 &= ((!(43473 * 0)));
                        }
                    }
                }
            }
        }
        var_21 = 9223372036854775807;
    }
    for (int i_5 = 2; i_5 < 21;i_5 += 1)
    {
        var_22 = (36353 == 75);
        var_23 ^= (-9223372036854775807 - 1);
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 22;i_7 += 1)
            {
                {
                    var_24 ^= ((~((max(65520, 0)))));
                    var_25 &= -1101585522;
                    var_26 = ((!(~1788004923)));
                    var_27 = (min(var_27, (((((((-9223372036854775807 - 1) + 9223372036854775807)) + 9223372036854775807)) >> (!15)))));
                    var_28 = 43465;
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_29 = ((127 == ((max(0, (max(-12603, 128)))))));
        arr_23 [i_8] = (-2147483647 - 1);
        var_30 ^= max(-69, (min(84, 6)));
    }
    /* LoopNest 3 */
    for (int i_9 = 2; i_9 < 23;i_9 += 1)
    {
        for (int i_10 = 2; i_10 < 22;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 21;i_11 += 1)
            {
                {
                    arr_32 [i_11 + 3] [i_10 + 1] [i_9 - 1] = (((max(-3553693207435168628, 1073741824)) << (((max(536870911, -84)) - 18446744073709551532))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            {
                                var_31 = -32623;
                                var_32 = (((~11) < (min(32767, -9223372036854775783))));
                            }
                        }
                    }
                    var_33 = (min((max(16229124654349131577, 14)), ((min(-4, 30220)))));
                }
            }
        }
    }
    #pragma endscop
}
