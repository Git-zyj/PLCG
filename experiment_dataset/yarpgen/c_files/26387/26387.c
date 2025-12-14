/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (6194865287026175056 | -1528508241638804450);
        var_19 = ((((((arr_0 [i_0]) ? 67 : ((((arr_0 [9]) || 56868)))))) / (max(2251799813423104, 1))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [i_1] = (min(49152, 1528508241638804436));
        var_20 *= ((-(arr_3 [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 18;i_3 += 1)
            {
                {
                    var_21 = ((((((arr_4 [i_1] [i_2]) ? (arr_10 [i_1] [i_2] [i_2] [i_3]) : 2013265920)) ^ 0)));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        arr_13 [i_1] [i_2] [i_3 - 1] [i_2] = (arr_8 [i_3 - 1]);
                        var_22 ^= (arr_11 [i_1] [17] [i_1] [i_3 - 2] [i_4]);
                        arr_14 [i_1] [i_2] [i_3] [i_4] [15] = (((arr_11 [i_3] [i_3 - 3] [i_3 - 3] [i_3 - 1] [i_3 - 2]) + 18444492273896128494));
                        arr_15 [i_1] [i_2] [10] [i_4] [18] = (((113 + 0) <= 14296495706903598634));
                        arr_16 [i_2] [i_2] = ((var_15 ? (((arr_10 [i_1] [i_2] [i_2] [i_1]) + 0)) : var_12));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
    {
        arr_20 [i_5] [15] = ((~(arr_18 [i_5])));
        arr_21 [i_5] = (((arr_12 [i_5] [i_5] [i_5]) ? (((arr_11 [i_5] [4] [i_5] [i_5] [i_5]) ? (arr_18 [2]) : (arr_9 [i_5] [i_5]))) : (4150248366805952982 & 1)));
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 19;i_8 += 1)
            {
                {
                    var_23 = (max(31, (((arr_24 [i_8 + 2] [i_8 + 2]) & 2))));
                    arr_28 [i_8] [i_7] [i_8] &= ((var_12 | (arr_25 [i_8] [i_8 + 2] [i_8 - 3])));

                    for (int i_9 = 3; i_9 < 20;i_9 += 1)
                    {
                        var_24 ^= var_4;
                        arr_33 [i_6] [i_8] [i_6] [i_6] = ((~(((!((max(12, (arr_25 [i_6] [i_7] [i_6])))))))));
                    }
                    var_25 = (((((~(arr_24 [i_7 - 1] [i_7 - 1])))) ? (((arr_31 [15] [i_7 - 1] [i_7] [i_7] [i_7] [i_7]) * (((2251799813423097 <= (arr_23 [i_6] [i_7 + 1])))))) : (arr_22 [i_8 - 3])));
                    var_26 += max(1, (min((((arr_31 [i_8] [i_8] [i_7] [14] [2] [i_6]) ^ var_9)), var_2)));
                }
            }
        }
    }
    var_27 = var_0;
    #pragma endscop
}
