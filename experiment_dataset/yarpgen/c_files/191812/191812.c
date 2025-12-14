/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = (min(var_16, (((13967325617528467384 ? ((var_4 ? 50804 : 12457876198616300866)) : ((((arr_2 [i_1]) - (arr_2 [i_1])))))))));
                var_17 = (!-3968078878);
                var_18 = (min(var_18, ((((((var_15 * 0) ? ((var_14 ? 19 : var_8)) : (arr_5 [i_1] [4]))) & ((min(var_4, ((21478 >> (var_5 - 7884)))))))))));
            }
        }
    }
    var_19 |= -21509;
    var_20 = (((21478 != var_7) && (((max(var_5, 21495))))));
    var_21 = (!21478);
    #pragma endscop
}
