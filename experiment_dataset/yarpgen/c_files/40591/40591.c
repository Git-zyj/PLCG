/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_14 = var_0;
                var_15 ^= (((arr_1 [i_0] [i_1]) || (arr_3 [i_0] [i_0] [i_0])));
            }
        }
    }
    var_16 -= 4294967295;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 16;i_3 += 1)
        {
            {
                var_17 = (min(((var_8 ? (arr_10 [i_3 - 1] [i_3 + 2] [i_3 + 2]) : (arr_10 [i_3 + 1] [i_3 + 2] [i_3 - 2]))), (((var_4 ? (arr_1 [i_2] [i_3]) : (arr_4 [i_2] [i_2] [i_2]))))));
                var_18 ^= ((((((arr_0 [i_2] [13]) ^ (arr_0 [i_2] [i_2])))) << ((58448 >> (((min(var_9, (arr_10 [i_2] [i_2] [i_2]))) - 1956229618))))));
            }
        }
    }
    var_19 = (max(var_19, ((min((((((-110 ? 7 : 109))) - var_1)), -var_5)))));
    #pragma endscop
}
