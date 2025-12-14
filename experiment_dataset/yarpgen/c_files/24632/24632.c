/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = 1;
                arr_5 [i_0] [i_1] = ((-6267330627039158876 > (((((max(118, 1))) <= -6267330627039158876)))));
                var_16 = ((-6267330627039158876 ? ((-6267330627039158862 ? 1 : 1)) : (16 | 1)));
            }
        }
    }
    var_17 &= ((3894189982 ? (1 ^ 10179) : 6267330627039158875));
    var_18 = (min(var_18, var_2));
    #pragma endscop
}
