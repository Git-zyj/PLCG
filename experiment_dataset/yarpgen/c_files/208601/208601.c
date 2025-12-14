/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0] = (max((((!(arr_0 [i_1 - 1])))), (min((arr_0 [i_1 - 1]), (arr_0 [i_1 - 1])))));
                    arr_9 [i_0] [i_0] [i_0] = (min((min((max((arr_2 [i_1]), (arr_1 [2] [i_1 - 1]))), ((max((arr_3 [i_0]), (arr_6 [i_0])))))), ((((((arr_6 [i_0]) ? (arr_4 [i_1 - 1]) : (arr_5 [i_0])))) ? (min(17774744788710267159, 4567096656810701169)) : (min((arr_6 [i_0]), (arr_0 [i_0])))))));
                }
            }
        }
    }
    var_11 = ((!((max((max(var_1, var_0)), (max(var_2, var_0)))))));
    var_12 = ((var_9 ? var_3 : var_5));
    #pragma endscop
}
