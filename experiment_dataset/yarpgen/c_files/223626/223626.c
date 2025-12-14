/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_12 *= (((arr_2 [i_0] [i_0] [i_0]) >> (15121480022347846224 - 15121480022347846199)));
                arr_6 [14] = var_11;
                arr_7 [12] [i_0] = (max((((arr_2 [1] [i_1] [3]) / 24)), (arr_3 [i_0] [i_0] [i_0])));
            }
        }
    }
    var_13 = (((((-8650702690262830377 ? 134217727 : (((max(var_9, 43616))))))) ? ((((var_11 || (((5 ? -134217727 : var_0))))))) : var_1));
    #pragma endscop
}
