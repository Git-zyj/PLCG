/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((-16347 ? 1 : -67))) ? -var_4 : (((min((min(var_6, 1)), (!var_5))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_14 = ((((max(((1 ? 1 : (arr_1 [0] [i_1]))), (((6522068854806636356 ? 3339265631 : 1)))))) ? var_1 : (((min(var_2, (arr_10 [i_3] [i_2] [i_1] [i_0])))))));
                        var_15 = (min(var_15, (((((((((~(arr_10 [i_0] [i_1] [i_2] [i_2])))) ? ((var_4 ? var_8 : (arr_0 [2] [i_3]))) : ((-3091323715710459761 ? (arr_7 [i_0] [i_0] [i_0]) : 1))))) ? ((((((arr_5 [i_0] [i_1]) ? 1 : 1))) ? ((var_12 ? (arr_3 [i_0]) : 3357997466)) : 7987875447481536841)) : (((!var_8) ? ((1 ? 172 : var_4)) : 1)))))));
                    }
                }
            }
            var_16 -= ((-((((max(var_3, var_7))) ? var_3 : (min((arr_2 [i_1]), (arr_1 [i_0] [i_0])))))));
            var_17 = ((~((((min(6747, 32273381))) ? (!var_3) : -3972217947943422079))));
            arr_12 [i_1] [i_0] = (max((~-3897081166), (arr_8 [i_0] [i_1] [i_1])));
        }
        arr_13 [i_0] = ((~936969835) ? ((max(1, 1))) : (~var_2));
        var_18 = ((((max(-var_7, var_10))) ? -var_0 : ((((max((arr_10 [i_0] [i_0] [1] [i_0]), (arr_6 [i_0] [i_0] [i_0])))) ? (min(4235526691, (arr_9 [i_0]))) : (((min((arr_5 [i_0] [i_0]), 14857))))))));
        var_19 = (max((((((var_11 ? 13072 : 3339265631))) ? ((1 ? (arr_11 [i_0]) : var_1)) : ((var_10 ? var_3 : 1883132384)))), (((((arr_10 [i_0] [i_0] [i_0] [i_0]) ? var_9 : var_3))))));
    }
    #pragma endscop
}
