/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 2233966392390682589;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = -2233966392390682589;
                var_16 = ((!(((((min((arr_2 [i_0] [i_1]), var_5))) ? ((4294967295 ? var_4 : -1)) : (~var_7))))));
                arr_7 [i_0] [i_1] = 3;
                var_17 = (((~1) ? (((max(var_8, var_7)))) : (((arr_0 [i_1 - 2]) ? 2554883137 : 10))));
            }
        }
    }
    var_18 = (((((var_0 ? var_4 : (!36028728299487232)))) ? ((~((53877 ? -14 : var_4)))) : (min(var_7, ((var_0 ? var_0 : var_9))))));
    var_19 = (max((((min(21868, 2233966392390682588)))), (min(-var_3, ((var_6 ? var_10 : var_13))))));
    #pragma endscop
}
