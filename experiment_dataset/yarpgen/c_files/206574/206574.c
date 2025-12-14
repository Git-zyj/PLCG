/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((65535 ? -73 : 67106816)))) ? (max(var_7, (18446744073709551615 ^ 15))) : (!65535));
    var_21 = (!1063280532);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_22 = (-32767 - 1);
                    var_23 = (min(var_23, ((max((((((max(var_3, 1))) >> (var_3 - 57962)))), (max(18446744073709551602, -2020839823)))))));
                    var_24 = (max(var_24, ((min(-3804977306, ((min(32767, var_16))))))));
                }
            }
        }
    }
    var_25 = (var_18 & var_0);
    var_26 = (((-(18 * 246))));
    #pragma endscop
}
