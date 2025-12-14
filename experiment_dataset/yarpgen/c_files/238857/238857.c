/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_14 = (arr_4 [i_1] [i_1]);
                arr_5 [i_1] [i_1] [i_1] = (arr_4 [i_0] [i_1]);
            }
        }
    }
    var_15 *= var_5;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 12;i_3 += 1)
        {
            {
                var_16 = (arr_0 [i_3 - 1]);
                var_17 = (arr_6 [i_2]);
            }
        }
    }
    #pragma endscop
}
