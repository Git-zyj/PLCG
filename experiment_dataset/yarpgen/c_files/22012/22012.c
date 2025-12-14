/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((!((!(((var_4 ? var_9 : 254)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_1] = ((~((((var_5 ? -3 : var_3))))));
                    var_20 = var_4;
                }
            }
        }
    }
    var_21 = ((-var_6 ? ((var_1 >> (((min(var_15, -1638507276189495212)) + 1638507276189495216)))) : var_9));
    #pragma endscop
}
