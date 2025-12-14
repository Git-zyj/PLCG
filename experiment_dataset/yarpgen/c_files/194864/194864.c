/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 = ((((2490048776688977586 - var_7) && (((arr_0 [1] [5]) && var_14)))));
        var_17 = (min((((arr_1 [i_0] [i_0]) + (((var_15 && (arr_0 [i_0] [i_0])))))), (1 || var_12)));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_18 = (min(var_18, var_9));
                        var_19 = (max(var_19, 1235911014));
                        arr_9 [i_0] [1] [i_2] [1] &= (arr_2 [i_0] [i_2] [i_2]);
                        var_20 = ((((min((arr_3 [i_0] [i_1] [i_2]), var_9)) ^ (var_7 != -99))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 18;i_5 += 1)
            {
                {
                    arr_15 [i_0] [i_4] [i_0] = arr_6 [i_0] [i_0] [i_5] [i_5];

                    for (int i_6 = 1; i_6 < 20;i_6 += 1)
                    {
                        var_21 = (max(((var_2 & ((((var_12 >= (arr_10 [i_4]))))))), (min((min(-2490048776688977595, (arr_10 [i_0]))), (3532370819 | var_5)))));
                        arr_18 [i_0] [i_4] [1] [i_6] &= 179;
                    }
                    var_22 = var_8;
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        var_23 = (max(var_23, ((min((arr_8 [i_7] [i_7] [i_7]), (1184460264 + 249))))));
        arr_22 [i_7] = (((((var_4 - (arr_2 [i_7] [i_7] [i_7])))) != (((1 & ((((arr_21 [i_7]) > var_15))))))));
        var_24 = var_0;
        var_25 = min(var_14, var_4);
        var_26 = 11975;
    }
    for (int i_8 = 1; i_8 < 13;i_8 += 1) /* same iter space */
    {
        var_27 = 0;
        arr_27 [i_8] = 29410;
        arr_28 [12] &= ((max((arr_24 [i_8] [i_8]), 501092202566495128)));
    }
    for (int i_9 = 1; i_9 < 13;i_9 += 1) /* same iter space */
    {
        var_28 ^= (((1 <= 1) != (var_3 && 27827)));
        arr_31 [i_9] [i_9] = (min(var_3, var_7));
    }
    var_29 &= -6365122877867605526;
    #pragma endscop
}
