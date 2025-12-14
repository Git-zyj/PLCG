/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_11 = 5816647445597456756;
                var_12 -= (+((max(((((arr_3 [i_0] [i_0] [i_0]) < var_1))), -4))));
                var_13 = min((max(((((arr_3 [i_0] [i_0] [i_1]) ? (arr_2 [i_0]) : (arr_0 [i_0] [1])))), 33)), (((33 > ((60839 << (arr_4 [6] [i_1] [i_1])))))));
            }
        }
    }
    var_14 = var_2;
    #pragma endscop
}
