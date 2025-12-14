/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= 6078384847993393347;
    var_11 = (min((((((224 >> (-6078384847993393347 + 6078384847993393361)))) ? ((var_9 ? 20 : 20)) : var_8)), (((((max(-1, var_3))) >= var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_12 &= -397935297;
                var_13 -= (arr_1 [i_0]);
                arr_4 [i_0] [i_0] [i_1] = (arr_0 [i_1]);
            }
        }
    }
    #pragma endscop
}
