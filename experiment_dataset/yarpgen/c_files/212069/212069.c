/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_20 = ((((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_1]))));
                arr_6 [i_0] |= (arr_3 [i_0]);
                var_21 = min(9, (((((arr_4 [1] [i_1]) ? -119 : var_12)))));
                arr_7 [0] [i_1] = (((((arr_1 [i_0]) ? (arr_4 [i_0] [i_0]) : (arr_4 [i_0] [i_0]))) << (((arr_0 [i_0] [i_1]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_1] [i_1])))));
            }
        }
    }
    var_22 = ((min((-18 & 1), (min(1288849823, var_11)))) / 193114597);

    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = (((arr_8 [i_2] [i_2]) ? ((9567 ? ((193114599 << (39 - 37))) : ((193114625 << (255 - 254))))) : (min((0 + 193114597), (arr_9 [i_2] [i_2])))));
        arr_11 [0] = ((!(arr_8 [i_2] [i_2])));
        var_23 = (max(-1, (max((arr_8 [i_2] [i_2]), (arr_8 [i_2] [i_2])))));
        var_24 = ((((min(-12116, 1))) ? ((1 % ((113 ? -63 : -193114575)))) : (~45713)));
        var_25 = (max(var_25, 3234139031));
    }
    #pragma endscop
}
