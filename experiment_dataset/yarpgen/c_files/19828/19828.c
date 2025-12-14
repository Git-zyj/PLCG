/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_13 -= (((min(var_0, (((arr_2 [i_1] [i_1]) ^ (arr_6 [i_0] [i_0] [i_1]))))) / var_6));
                var_14 += ((-7436860382546699973 > (max(5124365570235222796, 7436860382546699972))));
            }
        }
    }
    var_15 = (max((-5124365570235222813 / 2192852769), (((max(-7436860382546699969, 0)) ^ var_8))));
    #pragma endscop
}
