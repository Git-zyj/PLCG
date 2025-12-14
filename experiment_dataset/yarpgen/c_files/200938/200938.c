/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((var_5 > 1073737728) - 746419730));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0 + 2] = ((-var_3 + ((var_10 ? (arr_7 [i_1 - 1]) : var_4))));
                    var_15 = ((~(max((arr_8 [i_0] [i_1 + 1] [9] [i_2 - 1]), (arr_8 [i_0 + 1] [i_1] [i_2 + 1] [i_0 - 2])))));
                }
            }
        }
    }
    #pragma endscop
}
