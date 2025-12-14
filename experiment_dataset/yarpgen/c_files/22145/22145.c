/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-(min((max(var_1, var_8)), var_4))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = var_0;
        arr_4 [i_0] = (arr_1 [1]);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    arr_14 [i_3] [i_2] [0] &= (((((-(max(var_8, (arr_0 [i_3])))))) ? ((min((arr_1 [i_1]), (max(-98, 43530))))) : ((((arr_10 [i_1]) <= (arr_11 [i_1] [i_3] [4]))))));
                    arr_15 [i_2] [8] [i_3] = (((-49107960 ? 1 : -49107970)));
                    arr_16 [i_2] [i_2] = 653;
                }
            }
        }
        arr_17 [i_1] = ((-(arr_10 [i_1])));
    }
    var_17 = var_13;
    #pragma endscop
}
