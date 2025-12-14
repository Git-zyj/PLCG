/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_13 = ((!((7410980826790714621 || (arr_0 [i_0])))));
                var_14 -= (arr_1 [i_0] [i_0]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {
                var_15 = (max(-6345428971787517341, (min((arr_6 [i_2]), (arr_5 [i_2])))));
                arr_9 [8] [i_3] [4] &= var_2;
            }
        }
    }
    #pragma endscop
}
