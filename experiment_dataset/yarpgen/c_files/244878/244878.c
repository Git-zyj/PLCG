/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((((max(-32743, -1))) ? (!6) : var_4))) ? var_4 : var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = (max(var_21, (((!((((arr_2 [i_0] [i_1]) / var_5))))))));
                var_22 = ((((arr_2 [i_0] [i_1]) ? -10 : (arr_2 [i_0] [i_1]))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {
                var_23 &= (!1473410369);
                var_24 = (min(var_18, (28 <= 2412585235)));
            }
        }
    }
    var_25 *= (min((((((var_17 ? 4294967295 : var_10))) ? (~var_18) : (~6))), (var_14 ^ var_1)));
    var_26 = var_2;
    #pragma endscop
}
