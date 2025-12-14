/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, (((var_4 || (arr_5 [20] [i_0] [20]))))));
                    var_18 *= (max(((((arr_7 [i_0] [12] [i_2]) == (arr_7 [i_0] [22] [i_2])))), 1127851274331734545));
                }
            }
        }
    }
    var_19 = (((((var_9 % 3) ? -1836830974 : (max(var_0, var_7)))) > var_7));
    #pragma endscop
}
