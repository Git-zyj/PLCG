/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((var_12 ? ((((1 ? 504403158265495552 : 102)) & (4112731126145494121 != 55391))) : (1 > -4431501404717245004))))));
    var_16 = (~-5192956903316775584);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_17 = (max(var_17, ((min((arr_5 [12] [i_0] [i_1]), ((-3792832019212163741 ? (-9223372036854775807 - 1) : 1)))))));
                arr_7 [i_0] = (min(var_4, (((~255) * ((min(var_13, var_8)))))));
            }
        }
    }
    var_18 = ((~(((((var_12 ? 10145 : var_10))) ? (min(13543709338938345096, 55397)) : var_11))));
    #pragma endscop
}
