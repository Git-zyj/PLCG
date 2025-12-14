/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((((224 ? 1678081584962176397 : 1678081584962176390))) ? 10092123410097846994 : var_4)) * 18446744073709551606));
    var_20 = var_3;
    var_21 = (0 ? 18731 : -5575);

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_22 = ((((((-127 - 1) ? var_8 : 18731))) / (arr_0 [i_0] [1])));
        var_23 = ((16768662488747375239 != 5076082831979426252) % 1678081584962176382);
        var_24 = (((16768662488747375239 ? 5076082831979426281 : (-32767 - 1))));
        var_25 = (arr_2 [1]);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_26 = 5076082831979426281;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    var_27 = (~1678081584962176397);
                    var_28 = (max((min(16768662488747375239, 16768662488747375219)), (max(((31 ? 18446744073709551607 : (arr_11 [i_2] [i_3]))), (!9223372036854775807)))));
                }
            }
        }
    }
    #pragma endscop
}
