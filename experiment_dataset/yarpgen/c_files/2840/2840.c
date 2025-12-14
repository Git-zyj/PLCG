/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (!3684536264)));
    var_21 = (!220);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_2] = (152 - 255);
                    var_22 = (!139);
                    var_23 = (min(var_23, (((((((~61769) < -2147483647))) % ((((!0) || (1 - 14872279488245582271)))))))));
                }
            }
        }
    }
    #pragma endscop
}
