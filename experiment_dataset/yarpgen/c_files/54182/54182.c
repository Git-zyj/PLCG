/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_3 << (var_10 - 7175054376021866671)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_12 = ((2094268210391308163 ? 4111892083176473151 : 793425));
                var_13 = (max(var_13, (((!((max((arr_0 [i_0 + 1]), ((var_2 ? 4111892083176473151 : var_3))))))))));
                var_14 = (min(var_14, (((-((min((arr_0 [i_1 + 4]), (max(254, (arr_0 [0])))))))))));
            }
        }
    }
    var_15 = max((((var_6 * 4111892083176473151) / ((min(-1, var_7))))), var_0);
    #pragma endscop
}
