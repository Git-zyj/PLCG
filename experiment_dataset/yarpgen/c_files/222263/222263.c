/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((3458659474 | 836307822) || var_15));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_21 = ((~((3458659469 << (((~836307826) - 3458659438))))));
                    var_22 = (arr_5 [i_2] [i_1] [i_1]);
                }
            }
        }
    }
    #pragma endscop
}
