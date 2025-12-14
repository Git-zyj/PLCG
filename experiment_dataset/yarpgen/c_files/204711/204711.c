/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                var_12 = (min((min(255, ((var_2 - (arr_4 [i_0] [i_0]))))), -1380677241));
                var_13 = (((arr_4 [i_0 + 1] [i_1 + 1]) && ((((arr_5 [i_1 - 1] [i_0 + 2] [i_0]) ^ (arr_5 [i_1 + 1] [i_0 - 1] [i_0 - 3]))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
                {
                    var_14 = ((!(arr_3 [i_0] [1])));
                    var_15 = (-(arr_1 [i_0 - 1]));
                }
                for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
                {
                    var_16 = (min(var_16, ((((arr_11 [6]) ? ((210 ? (arr_7 [i_0 - 2]) : (arr_7 [i_0 - 3]))) : ((-(arr_8 [i_3] [i_0 - 2] [i_1 - 1]))))))));
                    var_17 = ((45 ? (((+(min((arr_8 [i_0] [i_1] [i_0]), var_4))))) : ((((((arr_10 [i_0] [i_0] [i_0] [i_0]) ? 217 : var_0))) ? var_8 : ((123977537 ? 1711700647 : 238))))));
                    var_18 = (min(var_18, (((var_11 ? ((((var_9 ? 249 : var_11)) << (var_9 || -9223372036854775800))) : var_2)))));
                }
                arr_12 [22] [20] [22] &= ((((min(1, 249))) ? (((arr_8 [i_1 - 1] [i_1 + 1] [i_1 - 1]) & (arr_8 [i_1 - 1] [i_1 + 1] [i_1 - 1]))) : (arr_0 [8])));
            }
        }
    }
    var_19 &= var_8;
    #pragma endscop
}
