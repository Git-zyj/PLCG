/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(13, -1806553854));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_1] [18] [i_2] = 7238740983791781173;
                    arr_8 [i_0] [i_0] |= (min((((var_8 * var_0) * (((max(var_2, 25)))))), -3));
                }
            }
        }
    }
    #pragma endscop
}
