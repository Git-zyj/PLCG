/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, ((((((~(~var_3)))) && (var_13 ^ var_16))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_18 = (min((((((var_12 ? 4 : 3424011436)) >= (1 != 7514439811323427421)))), 5296713238121211563));
                    var_19 = (((((8343501594395507359 ? 8144929447002771214 : 63468))) ? ((min(var_7, (arr_5 [i_2] [i_1] [i_0])))) : ((var_12 ? ((var_11 ? var_6 : var_13)) : var_7))));
                    arr_9 [i_0] = (min(((((var_6 == var_1) ? ((var_4 ? var_10 : var_2)) : (var_5 && 15184895837057325127)))), (((arr_4 [i_0]) ? (arr_4 [i_0]) : (arr_4 [i_0])))));
                    var_20 -= ((var_16 / var_10) ? (max(var_15, (arr_0 [i_0]))) : (min((arr_0 [i_0]), var_15)));
                }
            }
        }
    }
    #pragma endscop
}
