/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] [i_1] = (arr_1 [i_0]);
                arr_5 [i_0] [i_1] = (max((min((arr_2 [i_1]), (arr_2 [i_1]))), (arr_2 [i_1])));
                arr_6 [i_0] [i_1] = (min(13510, 1));
                var_19 = (arr_2 [i_1]);
            }
        }
    }
    #pragma endscop
}
