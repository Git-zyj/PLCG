/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (((-(max((var_12 - var_11), (min(var_9, 5104)))))))));
    var_14 = (var_6 ? ((var_12 ? var_4 : (~var_1))) : (((var_4 + 9223372036854775807) << (((min(var_9, var_4)) - 6442727253699197396)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_1] [i_2] = ((!(((((max((arr_5 [i_1] [i_1] [8]), var_2))) ? ((60445 ? var_5 : 60436)) : var_5)))));
                    var_15 = (((arr_4 [i_2]) ? ((-4773 ? (var_8 % var_12) : (~-468900107587785547))) : ((min(var_5, (var_7 + var_12))))));
                    var_16 = ((((2 >= (min(-468900107587785559, var_10))))) >= (((!(arr_5 [i_2 - 3] [i_2 + 1] [i_2 + 1])))));
                    var_17 ^= (((+(((arr_2 [i_0] [i_1] [i_2 + 2]) ? var_3 : (arr_5 [i_0] [11] [i_0]))))));
                }
            }
        }
    }
    #pragma endscop
}
