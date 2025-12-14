/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((!(var_10 / -10))) ? (((var_8 % (min(var_2, var_13))))) : var_11));

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            var_15 = (arr_3 [i_0] [i_1 + 2]);
            var_16 = -10;
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_17 = var_10;
                        var_18 = ((((max((((arr_11 [i_0] [5] [i_2] [i_2] [i_3]) & (arr_4 [i_1] [i_2] [i_3]))), var_12))) & ((8974014513989797498 ? 9472479734064618374 : 4499))));
                        var_19 = ((((var_10 <= ((8892 ? var_9 : var_9)))) ? (~241) : (min(8896, -0))));
                    }
                }
            }
        }
        var_20 = (arr_3 [i_0] [7]);
        arr_12 [i_0] = (arr_6 [i_0] [i_0] [i_0]);
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        var_21 = 37984;
        var_22 = ((((max((arr_14 [i_4]), (arr_13 [i_4])))) ? (arr_14 [i_4]) : ((min((arr_13 [i_4]), (arr_13 [i_4]))))));
        arr_15 [i_4] = (((((((((arr_13 [i_4]) == 8880))) > var_7))) ^ ((((1 == 13897) && 8896)))));
        arr_16 [i_4] = (((((var_3 & var_7) ? 119 : (var_9 && var_5))) ^ (((~(arr_13 [i_4]))))));
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        arr_20 [i_5] = (var_7 + -12882);
        arr_21 [i_5] = (1 & 1);
        var_23 = -104;
        arr_22 [i_5] [i_5] = (!1);
    }
    #pragma endscop
}
