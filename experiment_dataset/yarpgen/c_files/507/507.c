/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_11 = (min(var_6, (((~(max(0, (arr_0 [i_0]))))))));
                arr_6 [i_0] [i_0] [i_0] = ((-107 ? 107 : -107));
            }
        }
    }
    var_12 = (((((((max(107, 44325699609839820))) ? 0 : (min(3330379101, var_4))))) ? (((var_10 | -1766539864) ? (~2923542399220903299) : 3087570786)) : (((-((var_3 ? var_5 : (-9223372036854775807 - 1))))))));
    #pragma endscop
}
