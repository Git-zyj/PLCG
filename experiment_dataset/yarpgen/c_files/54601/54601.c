/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_19 = (((+-45) ? ((-(((var_10 == (arr_1 [i_0] [i_0])))))) : (-32767 - 1)));
                    var_20 -= ((8267339557301511962 ? (((arr_2 [i_0]) ? 32753 : var_12)) : (-32762 + -32730)));
                }
            }
        }
    }
    var_21 = var_9;
    var_22 -= var_5;
    #pragma endscop
}
