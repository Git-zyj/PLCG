/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((max(var_2, var_12)) < var_3)) ? ((((7680 <= var_12) ? ((-7415480072708234847 ? var_7 : -7680)) : ((max(-57, var_1)))))) : (~var_2));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = var_5;
        var_15 = 287948901175001088;
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 21;i_3 += 1)
                {
                    {
                        var_16 = (min(var_16, 12288));
                        var_17 = (max(var_17, (((0 ? (min(9223372036854775807, 18446744073709551615)) : (-7681 ^ -7680))))));
                        var_18 = (min(((((((var_7 ? -7415480072708234847 : -67))) ? -6030126648803568167 : (~1)))), (arr_7 [i_3 - 2] [i_3 - 2] [i_3 - 1] [i_3 + 1])));
                        var_19 = 7680;
                    }
                }
            }
        }
        var_20 = -29947;
    }
    var_21 = 233584266;
    var_22 |= (((-114 && -196) ? ((var_13 ? var_5 : ((var_7 ? 1 : var_6)))) : ((((((21541 ? 0 : -107))) >= (max((-9223372036854775807 - 1), var_10)))))));
    #pragma endscop
}
