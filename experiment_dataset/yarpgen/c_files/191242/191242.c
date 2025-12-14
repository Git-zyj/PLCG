/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_21 += (arr_2 [i_2]);
                    var_22 = (min((arr_1 [i_0]), (((-(32767 % var_6))))));
                    var_23 = (max((((max(7437, -109)))), (max(((-(arr_7 [i_0] [i_0]))), var_10))));
                }
            }
        }
    }
    #pragma endscop
}
