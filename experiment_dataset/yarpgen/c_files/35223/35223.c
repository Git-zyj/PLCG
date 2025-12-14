/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_11 [i_0] = (((arr_7 [20] [i_1 + 3] [i_0]) >= var_0));
                    arr_12 [i_0] [i_1] [i_1] = (arr_3 [i_1 - 2]);
                }
            }
        }
    }
    var_12 = (max(var_4, (((1189369196 && 3752053885) ^ var_4))));
    #pragma endscop
}
