/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -239;
    var_19 |= (~var_7);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] [16] [i_1] |= ((min(var_7, ((32767 ? var_14 : 4139712410)))) | (((((max(-1751608334, 155254885))) ? 216 : (!1751608333)))));
                var_20 |= (((((~(-32767 - 1)))) + (-9195181367380962068 + 100)));
                var_21 = ((-155254885 >= (((((arr_0 [i_0]) > (arr_0 [i_1]))) ? (125 >> var_7) : (~4294967290)))));
            }
        }
    }
    var_22 = -16024;
    #pragma endscop
}
