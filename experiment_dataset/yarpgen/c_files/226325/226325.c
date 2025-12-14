/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = (min(((((((arr_2 [i_0] [i_0]) % (arr_2 [6] [i_0 - 1])))) * (((arr_1 [i_0]) % (arr_1 [i_0]))))), (((((87 ? 1 : -32753))) ? -88 : (arr_1 [i_0])))));
        arr_4 [i_0] = (((min((((arr_0 [i_0]) % (arr_1 [i_0]))), (max((arr_1 [i_0]), (arr_1 [i_0]))))) | (((arr_2 [i_0] [i_0]) * (((arr_1 [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_1 [i_0])))))));

        /* vectorizable */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            arr_8 [i_0] [i_0] [i_1] = ((((((arr_1 [i_0]) & (arr_0 [i_0])))) ? (((arr_2 [i_1] [i_0]) ? (arr_7 [i_0] [i_1]) : (arr_1 [i_0]))) : ((((arr_7 [i_0] [i_1]) | (arr_2 [i_0] [i_0]))))));
            var_13 = (max(var_13, ((((((((arr_6 [i_0] [i_1]) == (arr_7 [i_0] [i_1 - 2]))))) % (((arr_7 [i_0] [i_1 - 1]) | (arr_6 [i_1 - 1] [i_0]))))))));
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_14 = (((((arr_11 [i_0] [9] [i_0]) | (arr_0 [i_0 + 2]))) == ((((arr_2 [i_0] [i_0]) == (arr_5 [i_0 + 2] [i_0]))))));
                        arr_14 [i_1] [i_1] [i_1] [i_3] |= (((((arr_10 [i_0] [14] [14] [i_3]) % (arr_2 [i_0] [i_1]))) % ((87 ? -40 : -110))));
                    }
                }
            }
            var_15 = (((((arr_1 [i_0]) / (arr_11 [i_0] [i_0] [i_0]))) * (((arr_5 [i_0] [i_0]) / (arr_2 [i_0] [i_0])))));
            var_16 = (arr_9 [i_0] [i_0] [i_0]);
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_17 = (arr_1 [i_4]);
        arr_19 [i_4] = (arr_11 [i_4] [i_4] [i_4]);
    }
    var_18 = (((((((var_0 ? var_1 : var_11))) != (var_11 * var_5))) ? ((((max(var_7, var_12))) / ((var_8 ? var_7 : var_12)))) : var_1));
    #pragma endscop
}
