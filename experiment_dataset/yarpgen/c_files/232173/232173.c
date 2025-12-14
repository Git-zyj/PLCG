/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232173
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
            for (int i_2 = 4; i_2 < 15;i_2 += 1)
            {
                {
                    var_10 = ((9408761 >= (((((arr_5 [i_2]) ? 1428999615 : 246)) * (((arr_2 [10] [i_1] [i_2]) >> 1))))));
                    arr_6 [i_0] [i_1] [i_1] [i_2 - 3] = (max((max((arr_2 [i_0] [i_1] [i_2]), (~var_3))), (((!((((var_0 + 2147483647) >> var_9))))))));
                }
            }
        }
    }
    var_11 = (!167);
    #pragma endscop
}
