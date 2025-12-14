/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_13 += (((arr_0 [i_0]) & (arr_0 [i_0])));
        var_14 ^= (27045 | 23797);
        var_15 = ((var_0 <= (((var_11 ? var_10 : var_3)))));
        var_16 = ((~(arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_17 = (var_5 / ((max(((min(65535, -31168))), (((var_8 + 2147483647) >> (var_4 - 18328983516259240901)))))));
        arr_4 [i_1] = ((-(var_7 >= var_1)));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 16;i_4 += 1)
            {
                {
                    var_18 = ((-(arr_3 [i_4 - 3] [i_4])));
                    arr_13 [i_4] [0] [i_2] |= (((arr_1 [i_4 - 1] [i_3 + 1]) - (arr_1 [i_4 + 1] [i_3 - 2])));
                }
            }
        }
        arr_14 [i_2] = (var_8 ? (arr_11 [i_2]) : (arr_11 [i_2]));
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
    {
        var_19 *= (((((arr_2 [i_5]) * var_2))));
        var_20 = (((0 ^ ((((arr_8 [1]) ? (arr_9 [13]) : 4294967280))))));
    }

    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        var_21 ^= ((13990822572269316338 - var_7) ? (((arr_19 [2]) - (arr_19 [12]))) : ((-32168 ? var_1 : (arr_19 [4]))));
        arr_21 [0] [0] &= (max((max((arr_19 [6]), (~var_10))), (0 | 1)));
    }
    #pragma endscop
}
