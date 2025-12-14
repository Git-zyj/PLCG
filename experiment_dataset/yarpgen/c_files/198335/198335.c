/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 1133109554402982874;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = var_3;
                var_17 = (min((arr_0 [1] [i_1]), var_11));
                var_18 = (((var_1 >= var_15) > (min((((arr_1 [13]) << (var_5 - 10922327743370110035))), (((65533 != (arr_0 [i_0] [7]))))))));
                arr_7 [i_1] [i_1] = (arr_5 [i_1] [1]);
            }
        }
    }
    var_19 = (min(var_19, var_11));
    var_20 += (var_2 < var_7);
    #pragma endscop
}
