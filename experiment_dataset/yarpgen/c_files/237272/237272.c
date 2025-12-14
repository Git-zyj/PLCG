/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [8] = -349853159;
                arr_8 [16] [i_1] = ((1282042333 > (min(528826294, (528826290 + -410251033)))));
            }
        }
    }
    var_16 -= var_13;
    var_17 = -410251041;
    #pragma endscop
}
