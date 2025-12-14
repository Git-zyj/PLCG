/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = (9176601277374766835 | (9176601277374766857 + -80693501));
                var_17 = (max(var_17, (((-121 & 254) ? (max((max(144115188075855871, 0)), (((5 ? 0 : 1))))) : 142))));
            }
        }
    }
    var_18 = ((1623397057 >> (4294967292 - 4294967276)));
    var_19 = (43 ? ((((max(1, 1))) | -30633)) : (((var_14 > (-9176601277374766857 + -16)))));
    #pragma endscop
}
