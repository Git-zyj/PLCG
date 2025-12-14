/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_10 = (((((-25 % -4194304) && ((max(25, 1987618372))))) || (((var_6 ? (((var_2 ? var_0 : (arr_0 [i_0])))) : ((4294967290 ? 0 : var_4)))))));
                var_11 = (min(var_11, (((((max(((min((arr_2 [10] [10]), var_5))), (max(var_7, 127))))) ? (((((var_7 ? 0 : var_6))) ? ((var_9 ? 2198814938 : var_6)) : ((((arr_3 [1] [9] [1]) ? 4039802101 : 65408))))) : ((((!var_7) ? (((-25996 ? var_9 : var_5))) : (2 + 4294967272)))))))));
            }
        }
    }
    var_12 = var_1;
    var_13 = (max(((((!1) | (-30 | var_0)))), (((!16) ? (64145 / var_9) : (var_1 - 5)))));
    #pragma endscop
}
