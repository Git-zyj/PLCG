/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= var_1;
    var_15 = (~-114);

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_16 = var_2;
                            arr_11 [11] [i_1] [11] [i_1] [i_1] [13] = ((-3407713633064749841 + (arr_0 [i_0] [i_1])));
                        }
                        var_17 = ((max(121, 4720740965281243776)) | (((((var_4 ? 4343880296879990204 : 1152780767118491648))) ? 2910376530076739066 : 111)));
                    }
                }
            }
        }
        var_18 -= (max((max(((-(arr_10 [i_0] [i_0] [4] [i_0] [11]))), (-3407713633064749841 > -6721514671406669774))), (((arr_1 [i_0]) >> (((~-8377949855676846234) - 8377949855676846232))))));
        var_19 = (min(var_19, ((((((max((arr_2 [i_0]), 112)))) ^ (max(var_4, 1008806316530991104)))))));
        var_20 += (max((((!(((arr_6 [i_0] [i_0] [i_0] [4] [i_0] [13]) || -6721514671406669774))))), (((arr_6 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? 10897828849784312 : (1631044024948390638 & var_12)))));
        var_21 = var_7;
    }
    var_22 = (-9223372036854775800 & (((((max(48, -3407713633064749847)) > var_7)))));
    #pragma endscop
}
