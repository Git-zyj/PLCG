/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_17 = (min(var_17, ((((25915 / var_7) ? (!1) : (0 == -14753))))));
                var_18 -= ((!(((1 >> (29589 - 29562))))));
                var_19 &= ((-(arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1])));
                var_20 = (~0);
            }
        }
    }
    var_21 |= ((min((var_14 || 18071345994291073004), (max(4844814616099908564, var_1)))));
    var_22 *= ((((((var_4 ? var_7 : 65535)))) && var_5));
    var_23 = (((0 - var_8) % var_16));
    var_24 = ((min(((min(65535, 12))), (max(var_1, var_10)))));
    #pragma endscop
}
