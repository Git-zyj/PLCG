/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    arr_11 [i_2] [i_2] [3] [i_2 - 1] = (1 && 39829);
                    var_19 *= ((!((((-(arr_8 [i_0] [i_1] [i_2])))))));
                    var_20 += ((~(~var_17)));
                }
            }
        }
    }
    var_21 = ((((((var_18 | var_5) ? ((var_5 >> (var_11 - 10955306780454505817))) : ((var_13 << (((var_0 + 113) - 7))))))) ? var_14 : var_6));
    var_22 = var_11;
    #pragma endscop
}
