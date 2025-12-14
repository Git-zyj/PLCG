/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((!(((var_1 ? var_2 : var_3))))) ? var_10 : var_3));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] = ((~(((!((min((arr_3 [3] [i_1]), (arr_2 [10])))))))));
                    var_13 = ((((max(2855381626590647170, -3495358857563238226))) ? (((arr_2 [i_1 - 1]) ? (arr_2 [i_1 - 1]) : (arr_2 [i_1 - 1]))) : ((~(arr_2 [i_1 - 1])))));
                    var_14 = (((arr_6 [i_1] [i_1 - 1] [i_1] [i_1]) ? ((((((arr_3 [i_1] [9]) ? (arr_0 [0] [i_1]) : (arr_0 [4] [i_1 - 1])))) ? (arr_2 [4]) : (arr_0 [i_1 - 1] [i_1 - 1]))) : (arr_0 [i_0] [i_1 - 1])));
                    var_15 -= (min((((!((max((arr_5 [i_0] [9]), (arr_4 [i_0] [i_1 - 1] [5]))))))), ((((!(arr_7 [i_2]))) ? (((-(arr_0 [1] [7])))) : (((arr_1 [i_1 - 1] [7]) ? (arr_2 [7]) : (arr_4 [i_2] [5] [5])))))));
                }
            }
        }
    }
    #pragma endscop
}
