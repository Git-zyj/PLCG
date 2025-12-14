/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_9;
    var_17 = var_7;
    var_18 = max(var_3, ((min((!var_6), (min(34, 156))))));
    var_19 = (min(((max(-1200898716920238971, var_6))), (536870911 / 1)));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = var_2;
        var_20 = (arr_1 [i_0] [3]);
        var_21 = (min((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))), (arr_1 [i_0] [i_0])));
        var_22 *= (((((min(4276797743, 15580173698118128425)) <= 145)) ? (arr_1 [i_0] [i_0]) : ((((2950645758 && (arr_0 [i_0] [i_0]))) ? 6 : 0))));
        var_23 = (((((arr_0 [i_0] [i_0]) * (((var_8 ? 507619560 : (arr_1 [i_0] [i_0]))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_24 = (1213565129 + 232);
        var_25 ^= ((18069022585564055872 - (((arr_0 [i_1] [i_1]) + 2231))));
        arr_5 [i_1] = (arr_1 [i_1] [8]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        arr_8 [i_2] = 2402552433;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    var_26 = (max(var_26, ((((arr_10 [i_2] [i_3] [16]) - (!var_5))))));
                    var_27 = (arr_11 [i_4] [i_2]);
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_28 = (max(var_28, ((min(var_5, (arr_12 [i_5] [11]))))));
        var_29 = (max(var_29, (max((arr_11 [i_5] [24]), ((((((arr_13 [i_5]) >> 16))) | (arr_7 [i_5])))))));
    }
    #pragma endscop
}
