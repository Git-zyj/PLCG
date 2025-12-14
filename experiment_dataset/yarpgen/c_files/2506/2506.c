/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_9;
    var_20 = (min(var_14, (min(1, (min(757373148646049917, 10))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_21 = (max(var_21, ((min((((-757373148646049903 - ((757373148646049932 | (arr_3 [i_1])))))), (~18079397390565201488))))));
                    arr_8 [i_2] [i_0] [i_0] [i_0] = var_6;
                }
            }
        }
    }
    #pragma endscop
}
