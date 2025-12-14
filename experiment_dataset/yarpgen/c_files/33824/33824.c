/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;
    var_18 -= var_16;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 = (((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? (-32767 - 1) : (max((arr_1 [i_0]), (((arr_1 [i_0]) & -7372779800113885915)))));
        var_20 = (max((max((arr_1 [i_0]), (max((arr_1 [i_0]), var_9)))), ((((!var_10) >= (max(var_1, (arr_0 [i_0]))))))));
        arr_2 [i_0] = ((~(2123983266 - 0)));
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        var_21 = (min(var_21, ((max((arr_4 [i_1 + 2] [i_1 - 1]), ((max((arr_3 [i_1 + 2]), (arr_3 [i_1 - 1])))))))));
        var_22 = ((var_10 ? ((((!(((arr_4 [i_1] [i_1]) || (arr_4 [i_1] [i_1]))))))) : (((arr_5 [i_1 - 1]) ? var_1 : (arr_5 [i_1 - 1])))));
    }
    var_23 += ((max(5210, var_7)));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            {
                arr_12 [i_2] [i_2] [i_2] = ((!(((max((arr_10 [9] [i_3] [9]), (arr_5 [i_2])))))));
                var_24 = ((+(max(-5210, (((arr_4 [i_2] [i_2]) ? (arr_5 [i_3]) : -80))))));
            }
        }
    }
    #pragma endscop
}
