/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 43068;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = ((max(43068, ((4637 ? 22468 : 22468)))));
                    arr_8 [i_0] [i_1] [i_1] [i_2] = ((+(((((arr_1 [i_1] [6]) ? (arr_2 [i_2]) : (arr_6 [i_0] [i_1] [i_2])))))));
                }
            }
        }
    }
    #pragma endscop
}
