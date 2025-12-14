/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((var_7 <= -921293534), (((!(var_7 <= 1))))));
    var_11 = ((min(((var_6 ? 54 : var_4)), (!var_1))) >> (((((var_2 + 2147483647) >> (1 < var_2))) - 1402530226)));
    var_12 = (((-(510519668692608684 <= var_6))) > (((var_7 - var_1) ? var_1 : ((var_5 ? 1 : var_6)))));
    var_13 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_14 = (min(1, (((((arr_2 [i_1]) + var_6)) - (arr_3 [i_1 + 1] [i_1 - 1])))));
                    var_15 = 22295;
                }
            }
        }
    }
    #pragma endscop
}
