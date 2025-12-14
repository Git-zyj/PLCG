/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_12 += (((arr_2 [i_0] [i_1] [i_1]) ? (arr_2 [i_0] [i_0] [i_0]) : -5));
                var_13 = (max(2147483629, 1));
                var_14 = (min(1, (!63420)));
                arr_4 [i_0] [i_0] = (((max((arr_1 [i_1]), ((67106816 ^ (arr_1 [i_0]))))) >> ((((((max(1, (arr_2 [1] [i_1] [i_1])))) ? (arr_2 [i_0] [i_0] [i_0]) : ((-(arr_2 [i_0] [i_0] [13]))))) - 8298))));
            }
        }
    }
    #pragma endscop
}
