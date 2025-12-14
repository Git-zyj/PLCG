/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [1] [i_2] = ((var_4 ? (~6852440881042704160) : (arr_4 [i_0 + 1])));
                    var_13 -= (((arr_6 [i_0 - 1] [i_1]) ? ((max(0, ((4611686018427387903 ? -7040952817054408129 : 9697))))) : (max((max(var_9, var_5)), (arr_6 [i_2] [i_0])))));
                }
            }
        }
    }
    var_14 += var_1;
    #pragma endscop
}
