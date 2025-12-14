/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(1152851135862669312, 65524));
    var_20 = ((-((max(var_1, (max(var_15, 65532)))))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_21 |= (arr_2 [i_0] [11]);
        var_22 -= ((((((var_5 % (arr_1 [i_0])))) ? var_1 : 15838402991824237134)));
        var_23 ^= min(((((arr_1 [i_0]) >= 3212063416227936407))), ((1 ? var_16 : 516966101)));
        var_24 = (arr_1 [i_0]);
    }
    /* LoopNest 2 */
    for (int i_1 = 4; i_1 < 17;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            {
                var_25 &= -516966105;
                var_26 -= (!-516966102);
            }
        }
    }
    var_27 = var_5;
    #pragma endscop
}
