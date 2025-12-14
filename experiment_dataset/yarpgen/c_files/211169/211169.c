/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_8 || var_7);

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((((((min(var_1, (arr_1 [3] [11])))) ? 16579944329831283843 : (!16579944329831283843)))) ? 16579944329831283846 : (arr_0 [0] [0])));
        var_15 = ((+(min((~158), (min(10478122838602559566, (arr_2 [i_0] [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_8 [1] [i_1] = (((((1 ? (max((arr_7 [i_1]), 2147483647)) : ((max(6394195559872510885, -109)))))) ? 12470063697140881021 : -var_1));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    {
                        var_16 = ((~(((arr_4 [i_1] [i_4 - 1]) ? (arr_11 [i_1] [i_1]) : (max((arr_0 [i_4] [i_4]), var_7))))));
                        var_17 *= (((arr_11 [i_2] [i_2]) && (!var_0)));

                        for (int i_5 = 2; i_5 < 14;i_5 += 1)
                        {
                            arr_18 [i_1] [i_2] [i_3] [i_4 + 2] [i_1] = ((((min((arr_14 [i_1] [i_1] [i_3] [i_5 + 1]), ((8 ? (arr_12 [i_1] [i_2] [i_5]) : (arr_9 [i_1] [i_3] [i_1])))))) ? (arr_17 [i_5] [i_5] [i_5 - 2] [i_5] [i_5] [i_5]) : (arr_2 [i_3] [i_5])));
                            var_18 += 104;
                        }
                        arr_19 [i_1] [i_2] [i_3] [i_4] = (arr_16 [i_1] [i_1] [i_1]);
                    }
                }
            }
        }
    }
    var_19 = ((var_3 - (min(var_8, (min(var_13, var_0))))));
    #pragma endscop
}
