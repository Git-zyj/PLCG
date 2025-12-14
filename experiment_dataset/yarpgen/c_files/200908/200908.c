/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_13 [6] [8] [6] [i_3] = (arr_9 [i_0] [i_0] [i_0] [i_0]);
                        arr_14 [4] [i_1] [4] [i_3] [5] = min((arr_7 [i_0] [9] [i_2] [i_3]), var_9);
                        var_16 ^= (max(32767, (((6493 + -328184843) & var_7))));
                        var_17 = (((((arr_9 [i_0] [4] [i_0] [2]) || (arr_9 [i_0] [i_0] [i_0] [i_0]))) ? (((arr_9 [i_2] [i_2] [i_2] [i_1]) ? (arr_9 [i_0] [i_1] [4] [i_3]) : var_11)) : (((arr_9 [i_0] [i_1] [3] [i_1]) ? (arr_9 [i_0] [i_1] [6] [8]) : (arr_9 [i_0] [i_1] [i_3] [i_3])))));
                    }
                    var_18 = (min(var_18, (arr_7 [1] [1] [i_2] [8])));
                    arr_15 [i_0] [i_0] [i_2] = 75;
                }
            }
        }
        arr_16 [i_0] = ((min((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))) | (~-999797207));
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    {
                        var_19 = (max(var_19, ((max(((-(arr_26 [i_4] [i_5] [i_6] [i_5]))), (((var_6 != (((4269373594872350027 ? (arr_19 [1]) : 1)))))))))));
                        var_20 = (min(var_20, (((((arr_19 [i_4]) & (arr_19 [i_6])))))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    {
                        var_21 = (max(var_21, ((((((~(arr_22 [i_4] [i_9] [i_10])))) ? (((-var_7 == (98 >= var_10)))) : (((((((arr_25 [i_8] [i_8] [i_4] [12]) ? (arr_28 [0] [12]) : var_8))) || 13389))))))));
                        var_22 = (max((((((54 - (arr_34 [i_4] [i_4])))) ? var_5 : (-604201927089665697 <= -6857662211115229318))), (((min(40149, 0))))));
                        var_23 = (arr_22 [i_4] [i_8] [i_10]);
                        arr_38 [i_4] = ((~(((var_8 <= (max(287439136, 40153)))))));
                    }
                }
            }
        }
    }
    var_24 = (min(var_24, (((var_13 + (((var_1 <= (~var_0)))))))));
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 21;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 21;i_12 += 1)
        {
            {
                var_25 = (min(var_25, ((1 << (((arr_42 [i_11] [i_12]) + 84222025887189244))))));
                var_26 = (min(17394007528269137951, 32767));
            }
        }
    }
    #pragma endscop
}
