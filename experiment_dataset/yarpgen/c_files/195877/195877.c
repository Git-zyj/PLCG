/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_10 = (max(((((arr_2 [i_0]) < (arr_5 [i_1] [i_1] [i_0])))), ((((((arr_0 [i_1]) ? (arr_2 [i_0]) : (-9223372036854775807 - 1)))) ? ((((arr_0 [5]) ? (-9223372036854775807 - 1) : (arr_0 [i_1])))) : var_8))));
                var_11 = arr_4 [i_1];
                var_12 = 9223372036854775807;
            }
        }
    }
    var_13 = ((((((var_1 && var_3) ? (((-9223372036854775807 - 1) ? 489127246 : var_5)) : ((-489127246 ? 37 : -27958))))) ? (((-27973 & 2981968446412403042) ? (~var_4) : -489127246)) : (~var_7)));
    var_14 = var_9;
    #pragma endscop
}
