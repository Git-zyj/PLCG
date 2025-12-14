/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_9 >= (((min(3499637000, var_1)) % var_3)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_15 = (max(var_15, (((((max(15783, 9687))) ? (((-(var_1 + var_2)))) : (795330303 % 9696))))));
                var_16 = (min(var_16, (((!(var_11 >= var_12))))));
            }
        }
    }
    var_17 |= ((((!(!var_5))) ? var_8 : var_4));
    #pragma endscop
}
