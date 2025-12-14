/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= ((var_2 ? -var_10 : 152));
    var_16 = ((!((max(42828, var_7)))));
    var_17 = (max((~var_0), (((~22691) ? 22707 : ((max(var_2, 4)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_18 = (max((max((arr_6 [i_0] [i_1] [i_2]), (((arr_2 [i_0]) - 22707)))), 9));
                    var_19 |= (arr_0 [i_2] [i_1]);
                }
            }
        }
    }
    #pragma endscop
}
