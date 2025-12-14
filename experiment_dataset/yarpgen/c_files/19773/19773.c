/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] |= (arr_2 [i_0]);
                var_12 = (((((-(arr_4 [i_0])))) ? (18393 & 18393) : 47143));
            }
        }
    }
    #pragma endscop
}
