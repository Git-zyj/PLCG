/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((var_0 ? (!var_0) : var_4))) ? var_1 : ((((!((max(26068, 34398)))))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_13 |= 3954;
                    arr_6 [i_0] = var_3;
                }
            }
        }
    }
    #pragma endscop
}
