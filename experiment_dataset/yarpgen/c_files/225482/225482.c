/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((min((min(18862, 5662503528809995460)), ((max(var_2, 24))))), ((min((max(2602421993, 51065)), ((min(var_5, var_6))))))));
    var_12 = (min((max((min(var_7, -5662503528809995461)), ((min(1, var_1))))), (min((min(var_7, var_8)), (min(503316480, -1))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1] [i_0] = (min((min(((min((arr_6 [i_0] [i_0] [i_1] [i_0]), (arr_6 [i_2] [i_2] [i_0 + 2] [i_0 + 2])))), (min(var_1, var_8)))), (min((min((arr_2 [i_1] [i_1] [i_2]), var_1)), ((min(var_9, 6768)))))));
                    var_13 = (min(((min((min(6768, -788)), ((min(var_2, (arr_6 [i_0] [i_1] [i_2] [i_2]))))))), (min(((min(var_8, (arr_6 [i_2] [i_0] [i_0] [i_0])))), (min(0, 13))))));
                    var_14 = (min(var_14, ((min((min((max(1, 15960249624066344670)), ((min(var_2, (arr_2 [i_0] [i_1 + 1] [i_0])))))), ((min((min(6768, -5)), ((min((arr_7 [i_0 - 2] [i_0 - 2] [i_1 - 1] [i_1 - 1]), 1)))))))))));
                    arr_9 [9] [i_1] [i_2] [0] = (min(((min((min(var_5, (arr_1 [i_0] [i_0]))), ((min((arr_4 [i_0] [i_1] [i_2]), (arr_6 [i_0] [i_0] [i_2] [i_2]))))))), (max(((min((arr_5 [i_0] [i_1]), var_4))), (min(1, 5662503528809995460))))));
                }
            }
        }
    }
    #pragma endscop
}
