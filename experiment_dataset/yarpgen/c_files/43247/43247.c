/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((!18542) ? (!var_10) : var_8)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_16 *= ((((max((arr_2 [i_2 + 1]), 4294967292))) ? (arr_3 [i_3]) : ((((95 > (arr_4 [i_2] [i_2])))))));
                            var_17 = (min(var_17, ((min((max(-17483, (((arr_9 [i_0] [2] [i_2] [i_0]) ^ -40)))), (arr_1 [18]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            var_18 = (min(var_18, ((min((arr_2 [13]), (arr_13 [i_0] [i_0] [22]))))));
                            arr_15 [i_0] [i_4] [i_0] [i_0] = ((max((arr_7 [i_4] [i_4] [i_0 + 1] [14] [i_4 - 1] [i_0 + 1]), (!14622473694463572386))));
                            arr_16 [i_4] = (((arr_9 [i_5] [i_1] [i_1] [i_0]) * (arr_4 [i_0 - 2] [i_4 + 1])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
