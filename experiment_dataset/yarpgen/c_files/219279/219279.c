/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_13 -= -61;
                    var_14 -= (min(((1 ? 127 : 216172782113783808)), ((((arr_8 [i_2 - 1] [i_2 + 2] [i_0 - 1]) ? (((arr_0 [12]) * (arr_7 [1] [1]))) : (arr_0 [i_0 + 2]))))));
                }
            }
        }
    }
    var_15 = -88;
    var_16 = (max(var_6, (min((var_3 && var_6), ((var_12 ? var_10 : var_4))))));
    var_17 -= ((var_2 ? ((~((var_5 ? var_11 : var_11)))) : ((~(-32767 - 1)))));
    var_18 = ((((var_5 > var_9) ? (var_4 ^ var_8) : (~var_1))) >= (((!(!var_6)))));
    #pragma endscop
}
