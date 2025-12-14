/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((-var_1 ? (min(14705434189322518363, 36028797018963968)) : ((3741309884387033252 ? var_7 : 1826007661800636250)))) < (min(-var_6, var_12))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_0] [i_0] = arr_5 [i_1] [6] [i_2] [i_1];
                    arr_8 [i_0] = arr_6 [i_0];
                }
            }
        }
    }
    #pragma endscop
}
