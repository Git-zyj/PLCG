/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] = (((!var_6) || 242));
                    var_11 = ((-var_0 == ((((!var_6) | ((1 & (arr_0 [i_1] [5]))))))));
                    arr_10 [0] [i_1] [0] [0] = (-64 == 1);
                    var_12 = ((-1365802769 ? 0 : 1));
                }
            }
        }
    }
    var_13 = (1 ? -121 : 1);
    #pragma endscop
}
