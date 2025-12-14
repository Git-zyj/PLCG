/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;
    var_13 = (min(39, ((~(min(169, 1483444479))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_14 = (min(var_1, var_2));
                arr_4 [i_1] = ((-(((arr_0 [i_0 - 1]) ^ var_6))));
                var_15 = ((!(~242)));
            }
        }
    }
    var_16 = (max(var_11, var_8));
    #pragma endscop
}
