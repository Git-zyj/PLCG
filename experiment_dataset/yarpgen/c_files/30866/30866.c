/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_2] [i_0] [i_2] = (65535 || -4666);
                    arr_12 [i_0] [i_1] [i_2] = (((-1254854452 | 1254854452) ? ((-1254854452 | (65528 % 1254854452))) : ((1254664213 ? ((127 ? 730998652 : -9642)) : ((min(45, 65528)))))));
                    var_16 = 65533;
                }
            }
        }
    }
    var_17 = (max(var_17, ((((min(65511, 1)))))));
    var_18 |= var_12;
    #pragma endscop
}
