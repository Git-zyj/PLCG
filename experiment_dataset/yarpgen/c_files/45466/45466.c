/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (-6049235349250863362 | 24);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (((((1 || 1) || ((var_2 || (arr_0 [i_0]))))) || (-5090 && var_12)));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_16 = (var_3 == -120);
            arr_6 [1] [i_1] = ((86 ^ ((var_1 % (arr_5 [i_0] [i_0] [11])))));
            var_17 = (2623094776002652301 ^ -5525635180560533496);
        }
        arr_7 [i_0] = (((var_13 || -7550822956824417842) ? (-113 || 19488) : ((1 ? -5352737068357367635 : var_10))));
    }
    var_18 = ((((((-19486 ? -2623094776002652298 : var_14))) ? var_12 : ((var_10 ? 1 : 6735)))) < (((var_10 <= var_7) ? ((var_13 ? -5062 : var_14)) : var_5)));
    #pragma endscop
}
