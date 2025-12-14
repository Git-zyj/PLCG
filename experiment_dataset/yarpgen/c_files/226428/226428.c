/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] |= (10435392262600365750 + 57);
        var_11 = (max(var_11, ((((min(3175217346, 13361156057914682998)) << ((((((arr_0 [i_0]) ? (arr_0 [i_0]) : var_7))) - 4072551061180319446)))))));
        arr_3 [i_0] [i_0] = (!3502527249471804168);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_12 = (arr_1 [22]);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 23;i_4 += 1)
                {
                    {
                        arr_15 [i_4] [i_3] = ((-126 ? 1735374880 : 62));

                        for (int i_5 = 1; i_5 < 22;i_5 += 1)
                        {
                            var_13 = (((((!(arr_14 [14] [i_2] [i_4 + 1] [i_4] [i_5 - 1] [i_5 - 1])))) >> ((((arr_14 [i_1] [10] [i_4 + 1] [10] [i_5 - 1] [i_3]) > (arr_14 [i_1] [i_1] [i_4 + 1] [i_4 - 1] [i_5 - 1] [i_4 + 1]))))));
                            var_14 = (arr_13 [1] [i_2] [23] [1]);
                        }
                        var_15 = (min(-127, 127));
                    }
                }
            }
        }
    }
    var_16 = (min(var_16, 2559592432));
    var_17 = (min(((min(2559592429, var_6))), ((max(64, var_9)))));
    #pragma endscop
}
