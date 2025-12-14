/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_0] [17] [i_1] = ((((((0 % 5203440521067881588) ? (max(55813, var_12)) : ((max(7, 178)))))) % (min(122, (~var_14)))));
                var_15 = ((~(((var_11 | 55798) ? ((var_5 ? 35176 : 55807)) : -123))));
                var_16 ^= (35157 % -115);
                var_17 = var_12;
            }
        }
    }
    var_18 = var_8;
    var_19 = (min(var_19, 143));
    #pragma endscop
}
