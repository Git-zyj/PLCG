/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_12 = (((((~1) ? ((((arr_9 [i_2]) <= 1))) : var_0)) + (((~1) ? 1 : ((((arr_4 [1] [i_2] [i_2] [i_0]) < 49483)))))));
                            var_13 = ((((min((arr_3 [i_0] [i_0]), var_2))) ? -var_4 : (arr_5 [i_2] [i_3])));
                            var_14 = ((((((arr_5 [i_2] [8]) / var_5))) ? ((var_4 ^ ((18446744073709551615 ? 117 : (arr_7 [i_0] [i_1] [i_2] [i_2]))))) : (~61051)));
                            var_15 = -var_10;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_16 = (((((~6172177033190497119) ^ (~4294967278))) % (((1 ^ (arr_10 [i_0] [i_4 + 1] [i_4]))))));
                            var_17 = (((var_3 ? var_5 : (arr_4 [i_4 - 3] [i_5] [11] [i_4 - 1]))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 11;i_7 += 1)
                    {
                        {
                            var_18 = (max(var_18, ((((!var_4) < ((~(((arr_19 [i_0] [i_1] [i_0]) | (arr_1 [i_0]))))))))));
                            var_19 = (((~2299486973) ? (arr_0 [i_0]) : 4294967295));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 21;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        {
                            var_20 ^= (~99);
                            var_21 = var_1;
                            var_22 += 1;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 23;i_13 += 1)
                    {
                        {
                            var_23 = ((!((max((arr_28 [i_8 + 2] [i_8 + 1] [i_8 - 1] [i_8 - 1]), (arr_28 [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_8 + 1]))))));
                            var_24 = ((~(~1)));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_14 = 3; i_14 < 20;i_14 += 1)
    {
        for (int i_15 = 2; i_15 < 20;i_15 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_16 = 0; i_16 < 23;i_16 += 1)
                {
                    for (int i_17 = 4; i_17 < 22;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 23;i_18 += 1)
                        {
                            {
                                var_25 = (~1068190353);
                                var_26 = (((((~(arr_20 [i_14 + 3])))) < (((arr_46 [i_14 + 3] [i_14]) & (arr_46 [i_14 - 3] [i_14])))));
                                var_27 = (((((-((((arr_38 [i_14] [11]) != (arr_40 [i_15] [i_14]))))))) || (arr_40 [i_17 + 1] [i_14])));
                                var_28 = (((((var_9 ? var_2 : ((var_10 + (arr_44 [i_14 + 3] [i_14 + 3] [i_16] [i_17 - 4])))))) ? (((((arr_51 [4] [i_15 + 3]) + var_8)) + 255)) : (((-((1 ? (arr_46 [14] [i_14]) : var_9)))))));
                                var_29 ^= (((min(9007199254740988, 18446744073709551612)) >= ((min((~var_2), ((((arr_40 [i_18] [i_18]) ^ 18))))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_19 = 0; i_19 < 23;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 23;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 23;i_21 += 1)
                        {
                            {
                                var_30 = 38121;
                                var_31 = (min(var_31, var_8));
                                var_32 = ((((max((arr_35 [i_14] [i_20] [i_15 + 3] [i_20] [i_14]), ((var_0 & (arr_23 [i_14 - 2] [i_19])))))) ? (((((((arr_20 [i_14]) % (arr_34 [i_14] [i_15] [i_19] [i_20] [15])))) && (~var_5)))) : (((((max(var_3, (arr_26 [i_14] [i_15 - 1] [8])))) && var_8)))));
                                var_33 = (min(var_33, ((((((1 + 1736397625) + (((var_5 - (arr_26 [i_14] [i_15] [1]))))))) ? 9 : (arr_59 [i_14 + 1] [i_15 - 1] [i_15 + 3] [18] [i_15 - 2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
