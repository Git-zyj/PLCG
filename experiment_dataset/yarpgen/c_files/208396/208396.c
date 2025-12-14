/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_1] = (max((arr_3 [i_0]), ((((min(0, 1))) & (arr_4 [i_1] [i_2 - 1])))));
                    var_16 = max(var_5, var_2);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                arr_17 [i_3] = ((max(var_12, 1)));
                var_17 ^= ((((arr_16 [i_3]) && (arr_13 [i_3]))) && (max(1, 0)));
            }
        }
    }
    var_18 = (min(var_18, (max(((max(var_0, var_2))), var_9))));
    #pragma endscop
}
