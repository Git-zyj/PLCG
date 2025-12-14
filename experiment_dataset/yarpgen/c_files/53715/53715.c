/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((!((max(((4684 ? var_5 : var_2)), (9165969347229154499 == var_2))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (~var_1);
                var_11 = (max(var_11, ((max(((~(min((arr_0 [i_0] [i_0]), (arr_2 [i_0] [i_1] [i_1]))))), ((max((arr_0 [i_1 - 1] [i_1 - 1]), var_2))))))));
            }
        }
    }
    var_12 = 1;
    var_13 ^= (~var_9);

    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_14 = var_6;
        arr_8 [i_2] = ((((((((arr_2 [i_2] [i_2] [i_2]) ? var_0 : 1)) - (arr_7 [9])))) ? (min(((var_4 ? (arr_1 [i_2]) : 0)), ((max(1, var_4))))) : (((((arr_7 [i_2]) == var_8))))));

        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            var_15 = ((-((var_8 ? (arr_0 [i_3 - 2] [i_3 + 1]) : 415008503))));
            arr_11 [i_3 + 1] [i_2] = (((arr_9 [i_3 - 1] [8] [i_2]) ? (((arr_0 [i_3 + 1] [i_3 + 2]) ? (arr_10 [i_2]) : (arr_9 [i_2] [i_2] [i_2]))) : ((((1 / var_9) - (!var_6))))));
        }
        arr_12 [i_2] = (max((max((~1), ((14867005708668365703 ? 0 : 1)))), (((arr_3 [i_2] [i_2]) ? var_0 : var_9))));
    }
    #pragma endscop
}
