/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((min(var_11, var_11)))) ? (65535 && 60396) : (1430927273 && 3673354114)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_17 = (max(var_17, ((max((((((min(var_0, (arr_1 [i_0 + 2])))) || (arr_2 [i_0 - 1] [i_0 + 2])))), ((max(41, (arr_1 [i_0 + 1])))))))));
                arr_4 [i_0] [i_0 - 2] [i_0] = (~74);
            }
        }
    }
    var_18 -= max((max(var_12, var_10)), (((10732 ? 3215221711178310023 : 232))));

    for (int i_2 = 3; i_2 < 13;i_2 += 1)
    {
        var_19 = ((((arr_0 [i_2 - 3] [i_2 - 2]) != (arr_5 [i_2 + 1] [i_2 - 3]))));
        var_20 = (((-3674548692315583241 ? -6310989466869932733 : 2710742029)));
        var_21 = (255 && 16376);
    }
    #pragma endscop
}
