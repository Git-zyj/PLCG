/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_0, (19940536612783589 / var_5)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_14 -= -3;
                            arr_11 [i_2] [i_2] [i_2 - 4] [i_2] = var_8;
                        }
                    }
                }
                arr_12 [i_0] [i_0] [i_0] = (arr_2 [i_0] [i_1]);
                arr_13 [i_0] = ((((arr_7 [i_0] [i_0] [i_0]) ? (var_2 - 10286258846997213806) : (arr_0 [i_1]))));
                arr_14 [i_0] [9] = (min(11, (((!-12) ? (arr_10 [i_0] [9] [i_1] [i_1]) : ((min(9223372036854775807, 16481)))))));
                arr_15 [i_0] [i_1] [i_0] = -4451439178983223958;
            }
        }
    }
    #pragma endscop
}
