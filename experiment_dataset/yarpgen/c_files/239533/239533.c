/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = 11012;
                var_10 += ((var_8 ^ (((((28215 << (110 - 106))))))));
                var_11 -= var_5;
            }
        }
    }
    var_12 = (min(var_12, var_0));
    var_13 += ((((((min(-1290973446, 16888498602639360)) == ((((var_0 + 2147483647) << (((var_9 + 74) - 24)))))))) ^ var_9));
    #pragma endscop
}
