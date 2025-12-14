/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_20 ^= (3072 == var_0);
                var_21 *= (arr_3 [i_1]);
                var_22 = (max(var_22, (arr_3 [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        {
                            var_23 ^= ((((((35258 ? (arr_6 [i_1] [2] [i_3]) : 1))) ? (min((arr_5 [i_0] [1]), -18033)) : var_5)));
                            var_24 -= ((((var_7 ? (arr_4 [i_3 + 2] [i_2] [i_1] [i_0]) : ((var_15 ? 8436 : var_13)))) >> (((arr_9 [i_3] [i_3] [4] [i_3 - 1]) - 217))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 13;i_5 += 1)
        {
            {
                arr_16 [i_5] = (!101);
                var_25 = var_11;
                arr_17 [i_5] [3] [i_4 + 1] = ((1 ? -13 : 5428112796524975272));
            }
        }
    }
    var_26 = (!-8969459766979219036);
    var_27 = var_6;
    var_28 = var_0;
    #pragma endscop
}
