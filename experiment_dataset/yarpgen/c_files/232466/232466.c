/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~((min(var_0, var_11))));
    var_14 = ((+(((120 && 3338265924940035902) ? (var_4 > 2362622003998720694) : 16084122069710830921))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_1] = -40;
                var_15 = (max(var_15, (((((min((arr_3 [i_1] [i_1]), (arr_3 [i_1] [i_0])))) ? (arr_3 [0] [0]) : ((((arr_3 [i_0] [i_1]) ? (arr_0 [8]) : (arr_3 [i_0] [i_1])))))))));
                var_16 = (min((3 * 12683859333894393779), (((min((arr_2 [i_0] [i_0] [i_0]), var_9)) >> 55))));
            }
        }
    }
    #pragma endscop
}
