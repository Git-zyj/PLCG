/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += (min(((((min(1696498381761616493, 16750245691947935123))) ? (!var_0) : ((var_16 ? 1696498381761616462 : var_18)))), ((min((max(var_13, var_7)), var_9)))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_20 ^= ((((arr_1 [i_0 - 1] [i_0]) * (arr_1 [i_0 - 1] [i_0 - 1]))));

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            var_21 = arr_3 [i_0] [i_0] [i_1];
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_8 [i_0] [i_1] [i_3] = var_15;
                        var_22 = (((~61871) ? 4282192624 : var_11));
                        var_23 = (max(var_23, (((((var_0 ? (((arr_2 [i_0] [10] [i_2]) | 1696498381761616476)) : (((arr_6 [1] [1] [i_2] [i_3 - 3] [i_3 - 2]) ? 12774671 : 11621173636426873457)))) | ((max(12774647, (((arr_4 [i_2] [i_1 - 1] [i_3 + 1]) ? var_10 : var_15))))))))));
                        arr_9 [i_0] [i_1] [12] [i_0] = (min(((-(arr_7 [i_0] [i_0] [i_2] [i_0 - 1] [i_1 + 3]))), (((arr_7 [i_0] [i_0] [10] [i_0 - 1] [i_1 + 2]) ? (arr_7 [i_0] [i_0] [i_2] [i_0 - 1] [i_1 + 2]) : (arr_7 [i_0] [i_0] [10] [i_0 - 1] [i_1 - 1])))));
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            arr_14 [0] [i_0] = 2053960312;
            var_24 ^= 2028659977468323212;
            var_25 += ((arr_0 [12]) ? 53 : (arr_0 [0]));
        }
        var_26 -= ((((((arr_4 [14] [6] [i_0]) ? (max((-9223372036854775807 - 1), var_7)) : (((var_13 ? (arr_7 [10] [0] [i_0] [8] [1]) : 77)))))) ? ((16750245691947935123 ? (~7785927294704319995) : -9152326647911606954)) : (((1696498381761616461 ? (arr_5 [i_0] [i_0] [i_0]) : (min(var_10, var_5)))))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    {
                        var_27 |= ((~(~61850)));
                        arr_22 [i_0] [i_5] [1] [6] [i_7] [i_6] = 198;
                        arr_23 [i_0 - 1] [i_7] [i_0] [i_0 - 1] [i_0] |= 13;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                {
                    var_28 *= (min((~var_10), (((~(arr_13 [i_0 - 1]))))));
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 16;i_11 += 1)
                        {
                            {
                                arr_34 [i_0] [i_0] [i_0] [i_9] [i_0] [i_11] = (arr_29 [6] [i_10 - 1] [i_9] [3]);
                                var_29 += (((!(!-2147483641))));
                                var_30 -= (((arr_6 [i_10] [i_10] [i_10] [10] [i_10 - 1]) << (min((arr_31 [i_10] [12] [i_10 - 1] [i_10] [i_10 - 1] [i_10 - 1]), var_16))));
                                arr_35 [i_0] [i_8] [i_8] [i_10 - 1] [i_11] [i_8] = (!15516383571314382399);
                                var_31 ^= 4294967295;
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 20;i_12 += 1)
    {
        var_32 = -110;
        arr_38 [i_12] [i_12] = (((arr_37 [i_12]) ? var_17 : -var_8));
        arr_39 [i_12] = (arr_37 [i_12]);
    }
    var_33 += var_2;
    #pragma endscop
}
