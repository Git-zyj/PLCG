/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, ((((((30063 ? var_8 : -30063))) ? -var_4 : var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_12 = (min((arr_0 [i_0] [i_1]), ((var_10 ? var_4 : (arr_0 [i_0] [i_1])))));
                arr_7 [i_0] [i_0] [i_0] = ((((((-32 + 2147483647) >> (-32 + 37)))) != (((arr_4 [i_0] [i_0] [i_1]) + (arr_4 [i_0] [i_0] [i_0])))));
                arr_8 [i_0] = 30063;
            }
        }
    }
    #pragma endscop
}
