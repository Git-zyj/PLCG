/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_18 = ((var_9 << (((arr_0 [i_0 + 3]) - 144))));
        var_19 = var_2;
        arr_2 [i_0] = ((12937835062429148332 ? (arr_1 [i_0 + 1]) : var_11));
        var_20 = ((arr_0 [i_0 - 1]) ? 1431773351 : var_16);
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = var_2;
        arr_8 [i_1] [i_1] = (max(var_2, 41922));
        arr_9 [2] &= ((!((min(-1605360046, 0)))));

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_21 = (min(var_21, var_3));
                            var_22 -= ((var_10 & (((((-97 ? (arr_15 [i_3] [i_2]) : (arr_5 [i_2])))) ? -115 : 6461676091161692608))));
                        }
                    }
                }
            }
            var_23 ^= ((((var_6 ? (0 ^ var_16) : 524287)) ^ ((((31 | var_15) | (~var_17))))));
        }
        for (int i_6 = 1; i_6 < 15;i_6 += 1)
        {
            var_24 += (min(((1 ? 5425060093765226571 : 114)), ((min((arr_18 [2] [2] [i_6] [2] [2]), 8383)))));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 16;i_8 += 1)
                {
                    {
                        var_25 |= ((var_6 && ((min(var_2, var_1)))));
                        var_26 = (max(var_4, ((((arr_15 [i_1] [i_1]) != (3072 % -742854734))))));
                        var_27 = var_2;
                        arr_29 [i_1] [i_1] [i_1 - 1] [i_1] [1] = ((((arr_14 [i_1 - 1]) ? (arr_14 [i_1 + 2]) : 1184742479)));
                    }
                }
            }
        }
        arr_30 [i_1] [i_1 + 2] = (max((arr_17 [i_1] [i_1 - 1] [i_1] [i_1 + 3] [i_1]), ((0 - (arr_23 [i_1 + 3] [i_1 + 1])))));
    }
    var_28 = (min(var_13, ((-var_4 ? (max(var_14, var_5)) : 1))));
    #pragma endscop
}
