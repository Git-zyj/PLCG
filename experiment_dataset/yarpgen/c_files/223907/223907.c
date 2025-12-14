/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_14 = (max(var_14, 2497752287));
                arr_6 [i_1] [i_0] = (((((24 ? 1797215008 : 2497752262))) ? (max((arr_3 [i_0] [i_1]), ((var_8 ? var_1 : 63)))) : (((((((arr_1 [i_0]) << var_12))) ? (arr_1 [0]) : (((arr_4 [i_0]) ? var_13 : var_6)))))));
                arr_7 [i_0] = (((arr_3 [i_0] [i_1]) ? var_3 : var_5));
            }
        }
    }
    var_15 &= ((var_4 ? 705807642 : (!9372)));
    #pragma endscop
}
