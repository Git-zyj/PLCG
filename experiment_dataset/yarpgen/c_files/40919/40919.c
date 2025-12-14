/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= (((max((max(4836731787873789344, 5990)), ((1718209540 ? 111 : 18042257852076612626)))) % (((max(36950, ((max(84, var_2)))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_7 [i_2] [11] [i_2] [i_1] = ((18042257852076612626 ? (max(var_18, var_15)) : ((0 ? 13306 : var_0))));
                    var_20 = 29583;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_21 = var_4;
                        var_22 = (max(var_22, (((404486221632938981 ? 1446969419 : var_11)))));
                    }

                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        arr_14 [i_0 + 1] [i_1] [i_2] [i_4] = 32512;

                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            var_23 = ((29583 ? ((246079254 >> ((((35952 ? 19338 : 242839646)) - 19308)))) : 47525));
                            var_24 = ((-2 ? -246079255 : 18370812478080105212));
                        }
                    }
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {

                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 23;i_7 += 1)
                        {
                            var_25 = (min(var_25, (((-((47525 ? var_14 : var_13)))))));
                            var_26 = ((242839652 ? 18446744073709551615 : 35952));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            var_27 = ((var_8 <= (!12)));
                            var_28 = var_9;
                        }
                        var_29 = var_1;
                        arr_24 [i_2] [i_6] [i_0 + 2] = var_6;
                        var_30 = ((-(+-246079254)));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 0;i_10 += 1)
        {
            for (int i_11 = 4; i_11 < 21;i_11 += 1)
            {
                {
                    arr_33 [i_11] [i_11] [i_10 + 1] [i_9] = 9507209140015312246;
                    arr_34 [i_10] [i_10] = ((-(~9750599068792437867)));

                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        var_31 = var_8;

                        /* vectorizable */
                        for (int i_13 = 2; i_13 < 21;i_13 += 1)
                        {
                            var_32 = -6379023112544477309;
                            var_33 = 29592;
                            var_34 ^= (var_2 == 18042257852076612626);
                        }
                        var_35 = 0;
                        arr_41 [i_9] [i_9] [i_10] [i_11] [i_12] [i_12] = (((((30072 ? (3749 * 13448124384745776182) : ((max(4294967295, 0)))))) ? ((var_11 ? 13448124384745776197 : var_3)) : (!246079266)));
                    }
                }
            }
        }
    }
    var_36 = (max(var_36, (((((((0 >> (16663895724291532182 - 16663895724291532143))) << (((var_1 & var_3) - 2024))))) ? (((((8673901758817056791 ? 109 : 16))) ? (((var_9 >> (32758 - 32736)))) : ((var_4 ? 255 : var_12)))) : (((max(0, 17684210406171074197)) ^ (max(29574, var_12))))))));
    #pragma endscop
}
