/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_2] [i_2] [i_2] = (((((((28672 ? -95 : 112) + 2147483647)) >> (((171680982 + 1129724742) - 1301405700))))));
                    var_20 = (((var_19 & 28681) ? (18 ^ 28701) : ((min(1, 238)))));
                }
            }
        }
    }
    var_21 = ((max(((min(1, var_14))), ((14 ? var_16 : -121)))) < var_3);
    #pragma endscop
}
