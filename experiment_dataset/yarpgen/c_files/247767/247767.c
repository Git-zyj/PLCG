/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    arr_9 [i_0] [6] [i_0] [6] |= ((!1) ? (-5020056722201780239 == 14482166060013894281) : 14482166060013894281);
                    var_11 *= (((3964578013695657335 ^ 24) << ((((-(arr_3 [i_2 + 1] [i_2] [14]))) + 137))));
                }
            }
        }
    }
    var_12 = ((-(~var_8)));
    #pragma endscop
}
