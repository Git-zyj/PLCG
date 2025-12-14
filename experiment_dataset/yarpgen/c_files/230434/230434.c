/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_14 == var_12);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 7;i_2 += 1)
            {
                {
                    var_21 = (max(34, 1351));
                    var_22 = ((~(((var_11 != (arr_2 [i_2 + 1]))))));
                    arr_7 [i_0] [i_1] [i_2 - 3] [i_0] = (((arr_0 [i_0]) ? var_2 : 0));
                }
            }
        }
    }
    #pragma endscop
}
