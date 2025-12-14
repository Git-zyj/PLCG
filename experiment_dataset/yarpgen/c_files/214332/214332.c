/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += ((((((~var_4) != (((min(1, var_5))))))) != 1));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_12 -= ((((min(-7073507767313368222, (arr_3 [i_0 - 1] [i_0 - 1] [i_0 + 1])))) ? ((var_1 ? 1 : (arr_3 [i_0 - 2] [i_0 + 1] [i_0 + 1]))) : ((var_1 >> (((arr_3 [i_0 + 1] [i_0 - 2] [i_0 - 2]) - 17251))))));
                var_13 = 16777184;
                var_14 &= (((((1 / (arr_3 [i_0] [i_1] [i_1]))))) || (((~(arr_6 [i_0 - 1] [i_0 + 1])))));
            }
        }
    }
    #pragma endscop
}
