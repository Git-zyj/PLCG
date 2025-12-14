/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= (max(var_6, ((max(((var_7 ? 25955 : var_7)), -8)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_12 = ((((arr_4 [1] [i_0] [i_1]) ? var_5 : (arr_0 [i_1]))) != (7 != var_9));
                var_13 = (max((max(710261535, 7272298204327082475)), (max(var_0, (arr_1 [i_0] [i_1])))));
            }
        }
    }
    #pragma endscop
}
