/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((min((72 / var_1), 6246061152985689582)));
    var_11 = -5581;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = ((max((-1 <= var_3), (max(var_7, 378495205)))));
                var_12 = var_5;
                var_13 = var_8;
            }
        }
    }
    var_14 = (max((max(var_9, (max(var_5, var_9)))), (((min(var_2, var_9))))));
    #pragma endscop
}
