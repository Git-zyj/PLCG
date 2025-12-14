/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_1] [i_0] = (!-1948);
                arr_9 [i_0] [i_0] = (1526745900861295714 ? var_11 : (((((var_12 ? var_1 : var_13)) > ((var_11 ? var_10 : var_13))))));
                arr_10 [i_0] = (((-2147483647 - 1) ? 251 : 2147483641));
            }
        }
    }
    var_14 = (max(((~((495822366 ? 722253152844542005 : 2147483637)))), ((((((var_12 ? var_2 : var_13))) ? ((var_10 ? var_12 : var_6)) : ((0 ? -8 : -2058770692)))))));
    #pragma endscop
}
