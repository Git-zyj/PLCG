/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;
    var_14 = (var_4 ? ((((var_10 ? var_6 : -1)) * (!var_7))) : (min((var_12 * var_4), 31)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_15 = (~27238);
                var_16 = 13242;
                var_17 = var_12;

                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    arr_10 [i_0] [i_0] [i_0] [i_0] = (~21857);
                    var_18 = var_5;
                }
            }
        }
    }
    var_19 = 6162;
    var_20 |= ((!((min(var_5, var_12)))));
    #pragma endscop
}
