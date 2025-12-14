/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (((1622492952 > (((~909230848) ^ (((28 << (3536298770 - 3536298756)))))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 = (((((3536298770 ? 758668526 : 1))) ? (((!var_0) % var_0)) : (~0)));
                    arr_11 [i_0] [i_0] [i_0] [i_0] = (~7);
                }
            }
        }
    }
    #pragma endscop
}
