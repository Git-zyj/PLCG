/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= ((12528160491709371195 ? var_13 : 2093457021));
    var_17 = (max((var_6 * var_8), ((~(max(17616964101211834157, var_9))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((((((!5918583582000180419) + (!var_6)))) ^ 8660579847942621522));
                var_18 ^= (((arr_5 [i_0] [i_1] [i_1]) / -14106));
                arr_7 [i_1] [i_1] [i_0] &= (((0 >> (-843309558 + 843309578))));
            }
        }
    }
    #pragma endscop
}
