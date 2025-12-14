/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_12 = (1 & 1);
                var_13 = ((~(((arr_6 [i_1 - 2]) ? (~-6608816191958003557) : (arr_2 [i_0])))));
                arr_7 [i_0] = (((min(3406184432, ((max(var_11, (arr_3 [12]))))))) <= (min(1, -6608816191958003557)));
                var_14 = (max(var_14, ((max(76, 1)))));
            }
        }
    }
    var_15 = ((+(((var_4 & -3019) ? (min(var_5, 6608816191958003563)) : var_5))));
    var_16 = -48;
    var_17 = (max((~-var_3), (max(var_7, (min(var_5, var_4))))));
    #pragma endscop
}
