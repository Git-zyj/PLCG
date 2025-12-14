/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((var_9 & 1) ^ (max((max(var_6, var_4)), var_3))));
    var_13 = ((-1 ? -4 : 343831931));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 = ((7103997197486448123 ? ((-(arr_3 [i_0] [i_0] [i_2]))) : (((arr_0 [i_0]) / (arr_6 [i_1])))));
                    var_15 = (((~1) / ((((3 && var_5) && (arr_1 [i_2]))))));
                }
            }
        }
    }
    #pragma endscop
}
