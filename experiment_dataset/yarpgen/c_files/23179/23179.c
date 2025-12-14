/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_11 = ((((1482190072 | (34311 && 31227))) * (((-31227 <= (((arr_3 [i_0] [i_0]) / 7440978574224831789)))))));
                    var_12 = (min(((((max(31236, 177))) ? ((177 ? 18446744073709551615 : 108)) : ((((arr_6 [i_0] [i_0] [i_0] [i_1]) * (arr_0 [i_0])))))), (arr_1 [i_0])));
                    var_13 = ((((31235 ? 34309 : 1013882119))));
                    arr_7 [i_2] [i_0] [i_0] = (((((max(-1013882113, 3896382427238998947))) ? (6 - 1907285839063991062) : (arr_5 [i_0] [i_0]))));
                }
            }
        }
    }
    var_14 = 0;
    #pragma endscop
}
