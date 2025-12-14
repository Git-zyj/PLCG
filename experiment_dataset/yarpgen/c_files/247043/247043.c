/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((max(127, var_4))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (min(var_20, ((((min(2232810378, -31700)) != ((1975611286 ? 2232810378 : -25)))))));
                var_21 = (((var_0 == 0) ? (!var_8) : (((((194 ? 2232810387 : 1))) ? ((max(255, 112))) : ((var_14 ? (arr_2 [i_1] [i_1]) : var_12))))));
                arr_5 [i_0] = ((!((max(var_16, (-31301 == -125))))));
            }
        }
    }
    var_22 = var_6;
    var_23 = (max(((min(33, (min(var_8, 2062156927))))), ((~(min(31583, 7991205086283998712))))));
    #pragma endscop
}
