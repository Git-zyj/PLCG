/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_10 = (min(((((~0) & ((var_7 ? 123 : (arr_4 [i_0] [1] [i_0 + 1])))))), 549755289600));
                    var_11 = var_4;
                    var_12 = (min(var_12, (((((max(-var_1, (1 * 1)))) >= (((((min((arr_9 [i_0] [i_1] [i_2] [i_2]), 0)))) ^ (arr_1 [i_0]))))))));
                    var_13 = ((!((min((arr_9 [i_0] [i_0] [i_1] [i_2]), var_5)))));
                }
            }
        }
    }
    var_14 *= var_0;
    #pragma endscop
}
