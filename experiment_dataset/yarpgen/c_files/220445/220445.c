/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, ((min((min((1099511627775 - -30077), -18446742974197923840)), (((~var_15) ? var_15 : ((var_4 ? var_1 : var_3)))))))));
    var_18 += (var_7 * -var_7);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_19 = ((-30065 ? 60755 : 452620598));
                arr_7 [i_1] [i_0] [i_0] = ((((arr_6 [23]) - (8512177024488373261 - var_1))) + var_1);
                var_20 = (min(var_20, 26116));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_21 = ((~(arr_3 [3] [i_2])));
        var_22 *= -var_7;
        var_23 += (((((61900 >> (208 - 198)))) ? -var_8 : (~4780)));
    }
    #pragma endscop
}
