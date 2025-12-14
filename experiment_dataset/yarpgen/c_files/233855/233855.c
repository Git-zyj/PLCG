/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_12));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_15 = ((-var_12 ? (~1) : ((var_4 ? (((max(var_2, 1)))) : ((1 ? 1 : 9223372036854775807))))));
                    var_16 |= max(-6122396615017350001, var_10);
                    var_17 |= ((var_5 ? (var_9 < 17) : (((9071207985567446500 - 9223372036854775790) ? (arr_6 [i_0] [i_1] [i_2]) : 1))));
                    arr_9 [i_2] [i_1] [i_0] |= 1;
                }
            }
        }
    }
    #pragma endscop
}
