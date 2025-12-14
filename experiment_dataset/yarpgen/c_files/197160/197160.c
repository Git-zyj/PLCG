/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_13 ? ((14212610542885405760 ? 14212610542885405764 : (max(48, 4234133530824145856)))) : 25));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] = (max(4234133530824145852, ((4234133530824145852 ? (max((-9223372036854775807 - 1), (-9223372036854775807 - 1))) : 233))));
                var_16 ^= (((((520556175 ? var_8 : var_12))) ? 8 : ((((max(247, 171))) ? ((min(395492596, var_13))) : (max(14212610542885405762, 14212610542885405759))))));
            }
        }
    }
    #pragma endscop
}
