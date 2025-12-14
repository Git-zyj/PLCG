/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= (((55417 || -4614973366187405807) || var_13));
    var_15 ^= ((((var_8 % var_13) < (!var_11))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_16 = arr_0 [i_0];
                arr_5 [i_0] = (min((((var_2 ? var_6 : var_4))), (min(((((arr_1 [i_1 + 1] [i_0]) == var_8))), (arr_1 [i_0] [i_0])))));
            }
        }
    }
    var_17 = (min(var_17, var_3));
    #pragma endscop
}
