/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((var_2 ? var_11 : var_5))) ? 15221630589115204653 : var_8);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = min((min(((288230376151711743 ? 12357914026734027567 : 1)), (arr_1 [i_1 - 1] [i_1 + 1]))), (((var_11 | (max(var_1, (arr_2 [i_1] [i_0])))))));
                var_21 = ((((((arr_1 [i_1 + 1] [i_1]) ^ (arr_1 [i_1 + 2] [i_0])))) ? (min(15221630589115204653, (arr_4 [i_0] [i_1]))) : ((min(-8690581837969336041, var_1)))));
                var_22 = (max(var_7, (((var_16 >> (arr_3 [i_0] [i_0] [i_1]))))));
                var_23 = (max(-1931457990, ((var_16 << (((max(var_13, 960)) - 2226457120))))));
            }
        }
    }
    var_24 = (~((min(var_1, var_8))));
    var_25 = ((((15486327995441185139 ^ (~1947295558)))) ? 25518 : var_8);
    var_26 -= (!var_10);
    #pragma endscop
}
