/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_10 &= 2797421824;
                        var_11 = min(325411340, 16756327697085465146);

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_0] = (arr_8 [i_0] [i_0] [i_2] [i_0]);
                            var_12 ^= (max((((~6927) ? (((-18319 + 2147483647) >> (85759062178281148 - 85759062178281145))) : -1257509205)), 134217727));
                            var_13 = (!(((arr_9 [0] [i_0] [i_2 + 1] [i_2] [i_2 + 2]) == 1497545459)));
                            var_14 = (-(max(var_6, (!var_2))));
                        }
                    }

                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        arr_16 [i_0] = (((((!(((var_2 ? 0 : (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [10]))))))) >> (((((arr_5 [i_2 + 2]) ? var_7 : (arr_5 [i_2 - 1]))) - 15946823114439309521))));
                        arr_17 [6] [8] [i_2] [12] &= (arr_11 [i_0] [i_0] [i_0] [i_5] [0] [i_0]);
                        var_15 = (~var_6);
                    }
                    var_16 = (((var_3 - (arr_11 [i_0] [i_0] [i_0] [i_1] [i_2] [i_2 - 1]))));
                    var_17 = ((((max((arr_7 [i_0] [i_0] [i_0] [i_0]), (arr_7 [i_0] [i_1] [i_2 + 2] [i_2])))) || 134217727));
                    var_18 = var_0;
                }
            }
        }
    }
    var_19 = 134217727;
    #pragma endscop
}
