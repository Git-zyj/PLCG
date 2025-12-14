/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((!(((((var_5 ? var_17 : var_1)) >> (var_7 + 9657))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 ^= 11649481769788404919;
                    var_20 = ((-var_7 ? var_1 : -var_3));
                }
            }
        }
    }
    #pragma endscop
}
