/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, ((((~6) ? (arr_4 [1] [4] [6] [12]) : (arr_1 [12] [i_1]))))));
                    var_21 = (max(var_21, 28672));
                }
            }
        }
    }
    var_22 = (max((((((var_5 ? var_17 : 791284830))) ? var_13 : var_10)), var_10));
    #pragma endscop
}
