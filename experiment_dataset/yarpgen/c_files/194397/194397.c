/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        {
                            arr_10 [8] [i_1] [i_2] [i_3] [i_3] |= (arr_1 [i_3]);
                            var_18 &= ((!((min(-69, -1)))));
                            var_19 = (~2475494446);
                            var_20 = (min(var_20, (((-56 ? 6411879049495859267 : 1068949973)))));
                        }
                    }
                }
                var_21 = (max(var_21, 15608813842050610661));
                var_22 = 73029125;
                var_23 = (max(((-15 ? 224 : 191735152)), 1984));
            }
        }
    }
    var_24 = 0;
    #pragma endscop
}
