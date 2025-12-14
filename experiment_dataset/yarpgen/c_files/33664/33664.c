/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = var_6;
                arr_4 [i_0] [15] [i_1 - 3] = (max((arr_0 [i_0 + 1] [i_0 + 1]), (((!(~var_0))))));
            }
        }
    }
    var_15 = 8846552202056191630;

    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_16 = (min(0, (((min((arr_5 [i_2]), 536739840))))));
        var_17 &= (((((((arr_7 [i_2]) ? 22904 : var_8)))) | (-4 | -3341938241457692452)));
        arr_9 [i_2] = (arr_5 [i_2]);
        var_18 = ((((max(1932166519, (arr_5 [i_2])))) ? (arr_8 [i_2] [i_2]) : ((((-1 | (arr_5 [i_2]))) | (((min(var_6, var_3))))))));
    }
    var_19 = ((var_2 ? ((min(var_4, var_11))) : var_12));
    var_20 = ((var_2 < ((-var_9 ? ((min(3, var_2))) : (var_0 | var_4)))));
    #pragma endscop
}
