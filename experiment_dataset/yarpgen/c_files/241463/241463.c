/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_2;
    var_20 -= ((-7361332018630818116 ? 50937 : 1));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] [i_0] [i_0] [i_1] [i_0] [i_1] [i_0] = (((27842 - 14606) >> (((max(var_7, 1446798209)) - 1446798184))));
                                arr_16 [i_0 + 2] [i_0] [i_0] = (((1 && -7112507782052071308) <= -3418509594916955379));
                                arr_17 [i_0] [i_1] [i_2] [i_4] [i_4] [i_4] = ((-3624483878258315729 ? var_15 : (min((18817 - 50949), ((1 * (arr_1 [i_4])))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 8;i_6 += 1)
                        {
                            {
                                arr_23 [i_0] [i_0] [i_5] [i_5] [i_1] [8] = (((~var_15) < 8));
                                arr_24 [0] [0] [2] [0] [i_5] [i_6] |= (max(((-(0 - -3967))), (arr_8 [i_0 + 1] [i_0] [i_0])));
                            }
                        }
                    }
                    var_21 = (((((-1 ? 0 : 2048095779))) || ((max((arr_5 [i_0] [3] [3]), var_2)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 9;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 12;i_8 += 1)
        {
            {
                var_22 = ((!(((4 ? 7112507782052071308 : 18)))));
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 4; i_10 < 10;i_10 += 1)
                    {
                        {
                            arr_35 [i_9] [i_7] [i_9] [i_9] = 2048095779;
                            arr_36 [i_7] [i_8] [i_7] [i_10 + 2] = (~3211999180263918671);
                            var_23 |= arr_27 [i_8] [i_8];
                            var_24 = (arr_29 [i_7]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 11;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 11;i_12 += 1)
                    {
                        {
                            var_25 ^= (((((245 ? 7112507782052071307 : 3418509594916955376))) ? var_3 : (((7112507782052071305 > 1424607103) ? ((5554819880775425468 % (-9223372036854775807 - 1))) : (-3295635512114412517 | 65535)))));
                            var_26 = (max(var_26, (((~(((~var_15) ? (~var_6) : (arr_34 [i_11 - 1] [i_11 - 1] [i_11 + 1] [i_11]))))))));
                            arr_44 [i_7] [i_7] [i_11] [i_12] = var_0;
                        }
                    }
                }
                arr_45 [i_7] = ((((max(3243520028, var_2))) ? (arr_34 [i_7 - 2] [i_8] [i_8] [i_7]) : (((65526 ? 2072512473 : (arr_26 [i_7]))))));
            }
        }
    }
    #pragma endscop
}
