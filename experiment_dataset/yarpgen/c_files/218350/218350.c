/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_12 = (((928017509852086058 / 41474) ? (24079 || 2055746171) : ((188452651171912731 ? -56 : 58833))));
                var_13 = (((26568 ? -16074 : 6703)));
                var_14 = (min((max(16067275879106143610, 0)), (~29121)));
                var_15 = ((~(((4251038504679682718 ? 24061 : 56)))));
            }
        }
    }
    var_16 = (((((-32 ? var_2 : (-127 - 1)))) ? (((((max(2055746171, 106225677))) ? 902029677 : ((max(106225677, -7818)))))) : (min((min(1840177171, 18446744073709551615)), (max(5, 9))))));
    #pragma endscop
}
