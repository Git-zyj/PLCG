/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (~-4489);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = 23988;
                arr_5 [i_1] = ((((((((~(arr_1 [i_0] [i_1])))) > 4358994282310518166))) == ((((arr_3 [i_1] [i_1]) && (arr_1 [i_0] [i_1]))))));
            }
        }
    }
    #pragma endscop
}
