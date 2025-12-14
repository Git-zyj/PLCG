/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = 41;
                    arr_10 [i_2 + 2] [i_0] [i_0] [i_0] = (((((-((var_1 ^ (arr_6 [i_0])))))) ? (((-92 & 91) ? (((max(11946, (arr_7 [i_0] [i_1] [9] [i_2]))))) : (min(152, (arr_1 [i_0] [3]))))) : var_7));
                    var_12 = (min((min((min(11, var_3)), ((var_3 ? var_10 : (arr_6 [i_0]))))), (((max(var_9, var_6)) << (((~165) + 174))))));
                }
            }
        }
    }
    var_13 = ((min(var_9, (~var_1))) == (((((max(var_6, var_3))) ? ((var_11 ? var_2 : var_11)) : var_8))));
    #pragma endscop
}
