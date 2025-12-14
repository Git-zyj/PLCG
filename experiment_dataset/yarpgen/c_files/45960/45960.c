/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((var_2 < ((-6806695348276040102 ? var_5 : var_6)))))) >= var_9));
    var_11 = (var_1 & var_4);

    /* vectorizable */
    for (int i_0 = 4; i_0 < 11;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_12 = (9223372036854775807 ? (var_2 ^ var_6) : (((arr_6 [i_0] [i_1] [i_2] [i_2]) - var_2)));
                    var_13 &= ((arr_3 [i_0 - 3] [i_0 - 2] [i_1 + 2]) ? var_0 : (arr_3 [i_0 - 4] [i_0 - 2] [i_1 + 1]));
                }
            }
        }
        arr_7 [i_0 - 3] = (~(((arr_4 [i_0] [i_0]) ? 5208713868158194465 : var_8)));

        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            arr_12 [i_0] [i_3] [i_3 - 1] = ((((var_0 ? var_8 : (arr_8 [i_0 - 4] [1])))) ? ((9223372036854775807 ? 9084965002612310092 : (arr_2 [i_0] [i_3 + 1]))) : ((var_2 ? (arr_4 [i_0 - 2] [i_3]) : var_1)));
            /* LoopNest 3 */
            for (int i_4 = 2; i_4 < 9;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 8;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            var_14 = (9223372036854775807 ^ -9084965002612310115);
                            arr_21 [i_5] = ((arr_18 [i_3 + 1] [i_0 - 1]) ^ (arr_18 [i_3 + 1] [i_0 - 1]));
                            var_15 ^= (-((-5033047756249873602 ? (arr_3 [i_6] [8] [i_4 + 2]) : (arr_4 [i_4] [i_5]))));
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 4; i_7 < 11;i_7 += 1) /* same iter space */
    {
        arr_24 [i_7 - 4] = arr_9 [8] [i_7] [i_7 - 4];
        arr_25 [0] = arr_9 [i_7 - 1] [i_7] [i_7];
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 9;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 9;i_9 += 1)
            {
                {
                    var_16 *= ((((((arr_15 [i_7 - 1] [i_7] [i_7] [i_7]) ? 1158042744034512017 : -47675903538181366))) || (-1 >= 9223372036854775807)));
                    var_17 &= (((var_8 ? -1 : 0)) ^ (((arr_14 [i_8]) + (arr_4 [i_8] [i_9]))));
                    var_18 = (max(var_18, (((-9223372036854775807 - 1) ? (arr_18 [i_7] [i_7 - 3]) : (arr_18 [i_7 - 3] [i_7 - 2])))));
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 13;i_10 += 1)
    {
        arr_33 [i_10] [i_10] = 7360632643730534161;
        var_19 = (!-1);
        arr_34 [i_10] = (((var_6 ? -3590776337903142144 : (min(0, var_3)))) + (((((arr_32 [i_10]) & var_0)) ^ var_8)));
        var_20 = (max(var_20, ((~((((var_2 | (arr_30 [4]))) | ((var_7 ? var_3 : 18))))))));
        var_21 = (((arr_30 [10]) << (((arr_30 [12]) - 92390349208766545))));
    }
    var_22 = (min(var_22, 0));
    #pragma endscop
}
