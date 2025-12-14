/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= min(((((8120 != 12) ^ (!var_2)))), var_1);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_15 = (min(var_15, 1));
                    arr_11 [i_0] [i_1] [i_2] = (min(var_8, ((min((arr_0 [i_1 - 1]), 4095)))));
                    var_16 = var_11;

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            var_17 = (max(var_17, var_6));
                            var_18 = (max(var_18, (((((!(arr_14 [i_2] [i_1] [i_1 - 1] [i_2] [i_1 - 1] [i_1]))) ? 1 : 236)))));
                        }
                        arr_19 [i_3] [i_3] [i_1] [i_1] [15] = ((var_0 ? (min(255, 9936449023346771223)) : ((((arr_7 [i_1 - 1] [i_1] [10]) ? ((var_3 ? var_13 : var_6)) : (var_13 || var_1))))));
                    }
                    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                    {
                        var_19 = (max(var_19, (((1763266993783770130 || (var_0 != var_2))))));
                        var_20 = var_8;
                        arr_23 [i_1] [i_1] [i_1] [i_1 - 1] = (min((min((min(0, var_1)), 1)), (min(1, (min(343487286, var_1))))));

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_21 = 1;
                            var_22 = (((arr_20 [i_1 - 1]) ? 25083 : (arr_0 [i_1 - 1])));
                            var_23 = (arr_24 [1]);
                            var_24 = 1;
                        }
                    }
                    for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            arr_33 [i_8] [i_0] [i_1] [i_1] [i_1] [i_0] [i_0] = var_13;
                            arr_34 [i_0] [15] [i_2] [i_7] [i_8] [i_1] [17] = (508 & 4294967295);
                        }

                        for (int i_9 = 1; i_9 < 17;i_9 += 1)
                        {
                            var_25 = ((var_8 == (min((arr_9 [i_9 - 1] [9] [i_1 - 1] [i_1 - 1]), (arr_9 [i_9 + 1] [i_2] [i_2] [i_1 - 1])))));
                            var_26 = (min((arr_1 [i_9 + 2]), (arr_1 [i_9 + 2])));
                            var_27 = (max(var_27, 127));
                        }
                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            var_28 = (arr_9 [1] [1] [i_2] [1]);
                            var_29 = (-32767 - 1);
                            var_30 += 42475;
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            var_31 -= ((var_0 ? (arr_3 [i_1 - 1]) : ((0 >> (var_9 - 900841679)))));
                            var_32 = (max(var_32, 2130137530196579870));
                        }
                        /* vectorizable */
                        for (int i_12 = 3; i_12 < 16;i_12 += 1)
                        {
                            arr_44 [i_1] [i_1] [11] [2] [i_1] = (~var_11);
                            var_33 = var_10;
                        }
                        arr_45 [i_1] [8] [i_2] [i_2] = ((1 ? 50 : 65535));
                        var_34 = (max(var_34, ((((((arr_5 [i_1] [1]) << (var_12 == var_5))) == (((-16 != 236) % (arr_28 [i_7] [i_1 - 1] [i_1 - 1]))))))));
                        var_35 = (max(var_35, ((min(var_6, var_0)))));
                    }
                }
            }
        }
    }
    var_36 &= ((min(var_13, var_11)));
    #pragma endscop
}
