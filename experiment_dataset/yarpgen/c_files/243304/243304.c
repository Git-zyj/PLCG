/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_9));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_13 = (min(var_13, 5571102136098743091));
            arr_6 [9] = (((((-(arr_1 [10] [i_1])))) ? (((!12875641937610808525) ? (arr_1 [i_0 - 1] [i_0 - 1]) : (arr_2 [i_1]))) : ((((2290531930108205929 ? 2290531930108205929 : 2103876644279409813))))));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 15;i_2 += 1) /* same iter space */
        {
            var_14 += 60721;
            var_15 = (arr_3 [i_2 - 1]);
        }
        /* vectorizable */
        for (int i_3 = 1; i_3 < 15;i_3 += 1) /* same iter space */
        {
            arr_13 [i_0 - 1] = (arr_11 [i_0 - 2] [i_3 + 1] [i_3 + 1]);

            for (int i_4 = 4; i_4 < 14;i_4 += 1)
            {
                arr_18 [1] [i_0 + 2] [2] [i_0] = (arr_8 [i_0 - 1] [i_0] [5]);
                arr_19 [i_0] [6] = (((~18446744073709551614) ? (arr_10 [i_0 - 1]) : (((((arr_1 [2] [i_3 - 1]) == 5571102136098743091))))));
            }
            var_16 = (min(var_16, ((((~20842) == (arr_17 [10] [1] [i_3] [i_3]))))));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 0;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        {
                            var_17 = (((arr_7 [i_3 - 1] [i_3 + 1] [i_3 + 1]) ? (arr_15 [i_0 - 2] [i_3 + 1] [i_3 - 1]) : (arr_27 [3] [i_7] [i_5] [i_5] [9] [12] [i_5])));
                            var_18 &= (arr_11 [i_3 - 1] [i_0 + 2] [i_3 - 1]);
                        }
                    }
                }
            }
            var_19 = (min(var_19, (arr_8 [i_0] [12] [i_0 - 1])));
        }
        var_20 += (max(9113697200544352908, (1 / 60721)));
    }
    #pragma endscop
}
