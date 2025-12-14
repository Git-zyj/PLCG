/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((min((min(var_0, -1558235796492556516)), 340381889860511054)), (((var_5 ? (!5) : var_8)))));
    var_13 = (((((1558235796492556515 ? 1558235796492556515 : 5422238256851821221))) ? var_3 : ((((~0) || var_11)))));
    var_14 = ((~(((max(1558235796492556515, 3560049525)) ^ (var_6 <= var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (arr_5 [i_0] [i_1]);
                arr_7 [i_1] [i_1] = ((!(arr_0 [22])));
                var_15 = 1;
            }
        }
    }
    var_16 = var_6;
    #pragma endscop
}
