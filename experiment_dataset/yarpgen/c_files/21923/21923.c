/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (!66846720);

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_14 = -2;
        var_15 = (-66846716 && 119385155593622348);
        var_16 -= (max(7250432727311934949, 522240));
        arr_2 [i_0] = 127;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_17 = 118;
                    var_18 *= (((-9223372036854775807 - 1) & (((arr_6 [i_2 + 1] [i_2 + 1] [i_2 - 2]) / (max(-7250432727311934950, 1948782238))))));
                    var_19 = ((~(((((127 ? 36971 : 229))) & (-66846716 ^ 6991371047826934180)))));
                    var_20 = (-32752 + ((((-(arr_5 [i_0] [i_0]))) * 2)));
                }
            }
        }
    }
    var_21 -= (((17 + -5104188093260650455) ? (((max(1, -31777)))) : ((-31780 + (var_8 * 1776819668)))));
    #pragma endscop
}
