/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= ((-var_8 >> (var_2 + 445588939)));
    var_11 = 62941;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_12 = var_2;
        arr_2 [2] = ((~((-(arr_0 [6])))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2 - 2] [i_2 + 4] = (~49171);
                    arr_8 [i_0] [1] [21] = ((-((((arr_6 [18] [i_0]) > (arr_1 [i_2 + 3]))))));
                    var_13 = (arr_0 [i_1 + 3]);
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
    {
        var_14 = (min(var_14, 16));
        arr_12 [10] = (((-1964754438 - 16) ? (((arr_10 [i_3]) ? (arr_10 [i_3]) : (arr_10 [i_3]))) : ((max((arr_10 [i_3]), (arr_10 [i_3]))))));
    }
    #pragma endscop
}
