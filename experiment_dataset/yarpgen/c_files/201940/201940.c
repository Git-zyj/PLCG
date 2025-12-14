/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_13 == var_16);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_20 -= var_2;
                arr_5 [i_0] [i_0] = (max(1, 8));
                arr_6 [i_0] [i_1] = 1;
                var_21 = 4;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 15;i_4 += 1)
            {
                {
                    var_22 ^= ((((((arr_9 [i_4 + 2]) >> (arr_9 [i_4 + 3])))) ? (((((arr_9 [i_4 - 1]) >= (arr_9 [i_4 + 2]))))) : ((103 ? var_8 : 997764189))));
                    arr_16 [i_2] [i_2] [i_2] = ((((4089453116 ? (arr_10 [i_2] [i_4 - 1]) : var_18)) >= var_8));
                }
            }
        }
    }
    var_23 = (((((max(var_4, var_16)))) | var_8));
    #pragma endscop
}
