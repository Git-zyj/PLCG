/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_13;
    var_17 ^= (max(((-2709813482231517772 ? (((min(-58, 43)))) : ((var_3 ? 3968944434483030105 : 1)))), -58));
    var_18 = (((max((max(var_12, var_9)), (1 == 1761258788))) ? var_1 : 2533708504));

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_19 &= 13406781200149337125;
        arr_2 [i_0 - 3] |= max((((arr_1 [i_0]) + (max((arr_1 [i_0]), var_13)))), ((((arr_0 [i_0] [i_0]) || ((min((arr_1 [i_0]), 1)))))));
        var_20 = var_14;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 17;i_3 += 1)
            {
                {
                    var_21 = (max(var_21, ((max(((~(!var_9))), ((max((arr_3 [i_1]), (!2533708507)))))))));
                    arr_9 [i_1] = ((((1 / (max(1, 0))))) ? ((((min(1, 2047))) ? -500208075 : -500208075)) : (~304387198));
                }
            }
        }
        arr_10 [7] = var_10;
        var_22 = (arr_4 [i_1]);

        for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
        {
            arr_13 [i_1] [i_1] [i_1] = (((((var_9 == ((-3611298716450545058 ? var_15 : var_4))))) * (((arr_8 [i_1] [i_4 - 1] [i_4 - 1]) * (58 == 1)))));
            arr_14 [i_4] [i_4 - 1] &= ((-0 - (arr_6 [i_1])));
            arr_15 [i_4] = (min((max(var_11, (arr_5 [i_4 - 1]))), var_1));
        }
        for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
        {
            var_23 = 1;
            var_24 ^= 14379;
            arr_18 [i_1] [i_1] [i_5] = var_0;
            arr_19 [i_1] = 25392;
        }
        var_25 = 8544393856092020971;
    }
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        var_26 = (min(var_26, (max(1761258791, -1813240382593964680))));
        var_27 = (((((arr_5 [i_6]) ? (!var_2) : var_6)) >> ((1813240382593964679 ? (arr_11 [i_6] [i_6]) : (arr_16 [i_6] [i_6])))));
    }
    var_28 = (((2533708504 ^ var_11) == (((-((53010 ? var_5 : 3968944434483030113)))))));
    #pragma endscop
}
