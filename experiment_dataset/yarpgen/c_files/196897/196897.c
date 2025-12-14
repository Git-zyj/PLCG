/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 32767;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = (-24271 * 1652658835);
                var_12 = (max(var_12, (((((((!(var_8 | var_7))))) + (var_10 / var_1))))));
                var_13 = (arr_0 [i_1]);
                arr_7 [i_1] = (i_1 % 2 == 0) ? (((((((((arr_1 [i_1]) - (arr_1 [i_1])))) ? var_1 : (arr_4 [i_1]))) >> (((min(var_8, (arr_3 [i_1] [i_1] [i_1]))) + 159))))) : (((((((((arr_1 [i_1]) - (arr_1 [i_1])))) ? var_1 : (arr_4 [i_1]))) >> (((((min(var_8, (arr_3 [i_1] [i_1] [i_1]))) + 159)) + 4758315791886192450)))));
            }
        }
    }
    var_14 -= (((max(-var_3, var_3)) * var_8));
    var_15 = (((((max(var_8, var_4))) && ((max(var_5, 0))))));
    #pragma endscop
}
