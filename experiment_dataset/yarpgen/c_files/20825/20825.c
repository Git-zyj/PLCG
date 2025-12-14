/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_14 = (max(var_14, ((((-14 + 2147483647) << (((arr_4 [i_0]) - 14721)))))));
                var_15 = var_7;
                var_16 = ((~(((arr_3 [i_0] [i_0] [i_0]) ? (((max(31828, (arr_3 [i_0] [i_0] [i_0]))))) : (arr_1 [i_0] [i_0])))));
                var_17 = (max(var_17, ((min(var_13, var_8)))));
                arr_6 [i_0] [i_0] [i_0] = ((((max((var_5 + 65535), ((((-2147483647 - 1) - var_13)))))) ? -var_4 : var_0));
            }
        }
    }
    var_18 &= (((!(~var_4))));
    var_19 = (max(((~(var_8 && var_6))), 65535));
    var_20 = ((-(((((max(var_10, var_10))) != (!var_6))))));
    #pragma endscop
}
