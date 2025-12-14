/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_15 ? ((max((var_0 == var_18), (112 + var_13)))) : (~var_11)));
    var_20 ^= (((((121 < var_18) ? -var_15 : var_1)) == var_2));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_21 = (max(var_21, ((min(-1962961079127016034, 219855920)))));
                    var_22 *= (((min(142, -var_5))) ? var_12 : (((var_6 || 30273) ? (arr_8 [i_0 + 2] [i_0 + 2] [i_0 - 2]) : var_11)));
                }
            }
        }
    }
    #pragma endscop
}
