/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += var_8;
    var_15 = (max(var_15, (((-((-var_9 + ((var_13 ? 2625525097502217665 : var_10)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_16 += (((max(14577584132224293972, ((1931877600 ? 14577584132224293973 : var_9)))) / 1));
                var_17 -= 14577584132224293972;
                arr_4 [7] [7] &= ((~(((~-1477) ^ ((var_13 ? 0 : 67108862))))));
            }
        }
    }
    var_18 = (max(var_18, (((+(((!var_0) >> ((((((var_2 ? (-2147483647 - 1) : var_7)) - -2147483631)) + 17)))))))));
    var_19 = (min(var_19, ((((~(var_0 || 1))) & 1496))));
    #pragma endscop
}
