/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((var_10 ? ((61854 ? 553398253 : -2177750153616061540)) : -3740026912)) & var_5));
    var_14 = ((var_8 ? (((((553398253 >> (var_5 - 1572743123)))) ? ((var_1 ? var_10 : var_12)) : var_3)) : var_10));
    var_15 &= var_7;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 = 554940383;
                    var_17 = 2813880088;
                }
            }
        }
    }
    var_18 = (max(var_18, 140301264));
    #pragma endscop
}
