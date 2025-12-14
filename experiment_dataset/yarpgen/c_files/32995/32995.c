/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= var_2;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [10] [i_0] = 13589938772075512768;
                arr_7 [i_0] [i_1] [i_1] |= 6667;
                arr_8 [i_0] [i_0] [18] = (arr_4 [i_0]);
                var_11 |= (arr_1 [i_0]);
                arr_9 [i_0] [i_0] [i_1] &= var_1;
            }
        }
    }
    #pragma endscop
}
