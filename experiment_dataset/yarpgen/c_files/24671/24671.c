/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_13 = (((arr_2 [i_1] [i_1] [i_0]) ? ((((((arr_0 [i_0 - 1]) + 2147483647)) << ((((-82 | (arr_0 [i_0]))) - 4294967215))))) : (((arr_2 [i_0 - 1] [i_0 - 1] [i_0]) << (((arr_2 [i_0] [i_0] [i_1]) - 1931))))));
                arr_4 [i_0] [i_1] = ((~(((!((min(12783870476584524030, 1))))))));
            }
        }
    }
    var_14 = var_2;
    var_15 &= ((!(((!var_7) && (var_6 || var_9)))));
    var_16 ^= ((-((((min(var_6, 1))) ? var_9 : var_2))));
    #pragma endscop
}
