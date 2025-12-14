/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = (~11696);
                    arr_8 [i_0] [i_0] &= ((((arr_4 [5] [i_2 - 2] [i_2] [i_2 - 1]) >> (((arr_5 [i_0] [i_2 - 1] [i_2 - 3]) + 198445821)))));
                }
            }
        }
    }
    var_20 = (max(var_20, ((min(((min((~939524096), (11403246394821277503 == var_8)))), ((-10411 ? 16 : 2147483647)))))));
    #pragma endscop
}
