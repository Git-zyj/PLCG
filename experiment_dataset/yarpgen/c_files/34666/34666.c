/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((((((min(var_3, var_6))) ? (var_9 * var_5) : ((var_6 ? var_9 : var_9))))), (max(var_4, (max(10, 152577895444243230))))));
    var_12 = max((max((((var_0 ? var_5 : var_4))), var_6)), var_9);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 24;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, ((max(((min(((((arr_6 [i_0] [i_1 - 1] [i_2]) || (arr_0 [i_0])))), -var_8))), (min((((arr_7 [i_2] [i_1] [i_0]) ? var_0 : var_5)), var_9)))))));
                    arr_9 [i_0] [i_1] [i_2] [i_2] = ((~(min((arr_2 [i_0] [i_1]), (arr_2 [i_0] [i_1])))));
                    arr_10 [i_2] [i_1 - 1] [i_0] = ((((((arr_3 [i_1 + 1] [i_1 - 1] [i_1 + 1]) ^ (arr_3 [i_1 + 1] [i_1 - 1] [i_1 + 1])))) ? ((max((arr_7 [i_1 + 1] [i_1 - 1] [i_1 + 1]), (arr_7 [i_1 + 1] [i_1 - 1] [i_1 + 1])))) : ((min((arr_8 [i_1 + 1] [i_1 - 1] [i_1 + 1]), (arr_3 [i_1 + 1] [i_1 - 1] [i_1 + 1]))))));
                }
            }
        }
    }
    var_14 ^= var_5;
    #pragma endscop
}
