/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((min((var_5 >> 1), var_11))) ? var_5 : (((!1) & var_8))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_0] [6] [i_2] = (min((arr_7 [i_0] [i_0]), var_6));
                    var_13 = -1464930784;
                }
            }
        }
        var_14 -= (var_6 == 10269304754641844510);
    }
    for (int i_3 = 1; i_3 < 11;i_3 += 1)
    {
        var_15 ^= ((((arr_1 [i_3 + 1]) ? (((min(var_3, var_1)))) : -505743331646014857)));
        var_16 = (max(var_16, ((min((((arr_11 [i_3 + 1]) - 0)), (((((arr_2 [i_3]) + var_4)) * -13687)))))));
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        arr_16 [i_4] = var_3;
        arr_17 [i_4] &= 255;
        arr_18 [i_4] [i_4] = ((-(((arr_14 [i_4] [24]) ? var_6 : (arr_15 [i_4])))));
    }
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        var_17 = ((((~(10269304754641844510 | 24))) ^ var_0));
        arr_22 [i_5] = (((~(min(18446744073709551615, (arr_20 [i_5] [9]))))));
    }
    #pragma endscop
}
