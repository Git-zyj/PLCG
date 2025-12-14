/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_17 = (95 ? (-2147483647 - 1) : 1476762894);
                    arr_7 [i_0] = (!15348955321247181408);
                    var_18 |= (min((((arr_0 [i_1 - 1]) & (arr_6 [i_0] [i_0] [i_1 - 1] [i_1 + 2]))), (max((~53376), (!var_0)))));
                }
            }
        }
    }
    var_19 ^= var_2;
    #pragma endscop
}
