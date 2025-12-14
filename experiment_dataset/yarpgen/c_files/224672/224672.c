/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_5 ? var_2 : ((var_12 ? (12729050405988259320 <= var_6) : ((var_11 >> (var_6 - 1405989786)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 -= (((((max(12729050405988259320, var_1)) * ((min(var_4, var_9))))) * (!var_0)));
                    var_18 = (min((-1163652654 / 1), ((var_4 ? var_15 : var_9))));
                    var_19 = min(-var_2, (!var_15));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                {
                    arr_14 [i_3 + 1] [i_3 + 1] [i_3] = -95;
                    arr_15 [i_3] [11] [i_3] = (min((min(8173566822723186423, 118)), ((10273177250986365192 ? 2 : 184226670))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_20 = (var_9 / (min(((max(-738650810, 25))), -14356355914498022693)));
                                var_21 ^= ((((min(1, (23610 <= 8173566822723186423)))) / 5717693667721292314));
                                var_22 ^= (((((1137557831 ? 3292788022612428852 : (11124804253890066384 + -31393)))) ? (229 + 233) : ((0 ? 184226670 : 25))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
