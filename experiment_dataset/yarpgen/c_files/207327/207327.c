/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= ((0 ? -8014359151144898910 : -26220));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_17 = (((-4451439235644953702 + 9223372036854775807) << (-26217 - 39319)));
                    var_18 = (arr_4 [1]);
                }
            }
        }
    }
    var_19 = (((var_13 ? var_11 : ((-26231 ? 12096419967041543967 : 26219)))));
    var_20 = var_3;
    #pragma endscop
}
