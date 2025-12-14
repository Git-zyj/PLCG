/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_10 = (max(var_10, (((((1352640529 * (arr_2 [i_0]))) * (((min(65535, 4294967290)) / var_7)))))));
                var_11 = (max(var_11, (min((((arr_2 [i_0]) << (((arr_2 [i_1]) - 64953)))), ((min((arr_2 [i_1]), (arr_1 [i_0]))))))));
                arr_6 [i_0] [i_0] [i_0] = ((((((arr_5 [i_0] [i_1]) << (-2030898360 + 2030898384)))) || ((min((min(63, (arr_4 [1] [i_1]))), ((((arr_3 [i_0] [i_0] [i_1]) >> (arr_5 [11] [11])))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                var_12 -= (arr_7 [i_3]);
                var_13 = (arr_7 [i_2]);
            }
        }
    }

    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_14 |= (((~(arr_10 [i_4]))) + (arr_11 [i_4]));

        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            var_15 = ((-((702387310 & ((~(arr_15 [i_4] [i_5] [i_5])))))));
            var_16 &= (max((((0 ? 1 : 1))), 5206933643063858392));
        }
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            arr_18 [i_4] [i_4] &= (((((min(0, (var_7 / var_3))) + 2147483647)) << (1 - 1)));

            /* vectorizable */
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                arr_22 [i_4] [i_4] [i_4] = var_1;
                var_17 = (arr_13 [i_6]);
            }
            var_18 ^= (((-(arr_11 [i_6]))));
        }
        var_19 = var_0;
        arr_23 [20] [20] = (((((arr_11 [i_4]) << (arr_12 [i_4] [i_4]))) | (min(((8176 ? 1 : (arr_14 [i_4]))), ((min((arr_12 [i_4] [i_4]), (arr_20 [i_4] [i_4]))))))));
    }
    var_20 = var_8;
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 20;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            {
                var_21 = (((arr_17 [i_8] [i_8] [i_8]) ^ ((min((arr_24 [i_9]), (min((arr_9 [i_9] [i_8] [i_8]), (arr_11 [i_8]))))))));
                var_22 = (((min(52737, (arr_8 [i_9])))));
                var_23 = (min(var_23, (((-(arr_20 [i_8] [i_9]))))));
                var_24 *= ((((((2097151 ? (arr_16 [i_8] [12]) : 5)) << (var_0 - 4953228526307943853))) >> (min((arr_13 [i_8]), 0))));
                var_25 |= ((-(((min(8, var_3))))));
            }
        }
    }
    #pragma endscop
}
