/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = 0;
                    arr_9 [i_2] [i_1] [i_0] = (((((!((min((arr_1 [i_1] [i_0]), (arr_3 [i_0] [i_0] [i_0]))))))) << (var_3 + 25303)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 18;i_4 += 1)
        {
            {
                arr_14 [i_4] [i_3] |= ((((((var_15 / var_13) + (arr_13 [i_3] [i_3])))) <= ((((arr_11 [i_3]) ? (arr_10 [i_3] [i_3]) : (arr_10 [i_3] [i_3]))))));
                var_20 = (max(var_20, ((min((arr_12 [i_3] [i_3]), -23657)))));
            }
        }
    }
    var_21 = (min((min(var_15, 47229)), ((min(var_10, var_2)))));
    #pragma endscop
}
