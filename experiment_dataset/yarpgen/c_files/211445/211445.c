/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_14 = ((-((((arr_3 [i_0] [i_0] [i_1]) > (arr_3 [i_1] [i_1] [i_0]))))));
                var_15 = var_4;
                arr_5 [i_1] = (((arr_1 [i_1] [i_0]) ? (((-var_10 && (arr_4 [i_0] [i_1])))) : (((7 || var_9) & 248))));
            }
        }
    }
    var_16 = 21;
    var_17 += ((1757870514 ? var_13 : ((((147 ? (-9223372036854775807 - 1) : 219))))));
    var_18 = -var_10;
    #pragma endscop
}
