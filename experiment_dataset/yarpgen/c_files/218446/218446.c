/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 = 0;
        var_14 = ((((3354857459 ? (((!(arr_2 [i_0] [i_0])))) : 1)) + (min(((26831 ? 34 : (arr_2 [10] [i_0]))), (arr_2 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 24;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    {
                        var_15 = var_2;
                        var_16 = ((arr_14 [i_4] [i_1] [i_2 - 3] [i_1] [i_1 + 1]) ? (arr_10 [i_1]) : 4294967284);
                        var_17 -= (((arr_12 [i_1] [i_1]) < (((!(arr_6 [i_2 - 3] [i_3] [i_4]))))));
                        var_18 = ((arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1]) ? (arr_5 [i_1 + 1] [i_1 + 1] [i_1]) : 3913524842);
                        arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] = ((((var_7 << (((arr_4 [i_1]) - 59582)))) * (arr_12 [i_4] [i_2 + 2])));
                    }
                }
            }
        }
        var_19 = ((285883406039008403 ? (-417118340 | 4243839268867988738) : (arr_6 [i_1 - 1] [i_1 + 1] [i_1 - 1])));
        arr_16 [i_1] = (13030777815490606336 < 1997221254);
    }
    var_20 = (min(((((min(var_5, var_2)) <= var_5))), var_0));
    #pragma endscop
}
