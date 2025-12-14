/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_1] [i_0] = (((((max(var_18, 32767)))) | (arr_3 [i_1 + 1])));
                    var_20 = (~var_4);
                }
            }
        }
    }
    #pragma endscop
}
