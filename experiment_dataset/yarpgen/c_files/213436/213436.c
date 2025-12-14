/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_19 = (max(var_19, (((3584 ? (((-(arr_3 [i_1 - 1] [i_0])))) : (max((arr_0 [i_1 - 3]), (arr_2 [i_0] [i_1]))))))));
                var_20 ^= ((((((arr_0 [i_0]) ^ (arr_0 [i_0])))) ? (max(-29263260498076479, var_11)) : (((var_0 ? (((arr_2 [i_0] [i_0]) ? 3596 : -1)) : (arr_3 [i_1] [i_1]))))));
                arr_4 [11] [i_1 - 3] = ((-((~((1018370409 ? (arr_0 [i_0]) : 29263260498076479))))));
            }
        }
    }
    var_21 = var_4;
    #pragma endscop
}
