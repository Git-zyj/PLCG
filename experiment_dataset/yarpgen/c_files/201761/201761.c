/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((((((((var_6 ? (arr_3 [i_0]) : (arr_1 [i_0])))) || (arr_2 [13] [i_0] [i_1])))) >> (((min((((arr_1 [i_1]) ? 108 : -108)), (arr_0 [i_1]))) + 110))));
                var_11 = (min(((((arr_1 [i_1]) && var_6))), (((((arr_2 [i_0] [i_1] [i_0]) ? (arr_0 [i_1]) : var_0)) + (arr_4 [i_1])))));
                arr_6 [10] [1] = ((((((max(-108, (arr_3 [i_1])))) ? ((min(var_4, var_2))) : (((arr_1 [i_0]) * (arr_4 [i_1]))))) * (min(-108, 121))));
                var_12 ^= (!(84 - 13386));
            }
        }
    }
    var_13 = (30975 > -var_1);
    #pragma endscop
}
