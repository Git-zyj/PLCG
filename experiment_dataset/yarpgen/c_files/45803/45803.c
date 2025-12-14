/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_12 [i_0 + 1] [i_3] = (var_0 ? ((((arr_2 [i_0]) > (arr_0 [0])))) : (arr_5 [i_0 + 1]));
                        arr_13 [i_3] = var_5;
                    }
                }
            }
            arr_14 [17] = var_2;
            arr_15 [i_0] [7] |= 2329363775;
        }
        arr_16 [i_0] [i_0] &= ((~((((arr_2 [i_0]) || 60590)))));
        arr_17 [5] = (((((arr_8 [i_0] [6] [i_0 - 1]) <= var_9)) ? (!17951) : (arr_3 [i_0 - 2])));
        arr_18 [0] = (!var_7);
        arr_19 [i_0 + 1] = (var_9 <= 4945);
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_10 = (min(var_10, var_0));
        arr_24 [i_4] = 0;
    }
    var_11 = (max(var_0, ((-255 ? -11407 : var_9))));
    #pragma endscop
}
