/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((((var_10 <= 127) ? (((105 ? 127 : 4294967295))) : 18446744073709551599)), (((var_7 * ((min(var_4, var_4))))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 = max(((max(var_13, var_9))), ((max(var_2, ((min(var_10, var_16)))))));
        arr_2 [i_0] [i_0] = (max(((((max((arr_0 [1]), (arr_0 [8])))) & (min((arr_1 [8]), var_9)))), (((!((max((arr_1 [i_0]), var_0))))))));
        arr_3 [i_0] [i_0] = (((min(((var_6 ? var_2 : var_3)), (!var_0))) / ((((var_16 > (min(-1399038718, 4294967295))))))));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        var_19 *= ((((max(((var_2 ? var_6 : (arr_5 [2]))), (~118)))) ? ((~(var_8 ^ var_14))) : ((((((((arr_4 [i_1 + 4] [i_1]) > var_13)))) <= (((arr_5 [i_1]) ? (arr_5 [i_1 + 3]) : (arr_4 [i_1] [i_1]))))))));
        var_20 = (max(var_20, ((max((-var_15 - var_15), (1 >= var_8))))));
        var_21 = (max(((max(var_6, (arr_4 [i_1] [i_1])))), (min((arr_5 [i_1 + 4]), 65203037))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_22 = (max(var_22, ((max((var_8 < var_3), ((3820576533721789199 ? (1 / -8647242546704390241) : 4229764259)))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 9;i_4 += 1)
            {
                {
                    var_23 = var_7;
                    var_24 *= ((((((113 ? -421692424 : 127))) || 57428)));
                }
            }
        }
    }
    #pragma endscop
}
