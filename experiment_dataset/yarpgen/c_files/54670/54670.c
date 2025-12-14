/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_6;
    var_19 = (((!7) ? (((!(((-21515 ? -8968750569264403899 : var_13)))))) : 29));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_20 = (min(var_20, ((max(164986505361038900, ((min(((min(1, 1023077943))), ((var_16 << (var_17 + 548)))))))))));
                arr_6 [i_0] [i_0] [i_1] = min(((~(arr_1 [9]))), 103);
            }
        }
    }
    var_21 = var_12;
    #pragma endscop
}
