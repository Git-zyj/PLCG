/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_12 *= ((((var_10 == (arr_6 [i_0] [i_1] [i_2]))) ? (((~(arr_6 [i_2] [i_1] [i_0])))) : (min(-1, var_4))));
                    arr_7 [i_0] [7] [6] [i_2] = ((((((arr_4 [i_0] [i_0] [0]) ? (arr_0 [i_0]) : var_2))) ? (min(var_3, -1)) : 1663586534));
                    var_13 = ((((min((((!(arr_4 [i_0] [i_0] [i_0])))), var_7))) - (((var_3 == 1020) ? ((((arr_1 [i_0] [i_0]) ? (arr_5 [i_0] [i_0] [i_1] [i_2]) : (arr_5 [i_0] [i_1] [i_0] [i_2])))) : 6762456688253455474))));
                    arr_8 [9] [i_0] [6] [i_0] = ((-var_6 ? (((~(arr_2 [i_2] [i_0])))) : (max(1476809385, 41814))));
                }
            }
        }
    }
    var_14 *= (max((min((-217688377 / var_8), (min(48033, var_6)))), (min(var_10, var_0))));
    var_15 = (((min((!6775114223591302836), ((var_7 ? 1 : 2818157892)))) ^ ((((var_2 < (!var_1)))))));
    var_16 += 6628666737943321956;
    #pragma endscop
}
