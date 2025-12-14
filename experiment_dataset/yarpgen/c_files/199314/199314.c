/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    var_11 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_0] [9] [0] [i_0] = ((+(((74 ^ var_4) ? (!var_1) : (-117 & 8192)))));
                    var_12 = var_9;
                    arr_9 [i_0] [i_1] [i_0] = ((-((max(243, 255)))));
                    arr_10 [i_0] [8] [i_2] = (max((((19 ? ((47237442 ? 14 : 47237463)) : (arr_5 [1] [i_1] [i_2] [i_0])))), (max(((47237441 ? var_5 : var_9)), ((1 ? var_5 : (arr_3 [i_0] [6] [1])))))));
                    var_13 = (min((!-691545344291102798), var_6));
                }
            }
        }
    }
    #pragma endscop
}
