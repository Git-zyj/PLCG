/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((~3608326031), 120));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_15 = (((((~var_5) * (arr_0 [i_1]))) < (((arr_0 [i_0 + 2]) ? (arr_0 [i_0 - 1]) : var_4))));
                var_16 = (arr_3 [i_0] [i_0] [i_0]);
                var_17 = (!-414803392);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                var_18 = (((((max((arr_6 [i_2] [i_2] [2]), 572629075))) ? (min((arr_2 [i_3]), var_4)) : (((min((arr_5 [i_3]), 248)))))) % ((((min(var_1, var_0))))));
                var_19 = (max((((((1 ? 1 : 37691))) ? (!var_11) : (~14))), 76));
                arr_8 [i_2 - 3] [i_2] [9] = ((min(var_13, (min((arr_4 [i_3]), -17)))));
                var_20 = ((((var_13 ? (arr_1 [i_2 - 3] [i_2 - 1]) : (arr_1 [i_2 - 2] [i_2 + 1])))) ? (arr_1 [i_2 + 1] [i_2 - 2]) : (((arr_1 [i_2 - 3] [i_2 - 3]) * (arr_1 [i_2 - 2] [i_2 - 3]))));
            }
        }
    }
    var_21 = var_9;
    #pragma endscop
}
