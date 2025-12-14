/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((((!(!var_7)))), var_10));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_7 [i_0 + 1] = -1377548050802391765;
                var_14 = ((((max((((arr_3 [i_0]) ? var_12 : var_6)), (arr_1 [i_0 - 2])))) ? ((var_12 ? ((max(0, -2147483633))) : (var_1 - var_5))) : (((((min(-1377548050802391765, (arr_0 [i_0] [1])))) ? (min((arr_4 [i_1]), -1377548050802391765)) : ((((1 && (arr_1 [i_0 + 2]))))))))));
            }
        }
    }
    var_15 = (~32768);
    var_16 = var_0;
    #pragma endscop
}
