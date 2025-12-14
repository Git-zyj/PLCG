/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(((var_9 >> (var_1 - 18446744071768049879))), var_14));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1 + 2] [3] = var_7;
                    arr_8 [i_0] [i_0] [i_1 - 2] [3] = (max(var_14, ((var_1 / ((min(var_13, (arr_6 [i_0] [7] [i_0]))))))));
                    var_16 = 27;
                    var_17 |= (((arr_5 [i_1 - 1]) ? ((min((arr_5 [i_1 + 2]), (arr_5 [i_1 + 2])))) : (arr_5 [i_1 - 1])));
                }
            }
        }
    }
    #pragma endscop
}
