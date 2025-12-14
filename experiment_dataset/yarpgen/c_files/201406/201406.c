/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_17 = (((~var_3) != (!-705770242)));
                arr_6 [i_0] = (-((((((((((-2147483647 - 1) + 2147483647)) + 2147483647)) >> (1113507797 - 1113507770)))) ? (arr_2 [9] [i_1] [4]) : 0)));
            }
        }
    }
    #pragma endscop
}
