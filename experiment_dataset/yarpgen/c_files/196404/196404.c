/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    var_11 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_12 = -1477406400;
                var_13 = 2147483648;
                var_14 = (min(var_14, 16744448));
                var_15 = 1;
                var_16 = 18446744073709551615;
            }
        }
    }
    #pragma endscop
}
