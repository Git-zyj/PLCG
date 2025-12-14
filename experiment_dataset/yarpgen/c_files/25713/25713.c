/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    var_11 *= (((-5641727353799687244 / -2083816894) << (((((min(var_7, var_5))) != var_1)))));
                    var_12 = ((2083816892 < ((229 ? (((arr_10 [i_1] [i_1] [i_1 + 2] [i_2 - 4]) ? 50331648 : -50331649)) : 510))));
                    var_13 = 5641727353799687241;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            {
                var_14 = (225 & 6129579387007982440);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 21;i_6 += 1)
                    {
                        {
                            var_15 = ((5641727353799687246 + (((-(max(var_3, -50331630)))))));
                            var_16 = ((((((arr_14 [i_3] [i_4] [i_5]) && 34602654))) < (((50331648 ? (arr_12 [i_4]) : (arr_11 [i_6 - 2]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
