/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, (arr_0 [i_1])));
                    arr_8 [i_1] [i_1] [i_2] &= (arr_7 [i_0] [i_2 + 1] [i_0]);
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_4 = 1; i_4 < 8;i_4 += 1)
        {
            var_21 &= (arr_7 [i_4 + 1] [i_4 + 1] [i_4 + 2]);
            var_22 = (((-(arr_2 [i_3] [i_3] [i_3]))));
            var_23 ^= (arr_1 [i_4 + 2]);
        }
        var_24 ^= (arr_10 [i_3] [i_3]);
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
    {
        arr_17 [i_5] = (((-127 - 1) - 1892971110));
        arr_18 [i_5] = (((-(arr_5 [i_5] [i_5] [i_5]))));
    }
    #pragma endscop
}
