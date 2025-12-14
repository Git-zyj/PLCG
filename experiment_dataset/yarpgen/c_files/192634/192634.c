/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= ((var_4 ^ ((var_13 ? var_14 : -54))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_16 = (((arr_6 [i_1] [7]) ^ (((arr_3 [i_2] [i_1]) ? ((((!(arr_7 [i_1] [i_1]))))) : ((34902897112121344 ? 1987800105 : (arr_5 [i_1] [i_1])))))));
                    var_17 = 34902897112121344;
                    arr_8 [i_0] [i_0] [i_0] = (arr_1 [i_0]);
                }
            }
        }
    }
    var_18 |= 18446744073709551602;
    var_19 -= ((~((65531 ? ((42266 ? var_3 : 1835952643)) : (~var_10)))));
    #pragma endscop
}
