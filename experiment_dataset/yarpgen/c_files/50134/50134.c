/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 8971634350555483099;
    var_21 = (((var_0 || var_12) || (((var_16 ? var_10 : 0)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_22 = (min(var_22, ((((((1 > (arr_3 [i_1 - 1] [i_1 - 1])))) != (var_4 != -1))))));
                    arr_8 [i_0] [i_1 - 1] [i_0] = 2147483647;
                    arr_9 [i_0] = (max((max((arr_2 [13] [i_2] [i_0]), -31717)), (1 || 1)));
                }
            }
        }
    }
    #pragma endscop
}
