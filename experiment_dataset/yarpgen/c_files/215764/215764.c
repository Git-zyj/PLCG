/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    var_11 = (max(0, 2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_1] = ((var_8 ? ((((!((min(18446744073709551615, var_2))))))) : ((0 ? (min(4, var_5)) : var_3))));
                arr_5 [i_1] = ((var_8 ? (max(((min(var_3, var_3))), ((var_6 ? var_3 : 31)))) : var_5));
            }
        }
    }
    #pragma endscop
}
