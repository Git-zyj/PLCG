/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += max((min(((max(var_2, var_0))), -var_9)), (((max((-2147483647 - 1), var_8)) | (min((-2147483647 - 1), 927175974)))));
    var_11 ^= -var_1;
    var_12 -= (max(var_0, (min(var_8, var_0))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_13 += min(var_8, var_4);
                arr_7 [i_0] [i_0] [i_0] = var_2;
            }
        }
    }
    var_14 = var_4;
    #pragma endscop
}
