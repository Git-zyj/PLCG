/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_6 && (((min(5439555851219923587, var_9))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_1] [i_0] = var_1;
                    var_20 = (min((max(var_14, (arr_3 [i_1] [i_1]))), (((var_5 ? var_11 : (arr_6 [i_2] [i_1] [i_0]))))));
                    arr_11 [i_1] [i_1] [i_2] [i_2] = ((var_7 != (~var_8)));
                }
            }
        }
    }
    #pragma endscop
}
