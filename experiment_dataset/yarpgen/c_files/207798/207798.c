/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0])))) ? ((max(255, (arr_0 [i_0])))) : (arr_0 [i_0])));
        var_18 = (min((max(1, (min((-32767 - 1), 1)))), (arr_1 [i_0])));
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        var_19 = (((~32765) > (((arr_2 [i_1]) ? (arr_2 [i_1 + 1]) : 1))));
        var_20 = ((-((~(((!(arr_4 [i_1]))))))));
        var_21 = ((max((arr_4 [i_1 + 1]), (arr_4 [i_1 - 1]))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    var_22 = 12288;
                    var_23 = (max((((!(arr_2 [i_1 + 1])))), (arr_2 [i_1 - 1])));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_24 = (-32757 && (arr_12 [i_4]));
        var_25 = ((arr_11 [i_4]) < ((min(1, (arr_11 [i_4])))));
    }
    var_26 = var_8;
    var_27 = (min(var_4, (min(0, (min(9, var_11))))));
    var_28 = (max(var_28, (!var_9)));
    #pragma endscop
}
