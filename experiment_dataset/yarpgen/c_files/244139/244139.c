/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;
    var_15 -= (min(var_8, (min(-12252, (min(-12242, 4194303))))));
    var_16 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_17 -= (~-12252);
                    var_18 *= (max((((!((min(var_1, var_8)))))), ((-18446744073709551615 / (var_5 * var_3)))));
                }
            }
        }
    }
    #pragma endscop
}
