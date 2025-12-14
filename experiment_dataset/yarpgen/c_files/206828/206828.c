/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 24;i_2 += 1)
                {
                    arr_6 [i_0] [i_1] [i_2] [i_2 - 1] = (arr_1 [i_0 - 1]);
                    var_13 = (arr_3 [i_0] [i_1] [i_2]);
                }
                var_14 = (arr_5 [i_0]);
                /* LoopNest 2 */
                for (int i_3 = 3; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        {
                            var_15 = (min(var_15, ((min(2772842455, -1)))));
                            var_16 *= (max((~var_9), (((((((arr_11 [i_0] [i_1] [i_3] [i_1]) ? var_11 : (arr_9 [i_0] [i_1] [i_3] [i_4])))) ? -2772842443 : (!-2536727219674449577))))));
                        }
                    }
                }
            }
        }
    }
    var_17 = 3920585543;
    #pragma endscop
}
