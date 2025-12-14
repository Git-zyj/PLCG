/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((var_5 * 6) / (max(255, var_16))))) ? ((~(14462883558639269730 && var_0))) : (~-var_9)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_19 = ((~((-(arr_1 [i_1])))));
                arr_7 [i_0] [i_1] [i_0] = (min(((((arr_2 [i_1 - 2]) | ((1375956128 ? 223 : 255))))), var_11));
                var_20 = (max((~var_1), (!65288)));
                arr_8 [i_1] = ((+(((arr_2 [i_0]) & (arr_4 [i_0 - 2])))));
                var_21 = arr_4 [i_1];
            }
        }
    }
    var_22 = var_8;
    var_23 = var_8;
    var_24 += var_7;
    #pragma endscop
}
