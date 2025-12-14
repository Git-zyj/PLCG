/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((var_3 / ((var_16 ? 7 : var_8)))) <= (min(((min(var_7, 423926645))), var_17))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_2] = (max((max(423926632, (max(16, (arr_7 [i_0] [i_1] [i_2 - 1]))))), (((arr_7 [i_0] [i_2 - 1] [i_2 - 1]) ? (arr_2 [7]) : (arr_7 [i_2 - 1] [i_2 - 1] [i_2 - 1])))));
                    var_19 = ((((-(arr_0 [i_0] [i_0])))) ? (((arr_5 [10] [i_2]) << (-1188790376275915635 + 1188790376275915682))) : (max(((min(423926656, 6))), (((arr_2 [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_7 [i_0] [i_1] [i_0]))))));
                }
            }
        }
    }
    var_20 = (min(var_20, var_0));
    #pragma endscop
}
