/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;
    var_15 = (min(var_15, (max(8488181935539803083, var_2))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = 11519632278380458271;
                var_16 = (min(var_16, ((max((arr_2 [i_0] [i_1 - 1]), ((var_2 ? 0 : ((17911187315804047928 ? 1101852134 : -1963275955)))))))));
                var_17 = max(var_5, (min(1926548261, -563340033)));
            }
        }
    }
    var_18 = (min(var_18, 1963275964));
    #pragma endscop
}
