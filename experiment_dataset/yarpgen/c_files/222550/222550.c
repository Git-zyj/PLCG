/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_12 = (max(var_12, 17183285853310619413));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 13;i_3 += 1)
                {
                    {
                        var_13 = (min(var_13, (arr_0 [i_3])));
                        arr_10 [i_2] = (-(var_11 == 17183285853310619396));
                        arr_11 [i_0] [i_1] [i_0] [i_2] [i_1] [i_3] = (((min(17183285853310619421, 208)) & ((min((max(var_6, 12657)), (arr_2 [i_3]))))));
                    }
                }
            }
        }
    }
    var_14 = (min(var_14, var_3));
    var_15 *= (((var_9 ? (max(var_1, (-127 - 1)) : (1465356273 | 127)))));
    #pragma endscop
}
