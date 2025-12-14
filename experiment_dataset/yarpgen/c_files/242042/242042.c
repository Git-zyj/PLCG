/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 230;

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_11 = (min((((((!(arr_4 [i_0] [2])))) << (-var_0 + 128))), var_2));
                        var_12 = ((((min((arr_0 [i_0 + 1] [i_0 - 1]), 16761743348087537011))) ? (var_0 && var_1) : (arr_0 [i_0] [i_0 - 3])));
                        var_13 = (min(var_13, 55083));
                    }
                }
            }
        }
        var_14 = (min(var_14, ((min((min(1, ((31494 ? (arr_7 [i_0]) : 32640)))), (((arr_9 [i_0 - 4] [3] [i_0 - 1] [i_0 - 4]) ? 1 : 17057)))))));
    }
    for (int i_4 = 1; i_4 < 11;i_4 += 1)
    {
        arr_16 [i_4] [i_4] = (((((((max((arr_15 [9]), var_5))) ? ((-32766 ? var_6 : 2564535624)) : (((min(255, var_3))))))) ? var_9 : 90));
        var_15 = 2564535633;
        arr_17 [i_4 + 4] [i_4] = var_1;
        var_16 = (((((var_6 != (var_0 - var_4)))) | (-13594 != 1730431652)));
    }
    var_17 |= (min(var_7, ((40230 ? -16 : 25))));
    var_18 = var_4;
    #pragma endscop
}
