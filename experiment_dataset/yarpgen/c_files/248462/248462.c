/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248462
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
                arr_5 [i_1] [i_0] [i_0] = min((min((min(2360965065, 3801274011)), ((var_15 ? (arr_2 [i_0] [i_1]) : 34506688)))), ((((arr_0 [i_1] [i_1]) >= (arr_2 [i_0] [i_0])))));
                arr_6 [i_0] [i_0] &= ((var_10 >= (min(0, 2591201846))));
            }
        }
    }
    var_18 = var_3;
    #pragma endscop
}
