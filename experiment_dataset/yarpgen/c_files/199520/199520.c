/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((~((min(0, (min((arr_1 [i_0] [i_0]), 8)))))));
        arr_3 [i_0 - 2] = ((max((arr_1 [i_0 - 3] [i_0 - 3]), (arr_1 [i_0 + 2] [i_0 + 2]))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    arr_11 [i_1] [i_1] = ((max(12510465101574490187, (arr_6 [i_1]))));
                    var_15 = max((min(((~(arr_1 [i_1] [i_2]))), ((min((arr_4 [i_1] [i_2]), 9))))), (min(1, 604439278)));
                }
            }
        }
        arr_12 [i_1] = (max((min(var_1, 1)), ((min(55, (arr_5 [i_1]))))));
    }
    var_16 = (min(var_0, ((min((max(48526, -1419053489)), var_14)))));
    #pragma endscop
}
