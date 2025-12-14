/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    var_12 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_13 = ((((~(arr_6 [i_0] [4] [i_2] [6]))) | (~192)));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_9 [i_0] [i_2] = ((192 <= (arr_7 [i_0] [i_0] [i_2] [i_2] [8])));
                        var_14 = (min(var_14, ((min(((197 ? -5 : 197)), (arr_7 [i_0] [1] [i_0] [i_3] [i_1]))))));
                        arr_10 [7] [i_0] &= ((~((var_10 ^ (arr_8 [i_0] [i_3] [3] [i_0])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
