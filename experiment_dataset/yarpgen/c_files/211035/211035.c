/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = min(((3 ? 6135392607467203968 : -2289)), (((3434283097 ? (-2147483647 - 1) : -57))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_12 = (-2147483647 - 1);
                    var_13 = ((1238121383 ? -2147483637 : 21));
                    var_14 = ((2147483647 ? 56 : 15334));
                    var_15 = min(860684199, (-2147483647 - 1));
                }
            }
        }
    }
    var_16 = max(2147483647, -8981025605150033031);
    #pragma endscop
}
