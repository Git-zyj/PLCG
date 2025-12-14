/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 312376092;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    arr_11 [14] [i_1] [i_2] [i_0] = (min((arr_6 [14] [i_2 - 2]), (arr_10 [14] [i_1] [i_0])));
                    arr_12 [i_0] [i_1] [i_2 + 2] = (((((max(1, -21050)))) ^ (min(var_10, ((23786 ? var_2 : 18446744073709551615))))));
                }
            }
        }
    }
    #pragma endscop
}
