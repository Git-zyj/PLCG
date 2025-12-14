/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_1] = ((((61901 ? (arr_5 [i_1 + 2] [i_1]) : (arr_3 [i_1 - 1]))) >= ((19812 ? var_2 : (arr_6 [i_1] [i_1] [i_1 + 4])))));
                arr_9 [i_1] [i_1 + 3] [i_1] = (((((var_4 ? 31931 : var_5))) ? (((arr_5 [i_1 + 4] [i_1]) ? (arr_6 [i_1 + 4] [i_1] [13]) : var_7)) : ((61757 ? 65535 : (arr_5 [i_1 + 4] [i_1])))));
                arr_10 [i_1] = (((53398 == 65527) ? (((((62540 ? var_2 : 13749))) ? (35693 - var_3) : ((56614 ? var_0 : (arr_3 [10]))))) : (((((3659 ? 46584 : (arr_0 [i_0])))) ? ((3768 ? (arr_0 [i_0]) : (arr_6 [i_0] [i_1] [i_0]))) : (((arr_4 [i_0]) * (arr_7 [i_1])))))));
                var_11 = (max(((((((arr_2 [i_0]) ? 12137 : var_1))) ? ((42196 ? var_6 : 46170)) : ((max(64783, (arr_1 [i_1])))))), (max((var_2 & var_3), ((var_8 ? 63488 : var_4))))));
            }
        }
    }
    var_12 = (min((max((var_8 && 42741), ((var_6 ? 65535 : 42104)))), (((var_4 == var_0) ? ((var_1 ? var_6 : var_10)) : var_6))));
    #pragma endscop
}
