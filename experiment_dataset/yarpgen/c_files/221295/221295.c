/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_19 -= (min(((62638 ? var_8 : 26046)), (((!(((-(arr_1 [i_0])))))))));
                arr_5 [i_1] [i_1] = (-(min(845581081, -var_10)));
                arr_6 [i_0] [i_1] [i_1] = (((~(arr_1 [i_0]))));
            }
        }
    }
    var_20 |= ((max(((min(0, var_16)), (min(26067, 53935056))))));
    #pragma endscop
}
