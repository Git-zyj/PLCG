/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(((((~var_9) != var_1))), (min((var_7 > var_10), ((var_6 ? var_8 : 1522496578))))));
    var_12 = (((var_5 || 7104604942944319676) < (max(((min(4068341347, var_0))), var_3))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = ((!(((min(0, 18446744073709551615)) >= (arr_4 [i_0] [i_1] [i_2] [i_1])))));
                    var_14 = max((min((arr_2 [i_0]), (arr_2 [i_2]))), (min((arr_2 [i_1]), var_1)));
                    arr_7 [i_0] [i_1] [i_2] = ((((((((((arr_6 [16] [i_1] [i_1] [i_2]) * (arr_6 [i_0] [i_0] [7] [i_2])))) && ((((arr_6 [i_0] [i_1] [i_1] [i_1]) + (arr_1 [i_0])))))))) ^ ((284822396 ? (min((arr_4 [i_2] [i_1] [i_0] [11]), 248)) : ((min(-903282269, -903282269)))))));
                }
            }
        }
    }
    #pragma endscop
}
