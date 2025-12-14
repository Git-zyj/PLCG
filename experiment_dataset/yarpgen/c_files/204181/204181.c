/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;
    var_16 &= (max(var_5, var_14));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_4 [2] [4] = 1;
                var_17 = 1827380700;
                var_18 = (min(var_18, ((((117 / var_13) && ((((-16123 | -6022477454647125977) % ((((-9223372036854775807 - 1) ? -121 : var_2)))))))))));
            }
        }
    }
    #pragma endscop
}
