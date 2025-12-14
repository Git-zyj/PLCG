/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_14;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_20 = var_18;
                    arr_7 [i_2] [i_0] = (!(((~(arr_6 [i_1] [i_1 + 2] [i_1 - 2] [i_1 + 1])))));
                    var_21 = (min(var_21, (((((max((min((arr_4 [i_2] [6]), (arr_6 [i_1] [i_1] [9] [i_0]))), (((arr_1 [i_0] [i_0]) ? (arr_6 [9] [9] [7] [i_2]) : var_13))))) ? (((!(arr_2 [9] [i_2])))) : (((((min((arr_3 [i_1] [i_0]), 482685900826400087))) || ((!(arr_4 [i_0] [i_2])))))))))));
                }
            }
        }
    }
    #pragma endscop
}
