/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_11 *= (((0 > 1) && (((1 ? (arr_9 [i_0] [i_1]) : (((1 ? 1 : 1))))))));
                    var_12 = ((-(arr_1 [i_0 + 3])));
                }
            }
        }
    }
    var_13 = (min((min((var_3 && 1), (max(-2446379974246171171, 1)))), var_5));
    var_14 |= (((min(var_2, -2446379974246171161)) * var_9));
    var_15 = (max(var_15, 613083420821351302));
    #pragma endscop
}
