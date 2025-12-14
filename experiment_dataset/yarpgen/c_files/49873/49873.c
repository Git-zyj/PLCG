/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= var_1;
    var_11 ^= (max((var_3 > var_7), var_9));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_12 += (4127458948 ? 167508344 : 4127458942);
                var_13 = (min(var_13, 6));
            }
        }
    }
    var_14 = var_7;
    #pragma endscop
}
