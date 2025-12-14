/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_13 = ((!((min((((~(-2147483647 - 1)))), (min(var_3, var_2)))))));
                    var_14 = (min(2147483647, 32768));
                }
            }
        }
    }
    var_15 *= (max(15, (-2147483647 - 1)));
    #pragma endscop
}
