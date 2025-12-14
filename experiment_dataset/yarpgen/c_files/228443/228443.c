/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= -7278820259217460965;
    var_20 += (max(((~(var_16 < var_17))), (((!((min(var_12, var_13))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_1] = (((arr_1 [i_0]) == (max((arr_1 [i_1]), 7278820259217460954))));
                var_21 = (var_8 * (arr_3 [i_1]));
            }
        }
    }
    var_22 = var_17;
    var_23 = (((((var_3 ? 7278820259217460965 : 17655)))) ? (((39 ? var_14 : -17656))) : var_6);
    #pragma endscop
}
