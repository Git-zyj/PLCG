/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= (-9050626970179082085 != -17217);
    var_13 &= (((((24198 + (52 - 9223372036854775807)))) ? (max(40896, (10067572610816770090 & var_4))) : ((((((var_3 ? 4294967295 : 5))) / ((-17215 ? 43402 : var_7)))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_8 [i_1] |= (((((var_2 ? (632891145 | -1) : 127))) & 9248166078722530862));
            arr_9 [15] [5] [i_1] = (max((((~(~var_2)))), (((((-102 ? -62 : var_7))) ? (-7194893586272168378 ^ var_5) : (706017383146860824 & var_10)))));
            arr_10 [i_1] [i_0] = var_5;
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_14 [i_2] = (((((0 ? (4294967295 + var_4) : var_1))) ? ((var_0 ? 1 : var_8)) : (((((var_11 ? var_4 : -75))) ? (-17215 - 0) : (var_7 && var_1)))));
            var_14 = ((~((6543933942947510700 ? var_7 : (((3809646383 << (-604190749 + 604190751))))))));
            var_15 -= var_1;
            var_16 = (((((-1 ? (var_11 - 6543933942947510675) : ((6543933942947510700 ? 6543933942947510695 : -28360))))) ? (min(((var_3 ? -2084081837 : var_10)), ((-9005017605251613177 ? 1356015964 : var_6)))) : (((-22772 + 74) ? 46 : var_10))));
            arr_15 [i_2] [i_2] [i_0] = 4294967294;
        }
        var_17 = 154;
    }
    #pragma endscop
}
