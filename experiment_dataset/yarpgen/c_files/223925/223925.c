/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = ((((((~(((arr_1 [i_0]) & 1)))) + 2147483647)) << ((((27346 ? (((arr_2 [10]) ? (arr_3 [i_1] [i_0] [i_0]) : (arr_4 [i_0]))) : (arr_1 [i_0]))) - 4294967210))));
                arr_5 [i_0] = (((arr_1 [i_1]) >> (arr_1 [i_0])));
                arr_6 [i_0] [8] [1] = (max((arr_1 [i_1]), (((((var_11 ? var_3 : 110))) ? ((4686804419188000164 ? 45 : var_7)) : (!45639)))));
                arr_7 [i_0] = ((((min((min(var_16, -2835)), 13223))) ? var_12 : (~var_4)));
            }
        }
    }
    var_18 = var_2;
    var_19 = ((max(45, (~8395814511632375821))) < var_8);
    var_20 = ((-(!var_5)));
    #pragma endscop
}
