/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_14 ? var_15 : (((-4718235818474803938 || var_13) ? ((23079 ? -4718235818474803938 : 1)) : (min(4011482558, var_5))))));
    var_17 = var_14;
    var_18 = ((var_9 ? (~var_4) : var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (((((min(var_9, var_8)))) + ((-3435221010187821749 ? var_8 : var_11))));

                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    arr_8 [5] [i_1] [i_0] = (max(((((arr_4 [1] [15] [1]) == (max((arr_1 [i_0]), 1522815090))))), ((-5353742049912557942 ? 1 : 15011523063521729866))));
                    arr_9 [16] = ((-(max((!var_13), (var_6 ^ -55)))));
                }
            }
        }
    }
    #pragma endscop
}
