/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_12 = (~4294967295);
                    var_13 = (min(var_13, (arr_5 [i_0] [6] [i_2])));
                }
            }
        }
    }
    var_14 = (((var_6 + var_8) ? (((var_9 + var_3) * ((4294967295 ? 31 : 684513685)))) : ((((!((min(var_6, var_3)))))))));
    var_15 = ((min(1, 25)));
    #pragma endscop
}
