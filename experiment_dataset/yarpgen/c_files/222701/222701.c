/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -73;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_12 = (min((((arr_1 [i_2 - 2]) ? (arr_1 [i_2 - 2]) : (arr_1 [i_2 + 1]))), (((arr_6 [i_2 - 1]) >> (((arr_8 [i_1 + 1] [i_1 - 1] [i_1] [i_1]) + 6928689963926077650))))));
                    arr_9 [i_0] [i_1 - 2] = ((((arr_6 [i_1 - 2]) * var_1)));
                }
            }
        }
    }
    var_13 = var_6;
    var_14 = ((107 ? 1308525841346819322 : 72));
    var_15 = (max(var_15, (((!((min(-752400630411502643, -73))))))));
    #pragma endscop
}
