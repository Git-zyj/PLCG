/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (((var_7 / (((337320920 ^ (((2 ? 65528 : var_10)))))))))));
    var_18 = -5947303023439855291;
    var_19 *= var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 &= 2147483626;
                    var_21 = (max(var_21, (!var_9)));
                    var_22 = (var_11 << var_9);
                }
            }
        }
    }
    #pragma endscop
}
