/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_16 = (arr_5 [i_0] [11] [i_2]);
                    arr_9 [i_2] = (min(((((var_5 ? -126 : var_5)) % (((var_11 ? 1652610839 : var_10))))), ((((var_13 == (arr_8 [i_0] [i_0] [i_0])))))));
                    var_17 = (max(3, 422630049));
                    arr_10 [i_2] [i_1] [i_1] [i_2] = (max(18, ((((((-(arr_3 [i_0] [i_2])))) ? (arr_4 [i_0] [i_1] [i_2]) : ((var_0 ? (arr_5 [i_2] [12] [1]) : 40687340)))))));
                }
            }
        }
    }
    var_18 = var_3;
    #pragma endscop
}
