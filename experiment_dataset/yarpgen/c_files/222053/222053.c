/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (max((((!(arr_0 [i_0])))), var_1));
                arr_7 [i_0] [i_1] [i_0] = var_1;
                arr_8 [3] [3] [3] = (min(1023, 15));
                var_10 = ((-((-((5 ? 4010 : -597707323))))));
            }
        }
    }
    var_11 = ((-(((var_6 ? var_4 : var_2)))));
    #pragma endscop
}
