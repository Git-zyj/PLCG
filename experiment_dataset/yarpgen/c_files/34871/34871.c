/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [11] = min(3529491144, 941792209);
                    arr_9 [i_0] [i_0] = (arr_5 [i_2] [0] [8] [6]);
                    var_12 = (min(var_6, (((arr_1 [1] [i_1]) ? var_9 : (((-(arr_6 [i_0] [i_1] [i_1] [i_2]))))))));
                }
            }
        }
    }
    var_13 = ((1 ? var_10 : ((1 ? -var_11 : (740690465 / 1)))));
    #pragma endscop
}
