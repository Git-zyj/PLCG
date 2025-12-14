/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_12 [i_2] [i_1] [i_0] = 33554431;
                    arr_13 [i_2] = (((arr_5 [2]) + ((var_8 ? 1856074702 : (arr_10 [i_1] [i_2])))));
                    arr_14 [i_2] = (min((min(var_7, 2365335140)), (arr_8 [i_0] [i_2] [i_1])));
                }
            }
        }
    }
    var_12 = 7771237081585045687;
    #pragma endscop
}
