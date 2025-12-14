/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_18 *= min(8223965776539608382, 1);
                                arr_12 [i_2] [1] [i_1] [i_2] [i_3] [14] = ((18084367850391675709 ? ((((((arr_5 [i_0] [i_2]) & 562941363486720))) ? ((((4225878661 < (arr_11 [i_4] [i_4] [i_4] [i_4]))))) : (((arr_7 [i_0] [i_1] [i_2] [i_4]) ? 1 : 2315577287)))) : (-17 == 16)));
                            }
                        }
                    }
                }
                var_19 = ((((min((arr_3 [i_1 - 4]), (arr_10 [i_1 + 2] [i_1 - 2] [i_1 + 2] [i_1] [i_1])))) ? (arr_7 [i_1 - 4] [i_1 - 2] [i_1 + 1] [i_1 - 2]) : (((arr_7 [i_1 - 2] [i_1] [i_1] [i_1 + 1]) * (arr_10 [i_1 - 1] [i_1 + 1] [i_1 + 2] [i_1] [i_1])))));
            }
        }
    }

    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        var_20 = (min((((arr_14 [i_5] [i_5]) | 11)), (((50847 ? (arr_13 [i_5]) : -26809)))));
        arr_15 [i_5] = ((((((arr_13 [i_5]) / ((-1 ? (arr_13 [i_5]) : -19))))) ? (max((arr_14 [i_5] [i_5]), -1602847950)) : (((((arr_14 [i_5] [i_5]) == (arr_14 [i_5] [1])))))));
        var_21 = ((65535 ? (arr_13 [i_5]) : ((((arr_13 [i_5]) ? 37547 : 5)))));
        /* LoopNest 2 */
        for (int i_6 = 4; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            {
                                arr_29 [i_5] [i_8] [i_7] [i_8] = (min((((arr_22 [i_6 - 4] [i_6 - 3] [i_6]) * (arr_18 [i_9] [i_6 - 3]))), (min((-93 % 10222778297169943224), (((37497 || (arr_18 [i_5] [i_6]))))))));
                                var_22 *= (max(193, ((-((((arr_27 [i_5] [i_5] [i_5] [i_9] [i_5] [i_5]) != 1)))))));
                            }
                        }
                    }
                    arr_30 [i_5] [i_6 - 4] [i_7] = (arr_28 [i_7] [i_7]);
                }
            }
        }
        var_23 &= (arr_20 [i_5] [i_5] [1]);
    }
    /* LoopNest 2 */
    for (int i_10 = 1; i_10 < 13;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 15;i_11 += 1)
        {
            {
                arr_37 [i_11] = ((!(arr_28 [i_10] [i_11])));
                var_24 = (min(var_24, ((((((1 % (arr_5 [i_10 + 1] [1])))) ? 30465 : (119 < 2657008434))))));
            }
        }
    }
    #pragma endscop
}
