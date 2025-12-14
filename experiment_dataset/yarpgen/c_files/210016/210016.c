/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = max(var_12, var_4);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_17 = var_14;
                    arr_8 [i_1] [i_1] [i_2] = (max(((((arr_2 [i_0] [i_1] [i_2]) * (arr_2 [i_2] [i_0] [i_0])))), (max(((min((arr_7 [i_2] [i_1] [i_1] [7]), var_13))), (((arr_5 [i_1] [i_1]) * (arr_6 [i_1] [i_1] [i_1] [i_1])))))));
                }
            }
        }
    }
    var_18 = var_2;
    #pragma endscop
}
