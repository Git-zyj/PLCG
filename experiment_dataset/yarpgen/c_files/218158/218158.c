/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_14 = (max((min(1, 237)), ((13279739952114782766 ? 18446744073709551615 : (!1)))));
                    var_15 |= (((((((-571056946 ? 1 : 1))) ? ((1 >> (-71 + 72))) : -571056946))) - ((max(1441191609009351131, 70))));
                }
            }
        }
    }
    var_16 = ((-(max((-9223372036854775807 - 1), (((144 ? -85 : 117)))))));
    var_17 = ((((-571056946 > 1) ? ((9134332562983120294 ? 571056945 : 179)) : ((1 << (9223372036854775807 - 9223372036854775791))))));
    #pragma endscop
}
