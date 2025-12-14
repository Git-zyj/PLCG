/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_0] = arr_4 [i_1 + 1] [i_1 + 1] [i_0];
                    var_14 = arr_4 [i_0] [i_1 + 2] [i_2];
                }
            }
        }
    }
    var_15 = (((max(var_1, (1 || -1))) ? ((-8175 ? 1 : var_8)) : ((0 << ((min(1, 1)))))));
    #pragma endscop
}
