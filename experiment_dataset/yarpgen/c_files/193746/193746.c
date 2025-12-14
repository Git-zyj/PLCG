/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += var_8;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        var_13 = (((max(7680, 42))));
                        var_14 = ((~(((((8508 ? -1 : 15826))) ? (arr_8 [i_0]) : ((max(var_5, var_2)))))));
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            var_15 = (((arr_9 [i_0 + 1]) || (((-6 ? -1 : 65535)))));
            var_16 = (!63719);
        }

        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            arr_15 [i_0] = ((-((49710 ? (arr_2 [i_0 - 1] [i_0] [5]) : (arr_2 [i_0 + 1] [i_0] [i_0])))));
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    {
                        arr_22 [i_0] [8] = ((~(((((arr_8 [i_0]) != 49710))))));
                        arr_23 [i_0] [i_6] [i_6] [i_6] = ((29545 | (((arr_6 [i_5]) ? ((2 ? 18560 : 2114222289)) : (arr_2 [i_0] [i_0] [i_0 - 1])))));
                        var_17 = ((~(((arr_8 [i_0]) ? (max(-50, (arr_19 [i_0] [14] [i_0]))) : (arr_12 [0] [i_6])))));
                        var_18 = ((~(arr_1 [i_0 + 1])));
                    }
                }
            }
        }
        for (int i_8 = 1; i_8 < 15;i_8 += 1)
        {
            var_19 += (((+-58373) ? (!var_6) : (arr_11 [i_0])));
            arr_26 [i_0] = (min((((arr_9 [i_0 + 2]) ? -29 : (arr_9 [i_0 - 1]))), (((arr_9 [i_0 - 1]) ? (arr_9 [i_0 + 1]) : 8754))));
        }
        arr_27 [i_0] = (!237);
    }
    var_20 += (0 | 2823);
    var_21 = ((~((((max(var_0, var_10))) ? (7316 * var_9) : (max(var_10, var_1))))));
    #pragma endscop
}
