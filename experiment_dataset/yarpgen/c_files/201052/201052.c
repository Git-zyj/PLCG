/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (((((((min((arr_1 [i_0]), var_0))) - 54880))) ? ((-(arr_2 [i_1 - 1] [i_1 - 2] [i_1 - 1]))) : (((!(((var_3 ? 54880 : -73))))))));
                var_17 = -1;
                var_18 = (min(16384, ((-(arr_3 [i_1 - 1] [i_1] [i_0])))));
                arr_5 [i_0] [i_1 - 1] [i_1] = (arr_2 [i_0] [i_1] [i_1]);
                var_19 -= (((arr_1 [i_1 - 1]) < 73));
            }
        }
    }
    var_20 += var_14;
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            {
                var_21 += (~var_9);
                var_22 = (arr_8 [i_2] [4]);
            }
        }
    }
    #pragma endscop
}
