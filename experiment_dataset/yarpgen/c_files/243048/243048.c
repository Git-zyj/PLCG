/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_14 = (max((((arr_0 [i_0 + 1]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 + 1]))), (((arr_0 [i_0 - 1]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1])))));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    arr_9 [i_0] [i_0] [i_0] = (max((arr_1 [i_0 - 1]), var_6));
                    var_15 = (!-373076761);
                    var_16 *= (arr_0 [i_0 + 1]);
                }
                var_17 = (max(69, 2147483647));
            }
        }
    }
    var_18 = ((var_5 ? (((((-373076761 ^ -28122) || (1 ^ 0))))) : var_11));
    var_19 = (max(var_19, var_10));
    var_20 = ((0 << (var_1 - 9316903836306642428)));
    #pragma endscop
}
