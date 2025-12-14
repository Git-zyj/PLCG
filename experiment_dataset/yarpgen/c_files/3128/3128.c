/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((var_8 == var_9) + (-37 != var_2)))) ? ((((max((-127 - 1), 18294352994105594125))) ? (((var_8 ? var_3 : var_11))) : var_5)) : var_13);

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_15 = (((((((min((arr_1 [i_0]), 18294352994105594125))) ? (arr_1 [i_0]) : (var_11 / -38)))) / var_4));
        var_16 = 0;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_17 = var_8;
        arr_5 [i_1 + 2] [i_1] = ((((((arr_4 [i_1] [i_1]) >= var_4))) == -38));
    }
    for (int i_2 = 2; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_18 = ((+(((((arr_3 [i_2]) ? var_12 : var_11))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    arr_13 [4] [i_3] [i_3] = (((((max(-22, 18294352994105594144) == (-118 == var_12))))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_19 = (arr_11 [i_6] [1] [i_6] [i_6]);
                                var_20 -= (max(((+((1 ? (arr_4 [i_2] [i_5]) : var_7)))), -var_7));
                                var_21 = (((((1 ? 31110 : (arr_3 [i_2])) | -720330648))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_22 *= ((+(((((31110 >> (((arr_21 [i_2] [i_3] [i_4] [i_7]) - 3347458962717329908))))) ? -36 : 152391079603957508))));
                                var_23 = (max((arr_7 [i_4] [i_2 - 2]), ((104 ? 720330647 : ((-183213740 ? 19220 : 143))))));
                                var_24 = (((max(var_4, (((-720330624 + 2147483647) >> (-29 + 37))))) ^ (((~var_10) >> (var_7 - 128)))));
                                var_25 = 18481;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 22;i_10 += 1)
                        {
                            {
                                var_26 = (((((((var_2 ? (arr_12 [i_2]) : -9223372036854775784)) * ((((var_2 < (arr_24 [i_2 + 1])))))))) ? 47035 : 6428939748562768346));
                                var_27 *= ((((((arr_6 [i_2 - 2]) ? (arr_15 [i_2] [i_2 - 2]) : (arr_7 [i_2 - 1] [i_2 + 1])))) ? 97 : 31133));
                            }
                        }
                    }
                    var_28 = var_2;
                }
            }
        }
        var_29 = ((((((min(var_1, (arr_4 [i_2] [i_2])))) && ((((arr_18 [i_2] [8] [i_2 - 2] [8] [i_2]) ? 1 : (arr_9 [i_2] [i_2] [i_2 + 1])))))) ? (((arr_14 [i_2] [i_2 - 1] [i_2]) << (arr_15 [1] [i_2 + 1]))) : (arr_21 [i_2] [i_2] [i_2] [i_2 + 1])));
    }
    var_30 = ((49806 & (((var_11 ? var_0 : ((max(var_3, 1))))))));
    var_31 = var_1;
    var_32 = (min(var_32, var_0));
    #pragma endscop
}
