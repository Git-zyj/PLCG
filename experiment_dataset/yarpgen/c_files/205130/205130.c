/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((1 != ((-416428644 ? (max(var_9, 9)) : 127))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [5] [5] [i_2] [5] = ((-125 ? (arr_5 [i_1] [2]) : ((~(arr_6 [i_0] [i_0] [i_0] [i_0])))));
                    var_14 = (min(var_14, (((((127 == (arr_5 [i_1 + 1] [i_2]))) ? (arr_5 [i_0] [i_0]) : (arr_5 [i_1 - 3] [i_2]))))));
                }
            }
        }
    }
    var_15 = (var_5 ^ var_3);
    #pragma endscop
}
