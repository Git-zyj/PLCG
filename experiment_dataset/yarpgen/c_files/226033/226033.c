/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_7));
    var_12 = (((((!((min(var_5, var_9)))))) > var_3));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, (arr_5 [i_0])));
                    var_14 = (~(((((~(arr_1 [i_2] [i_1])))) ? (var_0 % var_0) : (arr_5 [i_2]))));
                    var_15 = (max(var_15, (((((((max((arr_5 [i_0]), (arr_0 [i_0] [0])))) ? (((((arr_5 [i_2]) < (arr_3 [i_0] [4]))))) : ((~(arr_2 [9]))))) >= (((((arr_6 [i_2] [i_1] [i_0]) <= (max((arr_1 [i_0] [15]), (arr_1 [i_0] [i_2]))))))))))));
                }
            }
        }
    }
    #pragma endscop
}
