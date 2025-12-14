/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_8;
    var_16 |= var_3;
    var_17 = var_0;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_18 = ((240 | (~15)));
        var_19 += (((((-7987488692262118205 ? 0 : 8907285087669589926))) ? (449668999 / -283856269319229123) : (((((-9223372036854775807 - 1) && 922534513))))));
        arr_3 [i_0] = ((13 ^ (((!(-8174842639540433638 + 15))))));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((-7987488692262118205 ? (((-9223372036854775807 - 1) ? 1 : 16280159840854479)) : (~2750367118096452316)))) ? ((1125882726973440 | (-9223372036854775807 - 1))) : ((~(-9223372036854775807 - 1))));
                        var_20 = (((((-7987488692262118217 ? -449669007 : 249))) ? (((((17360 >> (96 - 89)))) ? ((31 << (943017409 - 943017399))) : (~-1792081392))) : ((7987488692262118204 ? 0 : 0))));
                    }
                }
            }
            arr_11 [i_0] = 1;
        }
    }
    var_21 = 124;
    #pragma endscop
}
