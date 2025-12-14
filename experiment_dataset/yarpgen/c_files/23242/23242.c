/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {
                    var_11 = (min(var_11, ((max((((((var_3 ? (arr_7 [i_0] [i_1] [i_1] [i_0]) : (arr_6 [i_0] [i_0])))) ? var_7 : (-9223372036854775807 - 1))), ((((arr_5 [i_2 - 1] [i_2 + 4]) ? (arr_5 [i_2 - 3] [i_2 - 4]) : (arr_5 [i_2 + 1] [i_2 - 1])))))))));
                    var_12 ^= 1;
                    arr_9 [i_2] [i_0] [14] [6] = (((~var_3) ? (arr_0 [i_2 - 4]) : (((arr_2 [i_2 + 2]) ? 1 : (1 || 1)))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        arr_14 [i_3] [i_3] = (arr_2 [i_3]);
        var_13 = (arr_3 [13]);
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    {
                        arr_23 [i_3] [i_3] [i_4] [i_4] [i_5] [i_6] = (min((arr_19 [i_3]), (((var_4 % ((var_10 ? 1 : 1)))))));
                        var_14 += (110 >= 268435455);
                    }
                }
            }
        }
    }
    var_15 = (min(1, -1));
    #pragma endscop
}
