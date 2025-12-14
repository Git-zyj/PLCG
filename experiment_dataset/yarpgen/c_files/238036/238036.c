/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_13));
    var_21 = (min(var_21, (~-52)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [10] &= ((((((var_19 + 2147483647) >> (28116 - 28087)))) != (max(var_13, (arr_4 [i_0] [18] [i_2])))));
                    var_22 += 4398046511103;
                }
            }
        }
    }
    #pragma endscop
}
