/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_10 = ((6309031773019483748 ? (((arr_0 [i_2] [i_1]) - var_7)) : 3371937671215213170));
                    arr_10 [i_1] [i_1] = var_1;
                    arr_11 [i_0] [i_0] [i_0] [i_1] = ((((~(arr_0 [i_2] [i_2]))) | (~var_2)));
                    arr_12 [i_1] [i_1] [i_1] [i_1] = ((+((((arr_7 [i_0] [i_0] [i_0] [i_0]) <= var_5)))));
                    var_11 = 61847;
                }
            }
        }
    }
    var_12 = (!var_2);
    var_13 = (max(var_13, var_1));
    #pragma endscop
}
