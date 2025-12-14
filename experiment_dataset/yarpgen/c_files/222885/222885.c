/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    arr_10 [i_0] [i_1] [i_2] [i_1] = (max((arr_1 [4]), (((((~var_6) + 2147483647)) >> (((min(var_10, 127)) + 2127514484))))));
                    var_20 -= (min(var_11, (min((((arr_6 [i_0]) ? (arr_6 [i_1]) : -1)), ((min(127, (arr_4 [i_0] [i_0]))))))));
                }
                arr_11 [i_1] [4] [13] = (min((((arr_9 [i_0] [i_1] [i_1]) ? (arr_9 [i_0] [i_0] [10]) : (arr_9 [6] [i_1] [i_1]))), -180930141));
            }
        }
    }
    var_21 = ((var_19 - (min(2147483635, ((87 ? -102 : 127))))));
    #pragma endscop
}
