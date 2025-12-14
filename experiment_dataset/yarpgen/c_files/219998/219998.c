/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = (((-103 % -101) ? ((((min((arr_4 [12] [16] [16]), -103))) ? -103 : 4)) : ((max((arr_3 [i_1]), (arr_3 [i_1]))))));
                var_17 ^= (103 / -97);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {
                var_18 = (arr_3 [20]);
                var_19 = (max(var_19, var_6));
            }
        }
    }
    var_20 -= var_0;
    #pragma endscop
}
