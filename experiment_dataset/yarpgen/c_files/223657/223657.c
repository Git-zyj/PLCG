/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (!21);
    var_15 = (min(var_7, (((min(var_5, var_11))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_16 &= 21;
                    arr_8 [i_1] [i_1] [i_1] = ((((((86 && (arr_3 [i_2] [i_1] [i_1 + 1]))) * 10))));
                }
            }
        }
    }
    #pragma endscop
}
