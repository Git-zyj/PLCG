/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, ((max((((((max((arr_0 [i_1]), 68))) && var_10))), ((2145981983 ? (arr_2 [i_0]) : (arr_2 [i_0]))))))));
                    arr_10 [i_2] [i_0] = ((((max((arr_1 [i_1]), (arr_4 [i_0] [i_2])))) ? ((max((arr_4 [i_0] [i_2]), (arr_1 [i_0])))) : ((~(arr_4 [i_2] [i_1])))));
                    var_14 = (((((arr_9 [i_0]) != ((var_5 ? (arr_6 [i_0] [9] [i_2]) : (arr_7 [i_2]))))) ? ((min((~-63), (arr_8 [20] [i_1] [i_1] [0])))) : ((((arr_8 [i_2] [i_2] [i_1] [i_0]) || var_5)))));
                }
            }
        }
    }
    var_15 = (max(var_15, var_8));
    #pragma endscop
}
