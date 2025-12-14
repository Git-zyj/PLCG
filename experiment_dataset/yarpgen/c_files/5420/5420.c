/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_11 ^= (max(var_6, (((var_10 < (989253610 - var_4))))));

                            /* vectorizable */
                            for (int i_4 = 1; i_4 < 16;i_4 += 1)
                            {
                                var_12 -= var_9;
                                var_13 = ((((2096640 ? 0 : var_6)) / var_9));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4 - 1] [0] = (((0 ? 1 : var_0)));
                            }
                            for (int i_5 = 3; i_5 < 16;i_5 += 1)
                            {
                                arr_18 [i_0] [i_0] [i_0] [11] [i_0] = var_6;
                                var_14 = (max((((1142889950 <= (min(var_7, var_1))))), var_0));
                            }
                            for (int i_6 = 0; i_6 < 17;i_6 += 1)
                            {
                                var_15 = ((~(min(18446744073709551615, 96))));
                                var_16 ^= (((var_7 > 18446744073709551597) ? (var_0 | var_8) : ((var_0 ? var_6 : var_0))));
                                arr_21 [i_0] [i_1] [i_0] [i_3] [i_6] [3] [i_2] |= ((((var_9 <= ((min(var_4, var_0)))))) >> (var_0 + 40));
                                var_17 = (((((~((18446744073709551597 ? var_0 : var_9))))) ? (!18446744073709551615) : 12253));
                                var_18 = (max(((max(-var_2, (!var_4)))), ((var_1 ? var_10 : 25722))));
                            }
                        }
                    }
                }
                var_19 &= (((((var_7 % ((var_5 ? var_9 : var_2))))) || (((((var_0 ? 1 : var_5))) || var_7))));
            }
        }
    }

    for (int i_7 = 4; i_7 < 17;i_7 += 1)
    {
        var_20 = ((~(var_0 ^ var_6)));
        arr_24 [i_7] [11] = max(((70368710623232 ? 1536 : (var_1 / var_5))), var_3);
    }
    /* vectorizable */
    for (int i_8 = 4; i_8 < 13;i_8 += 1) /* same iter space */
    {
        var_21 = var_3;
        var_22 = (min(var_22, var_4));
        var_23 &= ((var_7 ? ((var_8 ? 19 : 108)) : var_5));
    }
    for (int i_9 = 4; i_9 < 13;i_9 += 1) /* same iter space */
    {
        var_24 = (min(var_24, (((-(+-9223372036854775788))))));
        var_25 ^= ((((max((!18446744073709551615), (!var_10)))) ^ (min(-36, var_8))));
    }
    for (int i_10 = 4; i_10 < 15;i_10 += 1)
    {
        var_26 = ((((((min(107, -6118532100921062520))) ? var_6 : ((max(83, 1))))) & var_2));
        var_27 = ((min(var_3, ((var_0 ? 0 : var_8)))) & var_7);
        arr_33 [i_10] [i_10 - 3] = (((var_10 == -120) > ((var_3 ? var_2 : var_8))));
    }
    #pragma endscop
}
