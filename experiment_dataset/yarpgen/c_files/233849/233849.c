/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= ((0 ? var_0 : -var_8));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = (((-127 - 1) ? (min(((max((arr_1 [11]), (arr_7 [i_1] [i_1 - 1] [i_1] [i_1 + 4])))), -35715)) : ((max(-381, 381)))));
                    arr_9 [i_2] [i_0] [i_0] = 0;
                    arr_10 [i_2] [i_1] [0] [0] = (((((-(arr_7 [i_0] [i_0] [i_0] [i_0])))) ? (((((var_0 ? var_8 : var_2))) ? ((var_5 ? (arr_4 [i_0]) : (arr_2 [17] [i_0]))) : 25)) : 29805));
                    arr_11 [i_0] = (~21322);
                    var_11 = (((var_6 ^ -377) ? (arr_4 [i_2]) : (arr_7 [i_2] [i_1 + 2] [i_0] [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
