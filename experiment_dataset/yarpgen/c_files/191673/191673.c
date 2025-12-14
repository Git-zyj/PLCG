/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_12 += ((~(((!0) ? (~1) : var_0))));
                    var_13 += (((((((max(var_0, (arr_3 [8] [i_0])))) ? ((-1 ? var_2 : var_1)) : ((((arr_5 [i_2] [13]) ^ var_8)))))) ? ((((arr_5 [i_1 - 1] [i_1 + 1]) <= ((min(var_5, var_1)))))) : ((var_8 ? var_11 : -15761))));
                }
                var_14 = (((min(var_0, (arr_1 [i_1 + 2] [i_1 + 2])))) ? ((15761 ? (arr_1 [i_1 - 1] [i_0]) : (arr_1 [i_1 + 2] [i_0]))) : (min(42, 0)));
            }
        }
    }
    var_15 = (max(var_15, 1014957742));
    var_16 = ((var_5 ? (var_8 / var_9) : var_9));
    #pragma endscop
}
