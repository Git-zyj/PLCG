/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 1;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_17 = (((var_11 ? 120 : (max(3072, 18446744073709551615)))));
        var_18 = (min(var_18, ((max(((var_14 ? 255 : ((36120 ? var_7 : 18446744073709551587)))), ((max((max(120, (arr_0 [i_0]))), 120))))))));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_19 = (max(((262143 ? -8188692586576389554 : 255)), var_4));
        var_20 ^= (~var_5);
        var_21 = (max(var_21, (max((((0 - (var_8 + -8188692586576389555)))), var_11))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    var_22 = var_13;
                    arr_10 [i_1 + 4] [i_2] [10] = (!0);
                }
            }
        }
    }
    #pragma endscop
}
