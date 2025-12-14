/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = (max((max(((0 << (65517 - 65468))), (((!(-32767 - 1)))))), (--0)));
                var_15 = 0;
            }
        }
    }
    var_16 = ((~((0 * (255 << 0)))));
    var_17 = (~-9223372036854775796);
    var_18 = min((min((0 >> 0), (1 << 8))), ((((min(18446744073709551615, (-9223372036854775807 - 1))) >= ((min((-2147483647 - 1), 31)))))));
    var_19 = 0;
    #pragma endscop
}
