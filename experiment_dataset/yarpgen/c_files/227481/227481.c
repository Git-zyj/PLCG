/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= (min(6, 6));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (-((max(65529, 6228))));
        var_12 |= (min(4592, (arr_0 [6])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_2] = min((~var_4), (min((!var_7), (arr_0 [i_0]))));
                    var_13 *= ((!((max(var_9, var_7)))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_10 [2] |= (min(((~(arr_0 [10]))), -6220));
        var_14 = min(363790694, ((~(arr_5 [i_3] [i_3] [10] [i_3]))));
        var_15 ^= ((~((max(4591, 252)))));
    }
    var_16 = ((!((!(~1)))));
    var_17 = (min(((max((~var_10), var_7))), var_3));
    #pragma endscop
}
