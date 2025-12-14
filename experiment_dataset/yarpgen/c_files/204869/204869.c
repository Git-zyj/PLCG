/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_17 += 954;
                    var_18 ^= 4314592499333298517;
                    arr_9 [i_0] [i_0 + 1] [i_0] = 4336297659167318870;
                    var_19 = 24;
                }
            }
        }
    }
    var_20 = var_11;
    #pragma endscop
}
