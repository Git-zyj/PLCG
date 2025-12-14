/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_14 = ((((max(-57, 17524))) ? ((max(((18 ? (arr_1 [i_0] [i_2]) : var_0)), var_3))) : ((-(((arr_0 [i_0]) + 1797158980))))));
                    var_15 ^= (max((min((arr_2 [i_1] [i_2]), (arr_3 [i_0] [i_1] [i_2]))), ((~(arr_2 [i_1] [i_1])))));
                    var_16 = ((arr_3 [i_0] [i_1] [i_0]) ? (arr_0 [i_1]) : ((((((arr_1 [i_0] [i_1]) % (arr_4 [1] [i_0])))) ? ((17524 ? (arr_2 [i_1] [i_0]) : (arr_1 [i_1] [i_2]))) : var_7)));
                }
            }
        }
    }
    var_17 = ((var_1 + (~4973070557489300372)));
    var_18 = var_4;
    #pragma endscop
}
