/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((max(((max(-1, -20))), ((var_12 ? var_8 : var_6))))) * ((var_6 ? 24 : var_7))));
    var_15 = ((!(-2286762112283079050 >= var_4)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = (max(var_16, 1));
                var_17 = (((((arr_1 [7]) > -2286762112283079055)) ? -9223372036854775786 : ((max(-32, 65535)))));
            }
        }
    }
    #pragma endscop
}
