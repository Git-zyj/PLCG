/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [3] = ((!(((1648259821 ? (arr_0 [i_0]) : (~98))))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((-168 ? (((arr_4 [i_1 - 3] [i_1 - 3] [i_1 - 2]) % (arr_6 [i_0] [i_0] [i_0]))) : -157));
                    var_15 = ((((min((((var_5 ? -1 : 95))), -14754279517763026945))) ? (arr_0 [i_2]) : 40365502));
                }
            }
        }
    }
    #pragma endscop
}
