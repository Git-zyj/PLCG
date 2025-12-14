/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_12 = arr_1 [10] [i_0];
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_8 [i_3] = ((~(min((arr_4 [i_3 + 2] [i_1] [i_2] [i_0]), -var_8))));
                        var_13 = ((-((min(var_10, (arr_7 [i_0] [i_1] [i_2] [i_2]))))));
                        var_14 = 1048575;
                        var_15 = ((((((3 ? (arr_3 [i_0] [i_1] [i_3]) : var_8)) << (((min((arr_5 [i_0]), (arr_1 [i_0] [i_0]))) + 3502885708888126439)))) - (~var_0)));
                        var_16 = (794019136846759077 % 3754088290468875568);
                    }
                }
            }
        }
        var_17 = (arr_6 [i_0]);
        var_18 ^= ((~((-((var_5 + (arr_3 [i_0] [i_0] [i_0])))))));
        arr_9 [i_0] = (max(((((((arr_3 [i_0] [i_0] [i_0]) << (((-93 + 120) - 19))))) - (var_4 & var_7))), (((((-(arr_0 [i_0]))) != (21131 || -7907027614480437847))))));
    }
    var_19 = ((+((41 ? (-41 - var_4) : var_8))));
    #pragma endscop
}
