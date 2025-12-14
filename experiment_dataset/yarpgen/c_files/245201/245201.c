/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-(max(((-624441391 ? var_0 : 1)), var_0))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_11 = (max(var_11, ((((max(((var_2 ? (arr_7 [i_0] [i_0] [1] [1]) : (arr_0 [i_1] [i_1]))), (arr_6 [i_0] [i_0] [i_1] [i_1]))) / (arr_7 [13] [i_0] [i_1] [i_2]))))));
                    arr_8 [i_2] [i_2] = (max(((max(1, 1))), ((((min(var_8, -64))) ? 1 : 7))));
                    arr_9 [i_0] [i_1] [i_0] = (var_4 ^ -var_8);
                }
            }
        }
    }
    #pragma endscop
}
