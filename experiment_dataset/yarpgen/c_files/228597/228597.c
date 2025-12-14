/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_12 -= (arr_5 [i_1] [i_1] [5]);
                    arr_10 [i_1] = (((max((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1]))) ^ (116 > 1)));
                }
            }
        }
    }
    var_13 = (var_0 < (~1));
    #pragma endscop
}
