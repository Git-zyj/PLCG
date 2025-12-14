/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1 - 2] [i_1 - 2] = ((~(((max(var_11, var_13)) | (((max(var_11, -17))))))));
                    arr_10 [i_0] [i_0] [6] [i_2 - 1] = ((191 ? (((((4 ? var_10 : (arr_6 [i_0] [i_1] [i_2])))) ? var_5 : (arr_7 [1] [1]))) : (arr_7 [i_0] [i_0])));
                }
            }
        }
    }
    var_15 = var_7;
    #pragma endscop
}
