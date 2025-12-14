/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((8839 ? ((min(8839, -8))) : (-9223372036854775807 - 1)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 = (((((!(arr_7 [i_0] [i_0])))) < (((arr_7 [i_0] [i_1]) ? (arr_7 [i_2] [i_1]) : 8839))));
                    var_18 = (max(-8835, -32753));
                }
            }
        }
    }
    var_19 = (var_0 != 3607715793);
    var_20 = (max(var_9, (((4058016732342931261 > 15411) ? var_10 : 222))));
    var_21 = var_12;
    #pragma endscop
}
