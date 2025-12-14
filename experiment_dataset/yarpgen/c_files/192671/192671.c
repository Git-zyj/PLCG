/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, var_8));
    var_16 += ((((3246349620099346930 ? ((max(16256, -97))) : -32761)) % var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_17 = (((~57) ? ((-101 ? var_8 : 3246349620099346929)) : 2147483647));
                    arr_7 [i_0] [i_0] [i_0] = (1 > 2147483647);
                    var_18 += -16257;
                }
            }
        }
    }
    var_19 = ((-2147483647 ? ((var_6 ? var_11 : ((3063030524778346246 ? 55598 : 12229649804904460409)))) : var_12));
    #pragma endscop
}
