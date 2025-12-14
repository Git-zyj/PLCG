/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_6 ? ((1894225350 - (var_1 - var_2))) : (((134217727 * 20888) ? 268427264 : (~var_5)))));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_14 = (-127 - 1);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 = (arr_1 [i_0]);
                    var_16 |= ((255 ^ (((((arr_2 [18] [18]) + 16383))))));
                }
            }
        }
        var_17 = var_9;
        var_18 = ((((min(4294967295, var_8))) && ((((255 ? -1763237941034862497 : 31))))));
    }
    for (int i_3 = 1; i_3 < 22;i_3 += 1)
    {
        var_19 = min((((~-5455) ? 981872523 : -5442)), ((~(((arr_10 [i_3]) ? var_8 : 226)))));
        var_20 = ((((((~var_8) | (((min((arr_8 [i_3]), (arr_10 [i_3])))))))) && ((((var_10 + 16383) + 127)))));
        var_21 *= ((-(((((52589 ? 5428 : 225))) ? (var_6 - 240) : var_5))));
    }
    #pragma endscop
}
